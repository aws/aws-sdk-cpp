/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <performance-tests/services/dynamodb/DynamoDBPerformanceTest.h>

#include <array>
#include <set>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
namespace TestConfig {
const std::set<const char*> TestOperations = {"PutItem", "GetItem"};

const std::array<TestCase, 3> TestMatrix = {{{"8KB", 8 * 1024}, {"64KB", 64 * 1024}, {"392KB", 392 * 1024}}};

const char* OutputFilename = "dynamodb-performance-test-results.json";
}  // namespace TestConfig
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest