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
 */
void RunTest(Aws::DynamoDB::DynamoDBClient& dynamodb, const TestCase& config, int iterations = 3);

/**
 * Create DynamoDB table for testing and wait for it to become active.
 * @param dynamodb DynamoDB client instance
 * @param config Test configuration
 * @return Table name if successful, empty string if failed
 */
Aws::String SetupTable(Aws::DynamoDB::DynamoDBClient& dynamodb, const TestCase& config);

/**
 * Run PutItem and GetItem operations.
 * @param dynamodb DynamoDB client instance
 * @param tableName Name of the table to use
 * @param config Test configuration
 * @param iterations Number of operations to perform
 */
void RunOperations(Aws::DynamoDB::DynamoDBClient& dynamodb, const Aws::String& tableName, const TestCase& config, int iterations);

/**
 * Clean up DynamoDB resources (delete table).
 * @param dynamodb DynamoDB client instance
 * @param tableName Name of the table to delete
 */
void CleanupResources(Aws::DynamoDB::DynamoDBClient& dynamodb, const Aws::String& tableName);
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest