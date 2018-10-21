from flask import Flask, render_template_string, request
app = Flask(__name__)

def shitty_sanitize(s):
    s = s.replace("{{", "", 1)
    s = s.replace("}}", "", 1)
    s = s.replace("<", "[removed naughty html]")
    s = s.replace(">", "[removed naughty html]")
    return s

@app.route('/', methods=['POST', 'GET'])
def r():
    template_upper = '''
<html>
<head>
    <style>
    #c { color: red; }
    </style>
<title>no free lunch</title>
</head>
<body>
<form action="/" method="post">
    <input type="text" name="content">
    <input type="submit" value="Prettify">
<form>
<div id="c">
'''
    template_lower = '''
</div>
</body>
</html>
'''
    if request.method == 'POST':
        result = request.form['content']
        result = shitty_sanitize(str(result))
        return render_template_string(template_upper + str(result) + template_lower)
    else:
        return render_template_string(template_upper + template_lower)

if __name__=="__main__":
    app.run()
