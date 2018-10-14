# SQL\_Heavy

## Problem Description (Shared)

Deja vu, anyone?

\<link to the problem was provided here\>

## Setup

Setup a postgres database with some tables, one of which will contain the flag string (which is the answer).

After setting up a postgres database just start the server by
```sh
$ FLASK_APP=server.py flask run --port <port>
```

Now, go to *http://localhost:<port>*

## Solution

If you see server.py then you will notice that we are only allowing **PREPARE** and **EXECUTE** postgres queries.
- [PREPARE STATEMENTS](https://www.postgresql.org/docs/9.6/static/sql-prepare.html)
- [EXECUTE STATEMENTS](https://www.postgresql.org/docs/9.6/static/sql-execute.html)

So, any query that you want to do must be first prepared using a prepare statment and later executed using an execute satement.

You will have to narrow down by using commands from different sql databases.

The above could be figured if you try out different commands, if you had used **prepare** or **execute** words in your queries then you could figure out that they are to be used.

Example of the first query (fetching the names of tables).

```sh
PREPARE get_tables AS
    SELECT * FROM pg_catalog.pg_tables;

EXECUTE get_tables;
```

Above query will give you the list of all the tables in the datables.
You can do the rest of the queries using prepare and execute statements.
