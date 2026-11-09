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

# Tests that do not pass with the legacy C2J-generated clients (fail, crash or hang), per (protocol, group).
# Generated from a baseline run of every test individually; any other failure is a regression.
KNOWN_FAILURES = {
    ("ec2", "input"): [
        "EndpointOperation.Ec2QueryEndpointTrait",
        "EndpointWithHostLabelOperation.Ec2QueryEndpointTraitWithHostLabel",
        "HostWithPathOperation.Ec2QueryHostWithPath",
        "QueryIdempotencyTokenAutoFill.Ec2ProtocolIdempotencyTokenAutoFill",
        "QueryIdempotencyTokenAutoFill.Ec2ProtocolIdempotencyTokenAutoFillIsSet",
        "QueryLists.Ec2Lists",
        "QueryTimestamps.Ec2TimestampsInput",
        "SimpleInputParams.Ec2QuerySupportsInfinityFloatInputs",
        "SimpleInputParams.Ec2QuerySupportsNaNFloatInputs",
        "SimpleInputParams.Ec2QuerySupportsNegativeInfinityFloatInputs",
    ],
    ("ec2", "output"): [
        "DatetimeOffsets.Ec2QueryDateTimeWithNegativeOffset",
        "DatetimeOffsets.Ec2QueryDateTimeWithPositiveOffset",
        "XmlEmptyBlobs.Ec2XmlEmptyBlobs",
        "XmlEmptyBlobs.Ec2XmlEmptySelfClosedBlobs",
        "XmlLists.Ec2XmlLists",
    ],
    ("json", "input"): [
        "EndpointOperation.AwsJson11EndpointTrait",
        "EndpointWithHostLabelOperation.AwsJson11EndpointTraitWithHostLabel",
        "HostWithPathOperation.AwsJson11HostWithPath",
        "SimpleScalarProperties.AwsJson11SupportsInfinityFloatInputs",
        "SimpleScalarProperties.AwsJson11SupportsNaNFloatInputs",
        "SimpleScalarProperties.AwsJson11SupportsNegativeInfinityFloatInputs",
    ],
    ("json", "output"): [
        "DatetimeOffsets.AwsJson11DateTimeWithNegativeOffset",
        "DatetimeOffsets.AwsJson11DateTimeWithPositiveOffset",
        "SimpleScalarProperties.AwsJson11SupportsInfinityFloatInputs",
        "SimpleScalarProperties.AwsJson11SupportsNaNFloatInputs",
        "SimpleScalarProperties.AwsJson11SupportsNegativeInfinityFloatInputs",
    ],
    ("json_1_0", "input"): [
        "EndpointOperation.AwsJson10EndpointTrait",
        "EndpointWithHostLabelOperation.AwsJson10EndpointTraitWithHostLabel",
        "HostWithPathOperation.AwsJson10HostWithPath",
        "SimpleScalarProperties.AwsJson10SupportsInfinityFloatInputs",
        "SimpleScalarProperties.AwsJson10SupportsNaNFloatInputs",
        "SimpleScalarProperties.AwsJson10SupportsNegativeInfinityFloatInputs",
    ],
    ("json_1_0", "output"): [
        "SimpleScalarProperties.AwsJson10SupportsInfinityFloatInputs",
        "SimpleScalarProperties.AwsJson10SupportsNaNFloatInputs",
        "SimpleScalarProperties.AwsJson10SupportsNegativeInfinityFloatInputs",
    ],
    ("query", "input"): [
        "EndpointOperation.AwsQueryEndpointTrait",
        "EndpointWithHostLabelOperation.AwsQueryEndpointTraitWithHostLabel",
        "HostWithPathOperation.QueryHostWithPath",
        "QueryIdempotencyTokenAutoFill.QueryProtocolIdempotencyTokenAutoFill",
        "QueryLists.FlattenedQueryLists",
        "QueryMaps.QueryFlattenedQueryMaps",
        "QueryMaps.QueryQueryMapOfLists",
        "QueryMaps.QuerySimpleQueryMapsWithXmlName",
        "SimpleInputParams.AwsQuerySupportsInfinityFloatInputs",
        "SimpleInputParams.AwsQuerySupportsNaNFloatInputs",
        "SimpleInputParams.AwsQuerySupportsNegativeInfinityFloatInputs",
    ],
    ("query", "output"): [
        "DatetimeOffsets.AwsQueryDateTimeWithNegativeOffset",
        "DatetimeOffsets.AwsQueryDateTimeWithPositiveOffset",
        "FlattenedXmlMap.QueryQueryFlattenedXmlMap",
        "XmlEmptyBlobs.QueryXmlEmptyBlobs",
        "XmlEmptyBlobs.QueryXmlEmptySelfClosedBlobs",
        "XmlLists.QueryXmlLists",
        "XmlMapsXmlName.QueryQueryXmlMapsXmlName",
    ],
    ("rest-json", "input"): [
        "AllQueryStringTypes.RestJsonAllQueryStringTypes",
        "AllQueryStringTypes.RestJsonQueryStringEscaping",
        "AllQueryStringTypes.RestJsonSupportsInfinityFloatQueryValues",
        "AllQueryStringTypes.RestJsonSupportsNaNFloatQueryValues",
        "AllQueryStringTypes.RestJsonSupportsNegativeInfinityFloatQueryValues",
        "AllQueryStringTypes.RestJsonZeroAndFalseQueryValues",
        "ConstantQueryString.RestJsonConstantQueryString",
        "EndpointOperation.RestJsonEndpointTrait",
        "EndpointWithHostLabelOperation.RestJsonEndpointTraitWithHostLabel",
        "HostWithPathOperation.RestJsonHostWithPath",
        "HttpChecksumRequired.RestJsonHttpChecksumRequired",
        "HttpEmptyPrefixHeaders.RestJsonHttpEmptyPrefixHeadersRequestClient",
        "HttpEnumPayload.RestJsonEnumPayloadRequest",
        "HttpPayloadTraits.RestJsonHttpPayloadTraitsWithBlob",
        "HttpRequestWithFloatLabels.RestJsonSupportsInfinityFloatLabels",
        "HttpRequestWithFloatLabels.RestJsonSupportsNaNFloatLabels",
        "HttpRequestWithFloatLabels.RestJsonSupportsNegativeInfinityFloatLabels",
        "HttpRequestWithGreedyLabelInPath.RestJsonHttpRequestWithGreedyLabelInPath",
        "HttpRequestWithLabels.RestJsonHttpRequestLabelEscaping",
        "HttpRequestWithLabels.RestJsonInputWithHeadersAndAllParams",
        "HttpRequestWithLabelsAndTimestampFormat.RestJsonHttpRequestWithLabelsAndTimestampFormat",
        "HttpStringPayload.RestJsonStringPayloadRequest",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithBooleanHeaders",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithQuotedStringHeaders",
        "InputAndOutputWithHeaders.RestJsonSupportsInfinityFloatHeaderInputs",
        "InputAndOutputWithHeaders.RestJsonSupportsNegativeInfinityFloatHeaderInputs",
        "MediaTypeHeader.MediaTypeHeaderInputBase64",
        "QueryIdempotencyTokenAutoFill.RestJsonQueryIdempotencyTokenAutoFill",
        "QueryPrecedence.RestJsonQueryPrecedence",
        "SimpleScalarProperties.RestJsonSupportsInfinityFloatInputs",
        "SimpleScalarProperties.RestJsonSupportsNaNFloatInputs",
        "SimpleScalarProperties.RestJsonSupportsNegativeInfinityFloatInputs",
        "TestGetNoInputNoPayload.RestJsonHttpGetWithNoInput",
        "TestGetNoPayload.RestJsonHttpGetWithHeaderMemberNoModeledBody",
        "TestGetNoPayload.RestJsonHttpGetWithNoModeledBody",
        "TestPostNoInputNoPayload.RestJsonHttpPostWithNoInput",
        "TestPostNoPayload.RestJsonHttpPostWithNoModeledBody",
        "TestPostNoPayload.RestJsonHttpWithPostHeaderMemberNoModeledBody",
    ],
    ("rest-json", "output"): [
        "DatetimeOffsets.RestJsonDateTimeWithNegativeOffset",
        "DatetimeOffsets.RestJsonDateTimeWithPositiveOffset",
        "DocumentTypeAsMapValue.DocumentTypeAsMapValueOutput",
        "GreetingWithErrors.RestJsonGreetingWithErrors",
        "GreetingWithErrors.RestJsonGreetingWithErrorsNoPayload",
        "HttpEmptyPrefixHeaders.RestJsonHttpEmptyPrefixHeadersResponseClient",
        "HttpEnumPayload.RestJsonEnumPayloadResponse",
        "HttpPayloadTraits.RestJsonHttpPayloadTraitsWithBlob",
        "HttpPayloadTraits.RestJsonHttpPayloadTraitsWithNoBlobBody",
        "HttpPrefixHeaders.RestJsonHttpPrefixHeadersArePresent",
        "HttpPrefixHeadersInResponse.HttpPrefixHeadersResponse",
        "HttpResponseCode.RestJsonHttpResponseCodeWithNoPayload",
        "IgnoreQueryParamsInResponse.RestJsonIgnoreQueryParamsInResponse",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithBooleanHeaders",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithEnumHeaders",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithIntEnumHeaders",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithNumericHeaders",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithQuotedStringHeaders",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithStringHeaders",
        "InputAndOutputWithHeaders.RestJsonInputAndOutputWithTimestampHeaders",
        "InputAndOutputWithHeaders.RestJsonSupportsInfinityFloatHeaderOutputs",
        "InputAndOutputWithHeaders.RestJsonSupportsNaNFloatHeaderOutputs",
        "InputAndOutputWithHeaders.RestJsonSupportsNegativeInfinityFloatHeaderOutputs",
        "MediaTypeHeader.MediaTypeHeaderOutputBase64",
        "SimpleScalarProperties.RestJsonSimpleScalarProperties",
        "SimpleScalarProperties.RestJsonSupportsInfinityFloatInputs",
        "SimpleScalarProperties.RestJsonSupportsNaNFloatInputs",
        "SimpleScalarProperties.RestJsonSupportsNegativeInfinityFloatInputs",
        "TimestampFormatHeaders.RestJsonTimestampFormatHeaders",
    ],
    ("rest-xml", "input"): [
        "AllQueryStringTypes.AllQueryStringTypes",
        "AllQueryStringTypes.RestXmlSupportsInfinityFloatQueryValues",
        "AllQueryStringTypes.RestXmlSupportsNaNFloatQueryValues",
        "AllQueryStringTypes.RestXmlSupportsNegativeInfinityFloatQueryValues",
        "AllQueryStringTypes.RestXmlZeroAndFalseQueryValues",
        "BodyWithXmlName.BodyWithXmlName",
        "ConstantQueryString.ConstantQueryString",
        "EndpointOperation.RestXmlEndpointTrait",
        "EndpointWithHostLabelHeaderOperation.RestXmlEndpointTraitWithHostLabelAndHttpBinding",
        "EndpointWithHostLabelOperation.RestXmlEndpointTraitWithHostLabel",
        "FlattenedXmlMap.FlattenedXmlMap",
        "FlattenedXmlMapWithXmlName.FlattenedXmlMapWithXmlName",
        "HttpEmptyPrefixHeaders.HttpEmptyPrefixHeadersRequestClient",
        "HttpEnumPayload.RestXmlEnumPayloadRequest",
        "HttpPayloadWithUnion.RestXmlHttpPayloadWithUnion",
        "HttpPayloadWithXmlName.HttpPayloadWithXmlName",
        "HttpPayloadWithXmlNamespace.HttpPayloadWithXmlNamespace",
        "HttpPayloadWithXmlNamespaceAndPrefix.HttpPayloadWithXmlNamespaceAndPrefix",
        "HttpRequestWithFloatLabels.RestXmlSupportsInfinityFloatLabels",
        "HttpRequestWithFloatLabels.RestXmlSupportsNaNFloatLabels",
        "HttpRequestWithFloatLabels.RestXmlSupportsNegativeInfinityFloatLabels",
        "HttpRequestWithLabels.HttpRequestLabelEscaping",
        "HttpRequestWithLabels.InputWithHeadersAndAllParams",
        "HttpRequestWithLabelsAndTimestampFormat.HttpRequestWithLabelsAndTimestampFormat",
        "HttpStringPayload.RestXmlStringPayloadRequest",
        "InputAndOutputWithHeaders.InputAndOutputWithBooleanHeaders",
        "InputAndOutputWithHeaders.RestXmlSupportsInfinityFloatHeaderInputs",
        "InputAndOutputWithHeaders.RestXmlSupportsNegativeInfinityFloatHeaderInputs",
        "NestedXmlMaps.FlatNestedXmlMapRequest",
        "QueryIdempotencyTokenAutoFill.QueryIdempotencyTokenAutoFill",
        "QueryPrecedence.RestXmlQueryPrecedence",
        "SimpleScalarProperties.RestXmlSupportsInfinityFloatInputs",
        "SimpleScalarProperties.RestXmlSupportsNaNFloatInputs",
        "SimpleScalarProperties.RestXmlSupportsNegativeInfinityFloatInputs",
        "XmlAttributesInMiddle.XmlAttributesInMiddle",
        "XmlAttributesOnPayload.XmlAttributesOnPayload",
        "XmlEmptyMaps.XmlEmptyMaps",
        "XmlMapWithXmlNamespace.RestXmlXmlMapWithXmlNamespace",
        "XmlNamespaces.XmlNamespaces",
    ],
    ("rest-xml", "output"): [
        "DatetimeOffsets.RestXmlDateTimeWithNegativeOffset",
        "DatetimeOffsets.RestXmlDateTimeWithPositiveOffset",
        "FlattenedXmlMap.FlattenedXmlMap",
        "GreetingWithErrors.GreetingWithErrors",
        "HttpEmptyPrefixHeaders.HttpEmptyPrefixHeadersResponseClient",
        "HttpEnumPayload.RestXmlEnumPayloadResponse",
        "HttpPayloadTraits.HttpPayloadTraitsWithBlob",
        "HttpPayloadTraits.HttpPayloadTraitsWithNoBlobBody",
        "HttpPrefixHeaders.HttpPrefixHeadersAreNotPresent",
        "HttpPrefixHeaders.HttpPrefixHeadersArePresent",
        "HttpResponseCode.RestXmlHttpResponseCode",
        "IgnoreQueryParamsInResponse.IgnoreQueryParamsInResponse",
        "InputAndOutputWithHeaders.InputAndOutputWithBooleanHeaders",
        "InputAndOutputWithHeaders.InputAndOutputWithEnumHeaders",
        "InputAndOutputWithHeaders.InputAndOutputWithNumericHeaders",
        "InputAndOutputWithHeaders.InputAndOutputWithStringHeaders",
        "InputAndOutputWithHeaders.InputAndOutputWithTimestampHeaders",
        "InputAndOutputWithHeaders.RestXmlSupportsInfinityFloatHeaderOutputs",
        "InputAndOutputWithHeaders.RestXmlSupportsNaNFloatHeaderOutputs",
        "InputAndOutputWithHeaders.RestXmlSupportsNegativeInfinityFloatHeaderOutputs",
        "NestedXmlMapWithXmlName.NestedXmlMapWithXmlNameDeserializes",
        "NestedXmlMaps.FlatNestedXmlMapResponse",
        "SimpleScalarProperties.SimpleScalarProperties",
        "SimpleScalarProperties.SimpleScalarPropertiesComplexEscapes",
        "SimpleScalarProperties.SimpleScalarPropertiesPureWhiteSpace",
        "SimpleScalarProperties.SimpleScalarPropertiesWithEscapedCharacter",
        "SimpleScalarProperties.SimpleScalarPropertiesWithWhiteSpace",
        "SimpleScalarProperties.SimpleScalarPropertiesWithXMLPreamble",
        "TimestampFormatHeaders.TimestampFormatHeaders",
        "XmlEmptyBlobs.XmlEmptyBlobs",
        "XmlEmptyBlobs.XmlEmptySelfClosedBlobs",
        "XmlLists.XmlLists",
        "XmlMapWithXmlNamespace.RestXmlXmlMapWithXmlNamespace",
        "XmlMapsXmlName.XmlMapsXmlName",
    ],
}


def gtest_filter_for(protocol: str, group: str):
    """Build a negative --gtest_filter for the known failures of a binary.

    :return: the filter arg string, or None if nothing is skipped for this binary
    """
    skips = KNOWN_FAILURES.get((protocol, group))
    if not skips:
        return None
    return "--gtest_filter=-" + ":".join(skips)


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
            for test, protocol, group in tests:
                cmd = [test]
                gtest_filter = gtest_filter_for(protocol, group)
                if gtest_filter:
                    cmd.append(gtest_filter)
                    print(f"Skipping {len(KNOWN_FAILURES[(protocol, group)])} known-failing "
                          f"test(s) in {protocol}-{group}")
                with MockHttpServerHandle() as mock_server:
                    try:
                        subprocess.run(cmd, timeout=6 * 60, check=True)
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
                    all_tests.append((test_protocol_exe, test_protocol, test_group))
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
