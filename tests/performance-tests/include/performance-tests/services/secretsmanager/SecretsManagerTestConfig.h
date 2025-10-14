/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>

#include <array>
#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace SecretsManager {
namespace TestConfig {

/**
 * Secret sizes for Secrets Manager performance tests.
 */
enum class SecretSize { S64, S512, S4096, S8192, S45056 };

/**
 * Configuration for Secrets Manager performance test cases.
 */
struct TestCase {
  SecretSize secretSize;
};

/**
 * Get the secret size value for a given SecretSize enum.
 * @param secretSize The SecretSize enum value
 * @return Size in bytes
 */
size_t GetSecretSizeValue(SecretSize secretSize);

/**
 * Get the string label for a given SecretSize enum.
 * @param secretSize The SecretSize enum value
 * @return String label (e.g., "64", "512", "4096", "8192", "45056")
 */
Aws::String GetSecretSizeLabel(SecretSize secretSize);

/** Operations tested in Secrets Manager performance tests. */
extern const std::array<const char*, 4> TestOperations;

/** Array of all test case combinations. */
extern const std::array<TestCase, 5> TestMatrix;

/** Output filename for test results. */
extern const char* OutputFilename;

}  // namespace TestConfig
}  // namespace SecretsManager
}  // namespace Services
}  // namespace PerformanceTest