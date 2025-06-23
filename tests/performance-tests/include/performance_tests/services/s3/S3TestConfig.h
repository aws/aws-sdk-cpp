/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include "performance_tests/services/s3/S3PerformanceTest.h"

namespace PerformanceTest {
namespace Services {
namespace S3 {
namespace TestConfig {
const Aws::Vector<Aws::String> OPERATIONS = {"PutObject", "GetObject"};

const Aws::Vector<TestCase> TEST_MATRIX = {{"8KB", 8 * 1024, "s3-standard"},    {"64KB", 64 * 1024, "s3-standard"},
                                           {"1MB", 1024 * 1024, "s3-standard"}, {"8KB", 8 * 1024, "s3-express"},
                                           {"64KB", 64 * 1024, "s3-express"},   {"1MB", 1024 * 1024, "s3-express"}};
}  // namespace TestConfig
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest