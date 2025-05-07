#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

from flask import Flask, request, jsonify
from datetime import datetime
import flask
import base64

app = Flask(__name__)

# Storage for the next response message to send
next_response_message = dict()

# Storage for the messages received
received_cache = list()


@app.route('/MockControl/Ping', methods=['GET', 'POST', 'PUT'])
def ping():
    return jsonify({"status": 0}), 200


def set_response_to_send(next_json):
    global next_response_message
    next_response_message = next_json
    pass


@app.route('/MockControl/SetNextResponse', methods=['GET', 'POST', 'PUT'])
def set_next_response():
    set_response_to_send(request.get_json())
    return jsonify({"status": 0}), 200


@app.route('/MockControl/Reset', methods=['GET', 'POST', 'PUT'])
def reset():
    global next_response_message
    global received_cache
    next_response_message = dict()
    received_cache = list()
    return jsonify({"status": 0}), 200


@app.route('/MockControl/GetRequestsReceived', methods=['GET', 'POST', 'PUT'])
def get_requests_received():
    global received_cache
    rs = {"StatusCode": 200,
          "requests": received_cache}
    return jsonify(rs), 200


def make_response(resp):
    if "body" in resp:
        response = flask.make_response(base64.b64decode(resp["body"]))
    else:
        response = flask.make_response()
    for k, v in resp.get("headers", dict()):
        response.headers[k] = v
    response.status = resp.get("StatusCode", 200)
    return response


@app.route('/', defaults={'path': ''}, methods=['GET', 'HEAD', 'POST', 'PUT', 'DELETE'])
@app.route('/<path:path>', methods=['GET', 'HEAD', 'POST', 'PUT', 'DELETE'])
def catch_all(path):
    data = request.get_data()
    headers = request.headers
    headers_flat = [{"key": k, "val": v} for k, v in headers]
    now = datetime.utcnow()
    now = str(now.strftime("%Y-%m-%d %H:%M:%S.%f"))[:-3] + 'Z'

    msg = {"timestamp": now,
           "method": str(request.method),
           "uri": f"/{request.base_url[len(request.host_url):]}",
           "host": str(request.host),
           "body": base64.b64encode(data).decode("utf-8"),
           "headers": headers_flat}
    global received_cache
    received_cache.append(msg)
    global next_response_message
    return make_response(next_response_message)


if __name__ == '__main__':
    app.run(port=1994)
