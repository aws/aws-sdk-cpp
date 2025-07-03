/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <algorithm>
#include <cstddef>
#include <cstdlib>

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
 * Generate a unique identifier using UUID.
 * @return A 10-character lowercase UUID substring
 */
static inline Aws::String GenerateUniqueId() {
  Aws::String const rawUUID = Aws::Utils::UUID::RandomUUID();
  return Aws::Utils::StringUtils::ToLower(rawUUID.c_str()).substr(0, 10);
}

}  // namespace Utils
}  // namespace PerformanceTest