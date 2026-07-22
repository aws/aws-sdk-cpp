/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace SSMQuickSetup {
class AWS_SSMQUICKSETUP_LOCAL SSMQuickSetupEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace SSMQuickSetup
}  // namespace Aws
