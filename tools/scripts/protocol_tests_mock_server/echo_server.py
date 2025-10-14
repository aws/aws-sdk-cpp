#!/usr/bin/env python3

from flask import Flask, request

app = Flask(__name__)

@app.route('/', defaults={'path': ''}, methods=['GET', 'HEAD', 'POST', 'PUT', 'DELETE'])
@app.route('/<path:path>', methods=['GET', 'HEAD', 'POST', 'PUT', 'DELETE'])
def echo(path):
    data = request.get_data()
    print(f"{request.method} /{path} - {len(data)} bytes: {data}")
    return data, 200, {'Content-Type': request.content_type or 'application/octet-stream'}

if __name__ == '__main__':
    app.run(port=8000)