#include <search.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static char* keys[] = { "ciro", "hue", "br", "haha", "Lol" };
static char* values[] = { "cccc", "hhhh", "bbbb", "aaa", "oooo" };

typedef struct table_t {
  struct hsearch_data htab;
  size_t size;
} table_t;
#define TABLE_T_INITIALIZER                                                    \
  (table_t)                                                                    \
  {                                                                            \
    .htab = (struct hsearch_data){ 0 }, .size = 0                              \
  }

table_t* table_create(size_t size)
{
  table_t* table = malloc(sizeof(*table));

  *table = TABLE_T_INITIALIZER;
  hcreate_r(size, &table->htab);

  return table;
}

void table_destroy(table_t* table)
{
  hdestroy_r(&table->htab);
  free(table);
  table = NULL;
}

int table_add(table_t* table, char* key, void* data)
{
  unsigned n = 0;
  ENTRY e, *ep;

  e.key = key;
  e.data = data;
  n = hsearch_r(e, ENTER, &ep, &table->htab);

  return n;
}

void* table_get(table_t* table, char* key)
{
  unsigned n = 0;
  ENTRY e, *ep;

  e.key = key;
  n = hsearch_r(e, FIND, &ep, &table->htab);

  if (!n)
    return NULL;

  return ep->data;
}
