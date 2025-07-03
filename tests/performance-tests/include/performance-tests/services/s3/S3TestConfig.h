/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <performance-tests/services/s3/S3PerformanceTest.h>

#include <array>
#include <set>

namespace PerformanceTest {
namespace Services {
namespace S3 {
namespace TestConfig {
const std::set<const char*> TestOperations = {"PutObject", "GetObject"};

const std::array<TestCase, 6> TestMatrix = {{{"8KB", 8 * 1024, "s3-standard"},
                                             {"64KB", 64 * 1024, "s3-standard"},
                                             {"1MB", 1024 * 1024, "s3-standard"},
                                             {"8KB", 8 * 1024, "s3-express"},
                                             {"64KB", 64 * 1024, "s3-express"},
                                             {"1MB", 1024 * 1024, "s3-express"}}};

const char* OutputFilename = "s3-performance-test-results.json";
}  // namespace TestConfig
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest