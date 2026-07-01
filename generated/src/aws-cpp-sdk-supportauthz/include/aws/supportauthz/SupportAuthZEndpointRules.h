/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace SupportAuthZ {
class SupportAuthZEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace SupportAuthZ
}  // namespace Aws
