int state12= 0;

int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
int t6;
int t7;
int t8;
int t9;
int t10;
int t11;
int t12;
int t13;
int t14;
int t15;
int t16;
int t17;
int t18;
int t19;
int t20;
int t21;
int t22;
int t23;
int t24;
int t25;
int t26;
int t27;
int t28;
int t29;
int t30;
int t31;
int t32;
int t33;
int t34;
int t35;
int t36;
int t37;
int t38;
int t39;
char c0='\0';
char c1='\0';
char c2='\0';
char c3='\0';
char c4='\0';
char c5='\0';
char c6='\0';
char c7='\0';
char c8='\0';
char c9='\0';
char c10='\0';
char c11='\0';
char c12='\0';
char c13='\0';
char c14='\0';
char c15='\0';
char c16='\0';
char c17='\0';
char c18='\0';
char c19='\0';
char c20='\0';
char c21='\0';
char c22='\0';
char c23='\0';
char c24='\0';
char c25='\0';
char c26='\0';
char c27='\0';
char c28='\0';
char c29='\0';
char c30='\0';
char c31='\0';
char c32='\0';
char c33='\0';
char c34='\0';
char c35='\0';
char c36='\0';
char c37='\0';
char c38='\0';
char c39='\0';
char c40='\0';
char c41='\0';
char c42='\0';
char c43='\0';
char c44='\0';
char c45='\0';
char c46='\0';
char c47='\0';
char c48='\0';
char c49='\0';
char c50='\0';
char c51='\0';
char c52='\0';
char c53='\0';
char c54='\0';
char c55='\0';
char c56='\0';
char c57='\0';
char c58='\0';
char c59='\0';
char c60='\0';
char c61='\0';
char c62='\0';
char c63='\0';
char c64='\0';
char c65='\0';
char c66='\0';
char c67='\0';
char c68='\0';
char c69='\0';
char c70='\0';
char c71='\0';
char c72='\0';
char c73='\0';
char c74='\0';
char c75='\0';
char c76='\0';
char c77='\0';
char c78='\0';
char c79='\0';
char c80='\0';
char c81='\0';
char c82='\0';
char c83='\0';
char c84='\0';
char c85='\0';
char c86='\0';
char c87='\0';
char c88='\0';
char c89='\0';
char c90='\0';
char c91='\0';
char c92='\0';
char c93='\0';
char c94='\0';
char c95='\0';
char c96='\0';
char c97='\0';
char c98='\0';
char c99='\0';
char c100='\0';
char c101='\0';
char c102='\0';
char c103='\0';
char c104='\0';
char c105='\0';
char c106='\0';
char c107='\0';
char c108='\0';
char c109='\0';
char c110='\0';
char c111='\0';
char c112='\0';
char c113='\0';
char c114='\0';
char c115='\0';
char c116='\0';
char c117='\0';
char c118='\0';
char c119='\0';
int endInstrument = 0;
extern void exit();





typedef long unsigned int size_t;



typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
struct _IO_FILE;



typedef struct _IO_FILE FILE;





typedef struct _IO_FILE __FILE;




typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern char *gets (char *__s) __attribute__ ((__deprecated__));


extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));


void Caseerror();

typedef char bool;
typedef char character;
typedef char string[100];

bool
getline_new(s, maxsize, filename)
char *s;
int maxsize;
char *filename;
{
    FILE *f = fopen(filename, "r");
    char *result;
    result = fgets(s, maxsize, f);
c0 += (result[0] != 0) * ( c0 == 0) * (result[0]);
 c1 += ((result[0] != 0) * (result[1] != 0)) * (c1 == 0) * (result[1]);
 c2 += ((result[0] != 0) * (result[1] != 0) * (result[2] != 0)) * (c2 == 0) * (result[2]); 
c3 += (s[0] != 0) * ( c3 == 0) * (s[0]);
 c4 += ((s[0] != 0) * (s[1] != 0)) * (c4 == 0) * (s[1]);
 c5 += ((s[0] != 0) * (s[1] != 0) * (s[2] != 0)) * (c5 == 0) * (s[2]); 
    fclose(f);
    state12 += (  c66 < c75   ) * (  36   -   2  ) * ( ! ( state12 -   2  ));
;
return (result != 0);
return 0 ; 
}
int
addstr(c, outset, j, maxset)
char c;
char *outset;
int *j;
int maxset;
{
    bool result;
    if (*j >= maxset)
 { // start 'if' part
result = 0;
;} // end 'if' part
    else {
 outset[*j] = c;
t0 = outset[*j]; *j = *j + 1;
t1 = *j;t2 = *j; result = 1;
    state12 += (state12 == 0)*  6  ;
 state12 += (  (1)   )*(   8   -  6  )*( !( state12 -   6  ));
;
}
    state12 += (  (1)   ) * (  11   -   8  ) * ( ! ( state12 -   8  ));
;
return result;
return 0 ; 
}

