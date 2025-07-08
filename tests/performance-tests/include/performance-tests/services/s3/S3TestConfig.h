/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <performance-tests/services/s3/S3PerformanceTest.h>

#include <array>

namespace PerformanceTest {
namespace Services {
namespace S3 {
namespace TestConfig {
extern const std::array<const char*, 2> TestOperations;
extern const std::array<TestCase, 6> TestMatrix;
extern const char* OutputFilename;
}  // namespace TestConfig
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest