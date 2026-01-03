from flask import Flask, render_template
import subprocess

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/position")
def position():
    output = subprocess.check_output("car.exe", shell=True)
    return output

if __name__ == "__main__":
    app.run(debug=True)