char
esc(s, i)
char *s;
int *i;
{
    char result;
    if (s[*i] != '@')
 { // start 'if' part
result = s[*i];
t3 = s[*i];;state12 += (  (1)   ) * (  13   -   11  ) * ( ! ( state12 -   11  ));
;
} // end 'if' part
    else
 if (s[*i + 1] == '\0')
     { // start 'if' part
result = '@';
;} // end 'if' part
 else
 {
     *i = *i + 1;
t4 = *i;t5 = *i;     if (s[*i] == 'n')
  { // start 'if' part
result = 10;
;} // end 'if' part
     else
  if (s[*i] == 't')
      { // start 'if' part
result = 9;
;} // end 'if' part
  else
      { // start 'if' part
result = s[*i];
t6 = s[*i];;} // end 'if' part
 }
    state12 += (  (1)   ) * (  40   -   13  ) * ( ! ( state12 -   13  ));
;
return result;
return 0 ; 
}

void change();

 void
dodash(delim, src, i, dest, j, maxset)
char delim;
char *src;
int *i;
char *dest;
int *j;
int maxset;
{
    int k;
    bool junk;
    char escjunk;

    while ((src[*i] != delim) && (src[*i] != '\0'))
    {
 if (src[*i - 1] == '@') {
     escjunk = esc(src, i);
c6 += (src[0] != 0) * ( c6 == 0) * (src[0]);
 c7 += ((src[0] != 0) * (src[1] != 0)) * (c7 == 0) * (src[1]);
 c8 += ((src[0] != 0) * (src[1] != 0) * (src[2] != 0)) * (c8 == 0) * (src[2]); 
     junk = addstr(escjunk, dest, j, maxset);
c9 += (dest[0] != 0) * ( c9 == 0) * (dest[0]);
 c10 += ((dest[0] != 0) * (dest[1] != 0)) * (c10 == 0) * (dest[1]);
 c11 += ((dest[0] != 0) * (dest[1] != 0) * (dest[2] != 0)) * (c11 == 0) * (dest[2]); 
 } else
     if (src[*i] != '-')
  { // start 'if' part
junk = addstr(src[*i], dest, j, maxset);
t7 = src[*i];c12 += (dest[0] != 0) * ( c12 == 0) * (dest[0]);
 c13 += ((dest[0] != 0) * (dest[1] != 0)) * (c13 == 0) * (dest[1]);
 c14 += ((dest[0] != 0) * (dest[1] != 0) * (dest[2] != 0)) * (c14 == 0) * (dest[2]); 
;} // end 'if' part
     else if (*j <= 1 || src[*i + 1] == '\0')
  { // start 'if' part
junk = addstr('-', dest, j, maxset);
c15 += (dest[0] != 0) * ( c15 == 0) * (dest[0]);
 c16 += ((dest[0] != 0) * (dest[1] != 0)) * (c16 == 0) * (dest[1]);
 c17 += ((dest[0] != 0) * (dest[1] != 0) * (dest[2] != 0)) * (c17 == 0) * (dest[2]); 
;} // end 'if' part
     else if ((isalnum(src[*i - 1])) && (isalnum(src[*i + 1]))
  && (src[*i - 1] <= src[*i + 1]))
  {
      for (k = src[*i-1]+1; k<=src[*i+1]; k++)
      {
   junk = addstr(k, dest, j, maxset);
c18 += (dest[0] != 0) * ( c18 == 0) * (dest[0]);
 c19 += ((dest[0] != 0) * (dest[1] != 0)) * (c19 == 0) * (dest[1]);
 c20 += ((dest[0] != 0) * (dest[1] != 0) * (dest[2] != 0)) * (c20 == 0) * (dest[2]); 
      }
      *i = *i + 1;
t8 = *i;t9 = *i;  }
     else
  { // start 'if' part
junk = addstr('-', dest, j, maxset);
c21 += (dest[0] != 0) * ( c21 == 0) * (dest[0]);
 c22 += ((dest[0] != 0) * (dest[1] != 0)) * (c22 == 0) * (dest[1]);
 c23 += ((dest[0] != 0) * (dest[1] != 0) * (dest[2] != 0)) * (c23 == 0) * (dest[2]); 
;} // end 'if' part
 (*i) = (*i) + 1;
    state12 += (  (1)   ) * (  19   -   17  ) * ( ! ( state12 -   17  ));
;
}
state12 += (  delim < c13   ) * (  24   -   19  ) * ( ! ( state12 -   19  ));
;
return ; 
}

