/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <performance-tests/services/dynamodb/DynamoDBPerformanceTest.h>

#include <array>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
namespace TestConfig {
extern const std::array<const char*, 2> TestOperations;
extern const std::array<TestCase, 3> TestMatrix;
extern const char* OutputFilename;
}  // namespace TestConfig
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest