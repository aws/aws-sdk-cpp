/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing-plan-manager/PricingPlanManagerEndpointProvider.h>
#include <aws/pricing-plan-manager/internal/PricingPlanManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_PRICINGPLANMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PricingPlanManager::Endpoint::PricingPlanManagerClientConfiguration,
                                                   PricingPlanManager::Endpoint::PricingPlanManagerBuiltInParameters,
                                                   PricingPlanManager::Endpoint::PricingPlanManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PricingPlanManager::Endpoint::PricingPlanManagerClientConfiguration,
                                                  PricingPlanManager::Endpoint::PricingPlanManagerBuiltInParameters,
                                                  PricingPlanManager::Endpoint::PricingPlanManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PricingPlanManager {
namespace Endpoint {
PricingPlanManagerEndpointProvider::PricingPlanManagerEndpointProvider()
    : PricingPlanManagerDefaultEpProviderBase(Aws::PricingPlanManager::PricingPlanManagerEndpointRules::GetRulesBlob(),
                                              Aws::PricingPlanManager::PricingPlanManagerEndpointRules::RulesBlobSize) {}

void PricingPlanManagerBuiltInParameters::SetFromClientConfiguration(const PricingPlanManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PricingPlanManagerClientConfiguration::BaseClientConfigClass&>(config));
}

void PricingPlanManagerBuiltInParameters::SetFromClientConfiguration(const PricingPlanManagerClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PricingPlanManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace PricingPlanManager
}  // namespace Aws
