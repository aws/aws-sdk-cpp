/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <performance-tests/services/s3/S3PerformanceTest.h>
#include <performance-tests/services/s3/S3TestConfig.h>

#include <array>

namespace PerformanceTest {
namespace Services {
namespace S3 {
namespace TestConfig {

const std::array<const char*, 2> TestOperations = {"PutObject", "GetObject"};

const std::array<TestCase, 6> TestMatrix = {{{.sizeLabel = "8KB", .sizeBytes = 8 * 1024, .bucketTypeLabel = "s3-standard"},
                                             {.sizeLabel = "64KB", .sizeBytes = 64 * 1024, .bucketTypeLabel = "s3-standard"},
                                             {.sizeLabel = "1MB", .sizeBytes = 1024 * 1024, .bucketTypeLabel = "s3-standard"},
                                             {.sizeLabel = "8KB", .sizeBytes = 8 * 1024, .bucketTypeLabel = "s3-express"},
                                             {.sizeLabel = "64KB", .sizeBytes = 64 * 1024, .bucketTypeLabel = "s3-express"},
                                             {.sizeLabel = "1MB", .sizeBytes = 1024 * 1024, .bucketTypeLabel = "s3-express"}}};

const char* OutputFilename = "s3-performance-test-results.json";

}  // namespace TestConfig
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest