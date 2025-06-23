/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBClient.h>

#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
struct TestCase {
  Aws::String sizeLabel;
  size_t sizeBytes;
};

bool RunTest(Aws::DynamoDB::DynamoDBClient& dynamodb, const TestCase& config, int iterations = 3);
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest