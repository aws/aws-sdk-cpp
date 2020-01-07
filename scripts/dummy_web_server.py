#!/usr/bin/env python3
#https://gist.github.com/bradmontgomery/2219997
"""
Very simple HTTP server in python (Updated for Python 3.7)
Usage:
    ./dummy-web-server.py -h
    ./dummy-web-server.py -l localhost -p 8000
Send a GET request:
    curl http://localhost:8000
Send a HEAD request:
    curl -I http://localhost:8000
Send a POST request:
    curl -d "foo=bar&bin=baz" http://localhost:8000
"""
import argparse
import time
import socket
from http.server import HTTPServer, BaseHTTPRequestHandler

class Handler(BaseHTTPRequestHandler):

    def handle_one_request(self):
        """Handle a single HTTP request.
        You normally don't need to override this method; see the class
        __doc__ string for information on how to handle specific HTTP
        commands such as GET and POST.
        """

        try:
            self.raw_requestline = self.rfile.readline(65537)
            if len(self.raw_requestline) > 65536:
                self.requestline = ''
                self.request_version = ''
                self.command = ''
                self.send_error(414)
                return

            if not self.raw_requestline:
                self.close_connection = 1
                return

            if not self.parse_request():
                # An error code has been sent, just exit
                return
            mname = 'do_' + self.command
            if not hasattr(self, mname):
                self.send_error(501, "Unsupported method (%r)" % self.command)
                return
            method = getattr(self, mname)
            method()
            #add verification of wfile is closed or not
            if not self.wfile.closed:
                # actually send the response if not already done.
                self.wfile.flush()
        except socket.timeout as e:
            #a read or a write timed out.  Discard this connection
            self.log_error("Request timed out: %r", e)
            self.close_connection = 1
            return

    def _set_headers(self):
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()

    def _html(self, message):
        """This just generates an HTML document that includes `message`
        in the body. Override, or re-write this do do more interesting stuff.
        """
        content = "<html><body><h1>{}</h1></body></html>".format(message);
        return content.encode("utf8")  # NOTE: must return a bytes object!

    def do_GET(self):

        waitSeconds = self.headers.get('WaitSeconds', 0) # 0 means default return
        time.sleep(float(waitSeconds))
        try:
            self._set_headers()
            self.wfile.write(self._html("hi!"))
        except socket.error as e:
            print ("socket.error : Connection broke. Aborting" + str(e))
            self.wfile._sock.close()
            self.wfile._sock = None
            return False

    def do_HEAD(self):
        waitSeconds = self.headers.get('WaitSeconds', 0)
        time.sleep(float(waitSeconds))
        self._set_headers()

    def do_POST(self):
        # Doesn't do anything with posted data
        waitSeconds = self.headers.get('WaitSeconds', 0)
        time.sleep(float(waitSeconds))
        self._set_headers()
        self.wfile.write(self._html("POST!"))

class StoppableServer(HTTPServer):

    stopped = False
    def serve_forever(self):
        while not self.stopped:
            self.handle_request()

    def stop_server(self):
        self.server_close()
        self.stopped = True


def run(server_class=StoppableServer, handler_class=Handler, addr="localhost", port=8000):
    server_address = (addr, port)
    httpd = server_class(server_address, handler_class)

    print("Starting httpd server on {}:{}.".format(addr, port))
    httpd.serve_forever()
    httpd.stop_server()


if __name__ == "__main__":

    parser = argparse.ArgumentParser(description="Run a simple HTTP server")
    parser.add_argument(
        "-l",
        "--listen",
        default="localhost",
        help="Specify the IP address on which the server listens",
    )
    parser.add_argument(
        "-p",
        "--port",
        type=int,
        default=8000,
        help="Specify the port on which the server listens",
    )
    parser.add_argument(
        "-w",
        "--wait",
        type=float,
        default=0,
        help="Specify the seconds(could be 0.001 as 1 ms) on which the server sleep before sending data back",
    )

    args = parser.parse_args()
    waitSeconds = args.wait
    run(addr=args.listen, port=args.port)
