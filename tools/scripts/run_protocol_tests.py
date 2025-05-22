#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
A script to run protocol tests for AWS SDK for C++:
Provided --build_dir, it runs each built protocol test found.
For each test executed, a mock http server is launched in parallel.
"""
import argparse
import os
import shutil
import signal
import subprocess
import time

SCRIPTS_DIR = os.path.dirname(__file__)
PROTO_TEST_MOCK_HANDLER = f"{SCRIPTS_DIR}/protocol_tests_mock_server/protocol_tests_mock_server.py"


def parse_arguments() -> dict:
    """Parse arguments and/or print help

    :return: dict with parsed arguments
    """
    parser = argparse.ArgumentParser(description="Protocol tests driver for AWS-SDK-CPP")
    parser.add_argument("--debug", action="store_true", help="Print additional information")
    parser.add_argument("--build_dir", action="store", required=True, help="Path to a directory with built SDK")
    args = vars(parser.parse_args())
    arg_map = {"debug": args.get("debug", False)}
    arg_map["build_dir"] = args.get("build_dir")
    return arg_map


class MockHttpServerHandle:
    """A RAII-style helper wrapper around mini mock http server.
    Launches a server on construction and kills it on destruction
    """

    def __init__(self):
        try:
            python_cmd = [shutil.which("python3"), PROTO_TEST_MOCK_HANDLER]
            self.process = subprocess.Popen(python_cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            print(f"Started mock server with PID {self.process.pid}")
        except Exception as exc:
            print(f"ERROR: unable to start Mock server:\n{exc}")
            raise exc

    def stop(self):
        """Sends Ctrl-C/SIGINT to the subprocess."""
        if self.process and self.process.poll() is None:
            print(f"Sending SIGINT to subprocess with PID {self.process.pid}")
            if os.name == 'nt':  # Windows
                self.process.send_signal(signal.CTRL_C_EVENT)
            else:  # Unix-like
                self.process.send_signal(signal.SIGINT)

            # wait for process to actually terminate
            time.sleep(1)

            if self.process.poll() is None:
                print(f"Process didn't terminate, sending SIGTERM to PID {self.process.pid}")
                self.process.terminate()

            try:
                self.process.wait(timeout=60)
            except subprocess.TimeoutExpired as exc:
                print(f"Subprocess with PID {self.process.pid} did not terminate after 1 minute: {exc}")
                print(f"Mock subprocess logs:\n{self.process.communicate()[0]}\n")
                raise exc

            print(f"Subprocess with PID {self.process.pid} terminated")
            print(f"Mock http logs:\n{self.process.communicate()[0]}\n")
            self.process = None

    def __enter__(self):
        return self

    def __exit__(self, exc_type, exc_value, exc_traceback):
        self.stop()

    def __del__(self):
        self.stop()


class ProtocolTestRunner:
    """Actual test runner: collects available tests and runs them
    """

    def __init__(self, args):
        self.build_dir = args.get("build_dir")
        self.args = args
        self.fail = False

    def run(self):
        try:
            tests = self._collect_tests()
            if not tests or not len(tests):
                print(f"No protocol tests found in {self.build_dir}")
                self.fail = True
            for test in tests:
                with MockHttpServerHandle() as mock_server:
                    try:
                        subprocess.run([test], timeout=6 * 60, check=True)
                    except Exception as exc:
                        print(f"Protocol test {test} failed with exception: {exc}")
                        self.fail = True
        except Exception as exc:
            print(f"Protocol tests failed with exception: {exc}")
            self.fail = True

    def _collect_tests(self):
        all_tests = []
        protocol_tests_root = self.build_dir + "/generated/protocol-tests/tests"
        test_groups = os.listdir(protocol_tests_root)
        for test_group in test_groups:
            if not os.path.isdir("/".join([protocol_tests_root, test_group])):
                continue
            test_protocols = os.listdir("/".join([protocol_tests_root, test_group]))
            for test_protocol in test_protocols:
                test_protocol_exe = "/".join(
                    [protocol_tests_root, test_group, test_protocol, f"protocol-{test_protocol}-{test_group}-tests"])
                if not os.path.isfile(test_protocol_exe):
                    print(f"Found a build directory for a test {test_protocol_exe} but no binary found!")
                    self.fail = True
                else:
                    print(f"Found protocol tests {test_protocol}")
                    all_tests.append(test_protocol_exe)
        return all_tests


def main():
    """Main entrypoint for protocol tests runner
    :return: 0 if success, failure otherwise
    """
    if not os.path.isfile(PROTO_TEST_MOCK_HANDLER):
        print("Can't find protocol_tests_mock_server.py")
        exit(-1)
    args = parse_arguments()
    runner = ProtocolTestRunner(args)
    runner.run()

    return runner.fail


if __name__ == "__main__":
    ret_code = main()
    exit(ret_code)
