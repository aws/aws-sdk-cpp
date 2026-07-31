/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace PricingPlanManager {
class AWS_PRICINGPLANMANAGER_LOCAL PricingPlanManagerEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace PricingPlanManager
}  // namespace Aws