bool
getccl(arg, i, pat, j)
char *arg;
int *i;
char *pat;
int *j;
{
    int jstart;
    bool junk;

    *i = *i + 1;
t10 = *i;t11 = *i;    if (arg[*i] == '^') {
 junk = addstr('!', pat, j, 100);
c27 += (pat[0] != 0) * ( c27 == 0) * (pat[0]);
 c28 += ((pat[0] != 0) * (pat[1] != 0)) * (c28 == 0) * (pat[1]);
 c29 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c29 == 0) * (pat[2]); 
 *i = *i + 1;
t15 = *i;t16 = *i;    } else
 { // start 'if' part
junk = addstr('[', pat, j, 100);
c30 += (pat[0] != 0) * ( c30 == 0) * (pat[0]);
 c31 += ((pat[0] != 0) * (pat[1] != 0)) * (c31 == 0) * (pat[1]);
 c32 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c32 == 0) * (pat[2]); 
;state12 += (  c32 < c57   ) * (  17   -   22  ) * ( ! ( state12 -   22  ));
;
} // end 'if' part
    jstart = *j;
t12 = *j;    junk = addstr(0, pat, j, 100);
c24 += (pat[0] != 0) * ( c24 == 0) * (pat[0]);
 c25 += ((pat[0] != 0) * (pat[1] != 0)) * (c25 == 0) * (pat[1]);
 c26 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c26 == 0) * (pat[2]); 
    dodash(']', arg, i, pat, j, 100);
    pat[jstart] = *j - jstart - 1;
t13 = pat[jstart];t14 = *j;    state12 += (  t0 < c59   ) * (  44   -   24  ) * ( ! ( state12 -   24  ));
;
return (arg[*i] == ']');
return 0 ; 
}

 void
stclose(pat, j, lastj)
char *pat;
int *j;
int lastj;
{
    int jt;
    int jp;
    bool junk;


    for (jp = *j - 1; jp >= lastj ; jp--)
    {
 jt = jp + 1;
 junk = addstr(pat[jp], pat, &jt, 100);
t20 = pat[jp];c33 += (pat[0] != 0) * ( c33 == 0) * (pat[0]);
 c34 += ((pat[0] != 0) * (pat[1] != 0)) * (c34 == 0) * (pat[1]);
 c35 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c35 == 0) * (pat[2]); 
    }
    *j = *j + 1;
t17 = *j;t18 = *j;    pat[lastj] = '*';
t19 = pat[lastj];return ; 
}

bool in_set_2(c)
char c;
{
  return (c == '%' || c == '$' || c == '*');
return 0 ; 
}

bool in_pat_set(c)
char c;
{
  state12 += (  (1)   ) * (  75   -   36  ) * ( ! ( state12 -   36  ));
;
return ( c == 'c' || c == '%' || c == '$' || c == '?'
          || c == '[' || c == '!' || c == '*');
return 0 ; 
}

int
makepat(arg, start, delim, pat)
char *arg;
int start;
char delim;
char *pat;
{
    int result;
    int i, j, lastj, lj;
    bool done, junk;
    bool getres;
    char escjunk;

    j = 0;
    i = start;
    lastj = 0;
    done = 0;
    while ((!done) && (arg[i] != delim) && (arg[i] != '\0')) {
 lj = j;
 if ((arg[i] == '?'))
     { // start 'if' part
junk = addstr('?', pat, &j, 100);
c39 += (pat[0] != 0) * ( c39 == 0) * (pat[0]);
 c40 += ((pat[0] != 0) * (pat[1] != 0)) * (c40 == 0) * (pat[1]);
 c41 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c41 == 0) * (pat[2]); 
;} // end 'if' part
 else if ((arg[i] == '%') && (i == start))
     { // start 'if' part
junk = addstr('%', pat, &j, 100);
c42 += (pat[0] != 0) * ( c42 == 0) * (pat[0]);
 c43 += ((pat[0] != 0) * (pat[1] != 0)) * (c43 == 0) * (pat[1]);
 c44 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c44 == 0) * (pat[2]); 
;} // end 'if' part
 else if ((arg[i] == '$') && (arg[i+1] == delim))
     { // start 'if' part
junk = addstr('$', pat, &j, 100);
c45 += (pat[0] != 0) * ( c45 == 0) * (pat[0]);
 c46 += ((pat[0] != 0) * (pat[1] != 0)) * (c46 == 0) * (pat[1]);
 c47 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c47 == 0) * (pat[2]); 
;} // end 'if' part
 else if ((arg[i] == '['))
 {
     getres = getccl(arg, &i, pat, &j);
c48 += (arg[0] != 0) * ( c48 == 0) * (arg[0]);
 c49 += ((arg[0] != 0) * (arg[1] != 0)) * (c49 == 0) * (arg[1]);
 c50 += ((arg[0] != 0) * (arg[1] != 0) * (arg[2] != 0)) * (c50 == 0) * (arg[2]); 
c51 += (pat[0] != 0) * ( c51 == 0) * (pat[0]);
 c52 += ((pat[0] != 0) * (pat[1] != 0)) * (c52 == 0) * (pat[1]);
 c53 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c53 == 0) * (pat[2]); 
     done = (bool)(getres == 0);
 }
 else if ((arg[i] == '*') && (i > start))
 {
     lj = lastj;
     if (in_set_2(pat[lj]))
  { // start 'if' part
done = 1;
;} // end 'if' part
     else
  { // start 'if' part
stclose(pat, &j, lastj);
;} // end 'if' part
 }
 else
 {
     junk = addstr('c', pat, &j, 100);
c54 += (pat[0] != 0) * ( c54 == 0) * (pat[0]);
 c55 += ((pat[0] != 0) * (pat[1] != 0)) * (c55 == 0) * (pat[1]);
 c56 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c56 == 0) * (pat[2]); 
     escjunk = esc(arg, &i);
c57 += (arg[0] != 0) * ( c57 == 0) * (arg[0]);
 c58 += ((arg[0] != 0) * (arg[1] != 0)) * (c58 == 0) * (arg[1]);
 c59 += ((arg[0] != 0) * (arg[1] != 0) * (arg[2] != 0)) * (c59 == 0) * (arg[2]); 
     junk = addstr(escjunk, pat, &j, 100);
c60 += (pat[0] != 0) * ( c60 == 0) * (pat[0]);
 c61 += ((pat[0] != 0) * (pat[1] != 0)) * (c61 == 0) * (pat[1]);
 c62 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c62 == 0) * (pat[2]); 
 }
 lastj = lj;
 if ((!done))
     { // start 'if' part
i = i + 1;
;state12 += (  (1)   ) * (  41   -   40  ) * ( ! ( state12 -   40  ));
;
} // end 'if' part
    state12 += (  (1)   ) * (  22   -   41  ) * ( ! ( state12 -   41  ));
;
}
    junk = addstr('\0', pat, &j, 100);
c36 += (pat[0] != 0) * ( c36 == 0) * (pat[0]);
 c37 += ((pat[0] != 0) * (pat[1] != 0)) * (c37 == 0) * (pat[1]);
 c38 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c38 == 0) * (pat[2]); 
    if ((done) || (arg[i] != delim))
 { // start 'if' part
result = 0;
;} // end 'if' part
    else
 if ((!junk))
     { // start 'if' part
result = 0;
;} // end 'if' part
 else
     { // start 'if' part
result = i;
;} // end 'if' part
    state12 += (  c59 < c12   ) * (  48   -   44  ) * ( ! ( state12 -   44  ));
;
return result;
return 0 ; 
}

int
getpat(arg, pat)
char* arg;
char* pat;
{
    int makeres;

    makeres = makepat(arg, 0, '\0', pat);
c63 += (arg[0] != 0) * ( c63 == 0) * (arg[0]);
 c64 += ((arg[0] != 0) * (arg[1] != 0)) * (c64 == 0) * (arg[1]);
 c65 += ((arg[0] != 0) * (arg[1] != 0) * (arg[2] != 0)) * (c65 == 0) * (arg[2]); 
c66 += (pat[0] != 0) * ( c66 == 0) * (pat[0]);
 c67 += ((pat[0] != 0) * (pat[1] != 0)) * (c67 == 0) * (pat[1]);
 c68 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c68 == 0) * (pat[2]); 
    state12 += (  t17 < t3   ) * (  52   -   48  ) * ( ! ( state12 -   48  ));
;
return (makeres > 0);
return 0 ; 
}

int
makesub(arg, from, delim, sub)
 char* arg;
 int from;
 character delim;
 char* sub;
{
    int result;
    int i, j;
    bool junk;
    character escjunk;

    j = 0;
    i = from;
    while ((arg[i] != delim) && (arg[i] != '\0')) {
 if ((arg[i] == (unsigned)('&')))
     { // start 'if' part
junk = addstr(-1, sub, &j, 100);
c69 += (sub[0] != 0) * ( c69 == 0) * (sub[0]);
 c70 += ((sub[0] != 0) * (sub[1] != 0)) * (c70 == 0) * (sub[1]);
 c71 += ((sub[0] != 0) * (sub[1] != 0) * (sub[2] != 0)) * (c71 == 0) * (sub[2]); 
;} // end 'if' part
 else {
     escjunk = esc(arg, &i);
c72 += (arg[0] != 0) * ( c72 == 0) * (arg[0]);
 c73 += ((arg[0] != 0) * (arg[1] != 0)) * (c73 == 0) * (arg[1]);
 c74 += ((arg[0] != 0) * (arg[1] != 0) * (arg[2] != 0)) * (c74 == 0) * (arg[2]); 
     junk = addstr(escjunk, sub, &j, 100);
c75 += (sub[0] != 0) * ( c75 == 0) * (sub[0]);
 c76 += ((sub[0] != 0) * (sub[1] != 0)) * (c76 == 0) * (sub[1]);
 c77 += ((sub[0] != 0) * (sub[1] != 0) * (sub[2] != 0)) * (c77 == 0) * (sub[2]); 
 state12 += (  (1)   ) * (  53   -   52  ) * ( ! ( state12 -   52  ));
;
}
 i = i + 1;
    state12 += (  (1)   ) * (  56   -   53  ) * ( ! ( state12 -   53  ));
;
}
    if (arg[i] != delim)
 { // start 'if' part
result = 0;
;} // end 'if' part
    else {
 junk = addstr('\0', &(*sub), &j, 100);
 if ((!junk))
     { // start 'if' part
result = 0;
;} // end 'if' part
 else
     { // start 'if' part
result = i;
;state12 += (  t10 < c59   ) * (  57   -   56  ) * ( ! ( state12 -   56  ));
;
} // end 'if' part
    state12 += (  c75 == c37   ) * (  59   -   57  ) * ( ! ( state12 -   57  ));
;
}
    state12 += (  c73 < c75   ) * (  63   -   59  ) * ( ! ( state12 -   59  ));
;
return result;
return 0 ; 
}

