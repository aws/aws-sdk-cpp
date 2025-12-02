/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nova-act/NovaAct_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace NovaAct {
class NovaActEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace NovaAct
}  // namespace Aws
