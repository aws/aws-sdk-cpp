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
namespace S3 {
namespace TestConfig {
const Aws::Set<Aws::String> TestOperations = {"PutObject", "GetObject"};

const Aws::Vector<TestCase> TestMatrix = {{"8KB", 8 * 1024, "s3-standard"},    {"64KB", 64 * 1024, "s3-standard"},
                                          {"1MB", 1024 * 1024, "s3-standard"}, {"8KB", 8 * 1024, "s3-express"},
                                          {"64KB", 64 * 1024, "s3-express"},   {"1MB", 1024 * 1024, "s3-express"}};

const Aws::String OutputFilename = "s3-performance-test-results.json";
}  // namespace TestConfig
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest