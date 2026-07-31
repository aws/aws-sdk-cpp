/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing-plan-manager/PricingPlanManagerEndpointProvider.h>
#include <aws/pricing-plan-manager/internal/PricingPlanManagerEndpointRules.h>

namespace Aws {
namespace PricingPlanManager {
namespace Endpoint {
PricingPlanManagerEndpointProvider::PricingPlanManagerEndpointProvider()
    : PricingPlanManagerDefaultEpProviderBase(Aws::PricingPlanManager::PricingPlanManagerEndpointRules::GetRulesBlob(),
                                              Aws::PricingPlanManager::PricingPlanManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PricingPlanManager
}  // namespace Aws
