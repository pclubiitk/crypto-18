from flask import Flask, request, render_template
from threading import Thread
import smtplib
import os
app = Flask(__name__)

username = os.environ['EMAIL']
password = os.environ['EMAIL_PASSWORD']
print (username)

fromaddr = username
flag = open("flag.txt","r").read()

msg = "\r\n".join([
  "From: itstemporary1998@gmail.com",
  "To: A guy/gal trying hard"
  "Subject: You got a mail!!",
  "",
  ""+flag
  ])

def is_email(in_string):
    return True

def send_async_email(toaddr):
    server = smtplib.SMTP('smtp.gmail.com:587')
    server.ehlo()
    server.starttls()
    server.login(username,password)
    server.sendmail(fromaddr, toaddr, msg)
    server.quit()

@app.route('/', methods = ['POST', 'GET'])
def query():
    if request.method == 'POST':
        in_string = request.form['in_string']
        if is_email(in_string) == True:
           thr = Thread(target=send_async_email, args=[in_string])
           thr.start()
           return render_template("index.html", query = "Sent")
        else:
           return render_template("index.html", query = "Try Again!")
    else:
        return render_template("index.html")
