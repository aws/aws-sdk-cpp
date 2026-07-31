/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pricing-plan-manager/PricingPlanManagerClient.h>

#include <algorithm>

namespace Aws {
namespace PricingPlanManager {

template <typename DerivedClient = PricingPlanManagerClient>
class PricingPlanManagerWaiter {
 public:
};
}  // namespace PricingPlanManager
}  // namespace Aws