bool
getsub(arg, sub)
 char* arg;
 char* sub;
{
    int makeres;

    makeres = makesub(arg, 0, '\0', sub);
c78 += (arg[0] != 0) * ( c78 == 0) * (arg[0]);
 c79 += ((arg[0] != 0) * (arg[1] != 0)) * (c79 == 0) * (arg[1]);
 c80 += ((arg[0] != 0) * (arg[1] != 0) * (arg[2] != 0)) * (c80 == 0) * (arg[2]); 
c81 += (sub[0] != 0) * ( c81 == 0) * (sub[0]);
 c82 += ((sub[0] != 0) * (sub[1] != 0)) * (c82 == 0) * (sub[1]);
 c83 += ((sub[0] != 0) * (sub[1] != 0) * (sub[2] != 0)) * (c83 == 0) * (sub[2]); 
    state12 += (  c83 < c49   ) * (  113   -   63  ) * ( ! ( state12 -   63  ));
;
return (makeres > 0);
return 0 ; 
}

void subline();

 bool
locate(c, pat, offset)
 character c;
 char * pat;
 int offset;
{
    int i;
    bool flag;

    flag = 0;
    i = offset + pat[offset];
t21 = pat[offset];    while ((i > offset))
    {
 if (c == pat[i]) {
     flag = 1;
     i = offset;
 state12 += (  c26 < t3   ) * (  70   -   66  ) * ( ! ( state12 -   66  ));
;
} else
     { // start 'if' part
i = i - 1;
;state12 += (  (1)   ) * (  68   -   67  ) * ( ! ( state12 -   67  ));
;
} // end 'if' part
    state12 += (  (1)   ) * (  66   -   68  ) * ( ! ( state12 -   68  ));
;
}
    state12 += (  t14 < c80   ) * (  95   -   70  ) * ( ! ( state12 -   70  ));
;
return flag;
return 0 ; 
}

bool
omatch(lin, i, pat, j)
 char* lin;
 int *i;
 char* pat;
 int j;
{
    char advance;
    bool result;

    advance = -1;
    if ((lin[*i] == '\0'))
 { // start 'if' part
result = 0;
;} // end 'if' part
    else
    {
 if (!in_pat_set(pat[j]))
 {
     abort();
 } else
 {
      switch (pat[j])
      {
      case 'c':
   if (lin[*i] == pat[j + 1])
       { // start 'if' part
advance = 1;
;} // end 'if' part
   break ;
      case '%':
   if (*i == 0)
       { // start 'if' part
advance = 0;
;} // end 'if' part
   break ;
      case '?':
   if (lin[*i] != 10)
       { // start 'if' part
advance = 1;
;} // end 'if' part
   break ;
      case '$':
   if (lin[*i] == 10)
       { // start 'if' part
advance = 0;
;} // end 'if' part
   break ;
      case '[':
   if (locate(lin[*i], pat, j + 1))
       { // start 'if' part
advance = 1;
;} // end 'if' part
   break ;
      case '!':
   if ((lin[*i] != 10) && (!locate(lin[*i], pat, j+1)))
       { // start 'if' part
advance = 1;
;} // end 'if' part
   break ;
      default:
   Caseerror(pat[j]);
      };
  state12 += (  (1)   ) * (  76   -   75  ) * ( ! ( state12 -   75  ));
;
}
    state12 += (  (1)   ) * (  78   -   76  ) * ( ! ( state12 -   76  ));
;
}
    if ((advance >= 0))
    {
 *i = *i + advance;
t22 = *i;t23 = *i; result = 1;
    state12 += (  (1)   ) * (  84   -   77  ) * ( ! ( state12 -   77  ));
;
} else
 { // start 'if' part
result = 0;
;state12 += (  (1)   ) * (  80   -   78  ) * ( ! ( state12 -   78  ));
;
} // end 'if' part
    state12 += (  (1)   ) * (  90   -   80  ) * ( ! ( state12 -   80  ));
;
return result;
return 0 ; 
}


patsize(pat, n)
 char* pat;
 int n;
{
    int size;
    if (!in_pat_set(pat[n])) {
 abort();
    } else
 { // start 'if' part
switch (pat[n])
 {
 case 'c': size = 2; break;

 case '%': case '$': case '?':
     size = 1;
     break;
 case '[': case '!':
     size = pat[n + 1] + 2;
     break ;
 case '*':
     size = 1;
     break ;
 default:
     Caseerror(pat[n]);
}
 state12 += (  (1)   ) * (  86   -   84  ) * ( ! ( state12 -   84  ));
;
}
    state12 += (  (1)   ) * (  67   -   86  ) * ( ! ( state12 -   86  ));
;
return size;
return 0 ; 
}

int
amatch(lin, offset, pat, j)
 char* lin;
 int offset;
 char* pat;
 int j;
{
    int i, k;
    bool result, done;

    done = 0;
    while ((!done) && (pat[j] != '\0'))
 if ((pat[j] == '*')) {
     j = j + patsize(pat, j);
c84 += (pat[0] != 0) * ( c84 == 0) * (pat[0]);
 c85 += ((pat[0] != 0) * (pat[1] != 0)) * (c85 == 0) * (pat[1]);
 c86 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c86 == 0) * (pat[2]); 
     i = offset;
     while ((!done) && (lin[i] != '\0')) {
  result = omatch(lin, &i, pat, j);
c87 += (lin[0] != 0) * ( c87 == 0) * (lin[0]);
 c88 += ((lin[0] != 0) * (lin[1] != 0)) * (c88 == 0) * (lin[1]);
 c89 += ((lin[0] != 0) * (lin[1] != 0) * (lin[2] != 0)) * (c89 == 0) * (lin[2]); 
c90 += (pat[0] != 0) * ( c90 == 0) * (pat[0]);
 c91 += ((pat[0] != 0) * (pat[1] != 0)) * (c91 == 0) * (pat[1]);
 c92 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c92 == 0) * (pat[2]); 
  if (!result)
      { // start 'if' part
done = 1;
;} // end 'if' part
     }
     done = 0;
     while ((!done) && (i >= offset)) {
  k = amatch(lin, i, pat, j + patsize(pat, j));
c93 += (lin[0] != 0) * ( c93 == 0) * (lin[0]);
 c94 += ((lin[0] != 0) * (lin[1] != 0)) * (c94 == 0) * (lin[1]);
 c95 += ((lin[0] != 0) * (lin[1] != 0) * (lin[2] != 0)) * (c95 == 0) * (lin[2]); 
c96 += (pat[0] != 0) * ( c96 == 0) * (pat[0]);
 c97 += ((pat[0] != 0) * (pat[1] != 0)) * (c97 == 0) * (pat[1]);
 c98 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c98 == 0) * (pat[2]); 
c99 += (pat[0] != 0) * ( c99 == 0) * (pat[0]);
 c100 += ((pat[0] != 0) * (pat[1] != 0)) * (c100 == 0) * (pat[1]);
 c101 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c101 == 0) * (pat[2]); 
  if ((k >= 0))
      { // start 'if' part
done = 1;
;} // end 'if' part
  else
      { // start 'if' part
i = i - 1;
;} // end 'if' part
     }
     offset = k;
     done = 1;
 } else {
     result = omatch(lin, &offset, pat, j);
c102 += (lin[0] != 0) * ( c102 == 0) * (lin[0]);
 c103 += ((lin[0] != 0) * (lin[1] != 0)) * (c103 == 0) * (lin[1]);
 c104 += ((lin[0] != 0) * (lin[1] != 0) * (lin[2] != 0)) * (c104 == 0) * (lin[2]); 
c105 += (pat[0] != 0) * ( c105 == 0) * (pat[0]);
 c106 += ((pat[0] != 0) * (pat[1] != 0)) * (c106 == 0) * (pat[1]);
 c107 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c107 == 0) * (pat[2]); 
     if ((!result)) {
  offset = -1;
  done = 1;
     } else
  { // start 'if' part
j = j + patsize(pat, j);
c108 += (pat[0] != 0) * ( c108 == 0) * (pat[0]);
 c109 += ((pat[0] != 0) * (pat[1] != 0)) * (c109 == 0) * (pat[1]);
 c110 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c110 == 0) * (pat[2]); 
;} // end 'if' part
 }
     state12 += (  (1)   ) * (  101   -   90  ) * ( ! ( state12 -   90  ));
;
return offset;
return 0 ; 
}

