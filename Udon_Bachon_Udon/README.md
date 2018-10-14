# Udon\_Bachon\_Udon

## Problem Description (Shared)

Fly/children/fly

\<link for the question was provided\>

## Setup

Host the current directory on the link using
```sh
python -m http.server
```

Run the *server.py* on some other port using
```sh
FLASK_APP=server.py flask run --port 40000
```

Add an entry in local nginx to redirect /aerospace of original link to this port.

## Solution

When you go to the initial link, you will find the line *Go on ask Google to search, you wont find no thing !!* which is hint that you need to check the **robots.txt** file as google does not check files with this specific name in a website.

When you go to */robots.txt*, you will find the line *#Looks like somebody cleaned this file.* which is hint that a swap file must exist which still contains the contents of the file.

When you go to */.robots.txt.swp*, you will find the line *What does "A" in SAE stand for?* and getting hint from the name of the problem and google, SAE here is Society of Aerospace Engineers (in IITK).

Finally, go to */aerospace* and you will be greeted with a query box with line written *where to?* and the submit box with line *Send*, this was hint that you have to submit you mail id here.

The flag is sent to the given mail id.
