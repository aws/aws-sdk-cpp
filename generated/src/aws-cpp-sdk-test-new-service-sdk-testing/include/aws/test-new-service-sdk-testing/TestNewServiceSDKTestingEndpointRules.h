/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace TestNewServiceSDKTesting {
class TestNewServiceSDKTestingEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
