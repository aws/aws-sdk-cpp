/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include "performance_tests/services/dynamodb/DynamoDBPerformanceTest.h"

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
namespace TestConfig {
const Aws::Vector<Aws::String> OPERATIONS = {"PutItem", "GetItem"};

const Aws::Vector<TestCase> TEST_MATRIX = {{"8KB", 8 * 1024}, {"64KB", 64 * 1024}, {"392KB", 392 * 1024}};
}  // namespace TestConfig
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest