/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
namespace TestConfig {
const Aws::Set<Aws::String> Operations = {"PutItem", "GetItem"};

const Aws::Vector<TestCase> TestMatrix = {{"8KB", 8 * 1024}, {"64KB", 64 * 1024}, {"392KB", 392 * 1024}};

const Aws::String OutputFilename = "dynamodb-performance-test-results.json";
}  // namespace TestConfig
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest