# flask_server.py
# This is a simple Flask server.
# Github: https://www.github.com/awesomelewis2007/examples
# By: Lewis Evans

from flask import Flask

app = Flask(__name__)

@app.route("/")
def home():
    return "Hello, World!"

if __name__ == "__main__":
    app.run(debug=True)