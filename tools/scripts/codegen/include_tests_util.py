#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
"""
This is a module to generate unit test that tests that
all generated AWS C++ SDK Service client headers are build-able on include into a simple app.

In order to validate the code generator, this utility is generating code directly from python module intentionally
instead of legacy/smithy java code generators.

This module relies only on already present generated client headers filesystem tree and disconnected from the c2j java.
"""

import os
import re

from jinja2 import Environment, select_autoescape

TEST_NAME_SUFFIX = "IncludeTests.cpp"
TEST_TEMPLATE = \
    """/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

{% for t_header in t_headers -%}
#include <{{ t_header }}>
{% endfor %}
using {{ t_test_name }} = ::testing::Test;

TEST_F({{ t_test_name }}, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<{{ t_namespace }}::{{ t_cpp_name }}>("{{ t_test_name }}", config);
  // ASSERT_TRUE(pClient.get());
}

"""

NAMESPACE_PATTERN = re.compile(
    "^\s*namespace\s*"
    "(?P<namespace>[a-zA-Z]+[0-9a-zA-Z]*)"
)

CLASS_PATTERN = re.compile(
    "^\s*class\s+"
    "(?:([A-Z_0-9]+\s+))?"  # EXPORT_MACRO
    "(?P<class_name>[a-zA-Z]+[0-9a-zA-Z]+)\s+"
    ":\s(public|Aws::Client::).+"
)


def remove_prefix(text, prefix):
    return text[text.startswith(prefix) and len(prefix):]


class IncludeTestsUtil(object):
    """
    An utility class to generate a simple unit tests that
     - includes all service client headers;
     - checks that client can be declared.
    """

    def __init__(self):
        pass

    @staticmethod
    def generate(service_name: str, service_client_dir: str, test_output_dir: str):
        headers = IncludeTestsUtil._collect_headers(service_client_dir)
        namespace, cpp_name = IncludeTestsUtil._extract_cpp_client_name(service_name, service_client_dir)
        return IncludeTestsUtil._generate_test(headers, namespace, cpp_name, service_name, test_output_dir)

    @staticmethod
    def _collect_headers(service_client_dir: str) -> list:
        service_client_include_dir = f"{service_client_dir}/include/"
        headers = []

        for root, dirs, files in os.walk(service_client_include_dir):
            for filename in files:
                if filename.endswith(".h") or filename.endswith(".hpp"):
                    headers.append(f"{remove_prefix(root, service_client_include_dir)}/{filename}")

        return sorted(headers)

    @staticmethod
    def _generate_test(headers: list, namespace: str, cpp_name: str, service_name: str, test_output_dir: str) -> int:
        jinja2_env = Environment(autoescape=select_autoescape(['html', 'xml']))
        jinja2_template = jinja2_env.from_string(TEST_TEMPLATE)
        test_name = cpp_name.replace("Client", "IncludeTest")
        rendered_test = jinja2_template.render(t_headers=headers,
                                               t_test_name=test_name,
                                               t_namespace=namespace,
                                               t_cpp_name=cpp_name)
        test_file_path = f"{test_output_dir}/{test_name}s.cpp"

        with open(f"{test_file_path}", mode="w", encoding="utf-8") as rendered_test_f:
            rendered_test_f.write(rendered_test)

        return 0

    @staticmethod
    def _extract_cpp_client_name(service_name: str, service_client_dir: str) -> (str, str):
        client_header_filename = [name for name in
                                  os.listdir(service_client_dir + "/include/aws/" + service_name)
                                  if name.endswith("Client.h")][0]
        namespace = ""
        client_name = client_header_filename[:-2]
        with open(f"{service_client_dir}/include/aws/{service_name}/{client_header_filename}", mode="r") as header:
            for line in header:
                match = NAMESPACE_PATTERN.match(line)
                if match and match.group("namespace") != "Aws" and not namespace:
                    namespace = match.group("namespace")
                match = CLASS_PATTERN.match(line)
                if match:
                    client_name = match.group("class_name")
                    break

        return f"Aws::{namespace}", client_name
