# flask_server.py
# This is a simple Flask server.
# Github: https://www.github.com/0x4248/examples
# Licence: GNU General Public License v3.0
# By: 0x4248

from flask import Flask

app = Flask(__name__)  # Create a Flask app


# This is the route for the home page
@app.route("/")
def home():
    # Return the text "Hello, World!" to the client
    return "Hello, World!"


if __name__ == "__main__":
    # Run the Flask app
    app.run(debug=True)
