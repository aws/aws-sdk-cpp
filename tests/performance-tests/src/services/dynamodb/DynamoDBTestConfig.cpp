/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <performance-tests/services/dynamodb/DynamoDBPerformanceTest.h>
#include <performance-tests/services/dynamodb/DynamoDBTestConfig.h>

#include <array>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
namespace TestConfig {

const std::array<const char*, 2> TestOperations = {"PutItem", "GetItem"};

const std::array<TestCase, 3> TestMatrix = {{{.sizeLabel = "8KB", .sizeBytes = 8 * 1024},
                                             {.sizeLabel = "64KB", .sizeBytes = 64 * 1024},
                                             {.sizeLabel = "392KB", .sizeBytes = 392 * 1024}}};

const char* OutputFilename = "dynamodb-performance-test-results.json";

}  // namespace TestConfig
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest