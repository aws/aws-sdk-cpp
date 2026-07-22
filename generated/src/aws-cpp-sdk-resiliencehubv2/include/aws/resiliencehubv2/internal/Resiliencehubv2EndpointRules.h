/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace resiliencehubv2 {
class AWS_RESILIENCEHUBV2_LOCAL Resiliencehubv2EndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace resiliencehubv2
}  // namespace Aws
