/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <gtest/gtest.h>

#include <clocale>
#include <cstdio>
#include <cstdlib>

namespace {

class SdkEnvironment final : public ::testing::Environment {
 public:
  void SetUp() override {
    const char* locale = std::getenv("SCHEMA_FUZZ_LOCALE");
    if (locale != nullptr && *locale != '\0' && std::setlocale(LC_NUMERIC, locale) == nullptr) {
      std::fprintf(stderr, "SCHEMA_FUZZ_LOCALE: cannot set LC_NUMERIC to %s\n", locale);
      std::abort();
    }
    Aws::InitAPI(m_options);
  }
  void TearDown() override { Aws::ShutdownAPI(m_options); }

 private:
  Aws::SDKOptions m_options;
};

// gtest takes ownership of the raw pointer.
::testing::Environment* const SDK_ENVIRONMENT = ::testing::AddGlobalTestEnvironment(new SdkEnvironment);

}  // namespace
