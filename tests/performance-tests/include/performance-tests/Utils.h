/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Aws.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace PerformanceTest {
namespace Utils {
/**
 * Generate a random string of specified length.
 * @param length The desired length of the string
 * @return A random string containing lowercase letters and digits
 */
static inline Aws::String RandomString(size_t length) {
  auto randchar = []() -> char {
    const char charset[] =
        "0123456789"
        "abcdefghijklmnopqrstuvwxyz";
    const size_t max_index = (sizeof(charset) - 1);
    return charset[rand() % max_index];
  };
  Aws::String str(length, 0);
  std::generate_n(str.begin(), length, randchar);
  return str;
}

/**
 * Log error messages to stderr.
 * @param service The name of the AWS service
 * @param operation The name of the operation that failed
 * @param message The error message to log
 */
static inline void LogError(const Aws::String& service, const Aws::String& operation, const Aws::String& message) {
  std::cerr << "[ERROR] " << service << ":" << operation << " failed: " << message << '\n';
}

/**
 * Generate a unique identifier using UUID.
 * @return A 10-character lowercase UUID substring
 */
static inline Aws::String GenerateUniqueId() {
  Aws::String const rawUUID = Aws::Utils::UUID::RandomUUID();
  return Aws::Utils::StringUtils::ToLower(rawUUID.c_str()).substr(0, 10);
}

/**
 * Get the current SDK version as a formatted string.
 * @return SDK version in the format "major.minor.patch" (e.g., "1.11.0")
 */
static inline Aws::String GetSDKVersionString() {
  Aws::SDKOptions::SDKVersion const version;
  return Aws::Utils::StringUtils::to_string(static_cast<int>(version.major)) + "." +
         Aws::Utils::StringUtils::to_string(static_cast<int>(version.minor)) + "." +
         Aws::Utils::StringUtils::to_string(static_cast<int>(version.patch));
}

}  // namespace Utils
}  // namespace PerformanceTest