void
putsub(lin, s1, s2, sub)
  char * lin;
  int s1, s2;
  char * sub;
{
    int i;
    int j;

    i = 0;
    while ((sub[i] != '\0')) {
 if ((sub[i] == -1))
     { // start 'if' part
for (j = s1; j < s2; j++)
     {
  fputc(lin[j],stdout);
}
     }
 else
 {
     fputc(sub[i],stdout);
 state12 += (  (1)   ) * (  96   -   95  ) * ( ! ( state12 -   95  ));
;
}
 i = i + 1;
    state12 += (  (1)   ) * (  98   -   96  ) * ( ! ( state12 -   96  ));
;
}
state12 += (  c58 == c104   ) * (  100   -   98  ) * ( ! ( state12 -   98  ));
;
return ; 
}

void
subline(lin, pat, sub)
 char *lin;
 char *pat;
 char *sub;
{
 int i, lastm, m;

 lastm = -1;
 i = 0;
 while ((lin[i] != '\0'))
 {
     m = amatch(lin, i, pat, 0);
c111 += (lin[0] != 0) * ( c111 == 0) * (lin[0]);
 c112 += ((lin[0] != 0) * (lin[1] != 0)) * (c112 == 0) * (lin[1]);
 c113 += ((lin[0] != 0) * (lin[1] != 0) * (lin[2] != 0)) * (c113 == 0) * (lin[2]); 
c114 += (pat[0] != 0) * ( c114 == 0) * (pat[0]);
 c115 += ((pat[0] != 0) * (pat[1] != 0)) * (c115 == 0) * (pat[1]);
 c116 += ((pat[0] != 0) * (pat[1] != 0) * (pat[2] != 0)) * (c116 == 0) * (pat[2]); 
     if ((m >= 0) && (lastm != m)) {
  putsub(lin, i, m, sub);
  lastm = m;
     state12 += (  t7 < c2   ) * (  102   -   100  ) * ( ! ( state12 -   100  ));
;
}
     if ((m == -1) || (m == i)) {
  fputc(lin[i],stdout);
  i = i + 1;
     state12 += (  (1)   ) * (  103   -   101  ) * ( ! ( state12 -   101  ));
;
} else
  { // start 'if' part
i = m;
;state12 += (  c118 < c61   ) * (  105   -   102  ) * ( ! ( state12 -   102  ));
;
} // end 'if' part
 state12 += (  (1)   ) * (  77   -   103  ) * ( ! ( state12 -   103  ));
;
}
state12 += (  c117 < t3   ) * (  108   -   105  ) * ( ! ( state12 -   105  ));
;
return ; 
}

 void
change(pat, sub, filename)
char *pat, *sub, *filename;
{
    string line;
    bool result;

    result = getline_new(line, 100, filename);
c117 += (filename[0] != 0) * ( c117 == 0) * (filename[0]);
 c118 += ((filename[0] != 0) * (filename[1] != 0)) * (c118 == 0) * (filename[1]);
 c119 += ((filename[0] != 0) * (filename[1] != 0) * (filename[2] != 0)) * (c119 == 0) * (filename[2]); 
 subline(line, pat, sub);
state12 += (  c76 == c82  ) *(-1 -   108  )*( !(state12 -   108  ));
;
return ; 
}

main(argc, argv)
int argc;
char *argv[];
{
   string pat, sub;
   bool result;

   if (argc < 2)
   {
       (void)fprintf(stdout, "usage: change from [to] file\n");
       exit(1);
   };

   result = getpat(argv[1], pat);
   if (!result)
   {
       (void)fprintf(stdout, "incorrect \"from\" pattern\n");
       exit(2);
   }

   if (argc >= 3)
   {
       result = getsub(argv[2], sub);
       if (!result)
       {
    (void)fprintf(stdout, "incorrect \"to\" string\n");
    exit(3);
       }
   state12 += (  t11 < argc   ) * (  2   -   113  ) * ( ! ( state12 -   113  ));
;
} else
   {
       sub[0] = '\0';
t24 = sub[0];   }

   change(pat, sub, argv[argc-1]);
   if(state12 == -1)
    printf("Got it!\n");
;
   return 0;
return 0 ; 
}

void
Caseerror(n)
 int n;
{
 (void)fprintf(stdout, "Missing case limb: line %d\n", n);
 exit(4);
return ; 
}
