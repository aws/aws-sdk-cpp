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
/**
 * Configuration for DynamoDB performance test cases.
 */
struct TestCase {
  Aws::String sizeLabel;
  size_t sizeBytes;
};

/**
 * Runs DynamoDB performance test by creating a table, performing PutItem and GetItem operations,
 * then cleaning up resources.
 * @param dynamodb DynamoDB client instance to use for operations
 * @param config Test configuration containing size parameters
 * @param iterations Number of put/get operations to perform
 * @return true if test completed successfully, false on error
 */
bool RunTest(Aws::DynamoDB::DynamoDBClient& dynamodb, const TestCase& config, int iterations = 3);
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest