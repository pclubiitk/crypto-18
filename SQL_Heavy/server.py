from flask import Flask, request, render_template
import records
import random
import os
app = Flask(__name__)

host = os.environ["PG_HOST"]
database = "blinddb" + os.environ["FILENUM"]
db = records.Database("postgres://" + host + "/" + database)

@app.route('/', methods = ['POST', 'GET'])
def result():
    if request.method == 'POST':
        result = request.form['query']
        result_words = result.lower().strip().split(' ')
        answer = ""
        if result.lower().strip()[0] == '\\' or result.lower().strip()[0] == '.':
            answer = "What are you trying to do??"
        elif "drop" in result_words or "delete" in result_words:
            answer = "Don't blame us if you lose the flag!"
        elif "alter" in result_words or "create" in result_words or "set" in result_words or "grant" in result_words:
            answer = "Trying to be smart, are we?"
        elif "prepare" in result_words:
            if "select" in result_words:
                if "pg_catalog" not in result.lower() or "pg_catalog.pg_tables" in result.lower():
                    print("I am here")
                    try:
                        for row in db.query(result):
                            print(row)
                        if answer.strip() == "":
                            answer = "Query1 successfully executed in " + str(random.random()) + " seconds."
                    except RuntimeError:
                        answer = "SQL Error!"
                else:
                    answer = "You are almost there!"
            else:
                answer = "You're close, think carefully now"
        elif "execute" in result_words:
            try:
                for row in db.query(result):
                    print(row)
                if answer.strip() == "":
                    answer = "Query2 successfully executed in " + str(random.random()) + " seconds."
            except RuntimeError:
                answer = "SQL Error!"
        else:
            answer = "Try man, you can do it!"
        return render_template("index.html", answer = answer)
    else:
        return render_template("index.html")
