/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/SavingsPlansEndpointProvider.h>
#include <aws/savingsplans/internal/SavingsPlansEndpointRules.h>

namespace Aws {
#ifndef AWS_SAVINGSPLANS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SavingsPlans::Endpoint::SavingsPlansClientConfiguration,
                                                   SavingsPlans::Endpoint::SavingsPlansBuiltInParameters,
                                                   SavingsPlans::Endpoint::SavingsPlansClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SavingsPlans::Endpoint::SavingsPlansClientConfiguration,
                                                  SavingsPlans::Endpoint::SavingsPlansBuiltInParameters,
                                                  SavingsPlans::Endpoint::SavingsPlansClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SavingsPlans {
namespace Endpoint {
SavingsPlansEndpointProvider::SavingsPlansEndpointProvider()
    : SavingsPlansDefaultEpProviderBase(Aws::SavingsPlans::SavingsPlansEndpointRules::GetRulesBlob(),
                                        Aws::SavingsPlans::SavingsPlansEndpointRules::RulesBlobSize) {}

void SavingsPlansBuiltInParameters::SetFromClientConfiguration(const SavingsPlansClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SavingsPlansClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SavingsPlansBuiltInParameters::SetFromClientConfiguration(const SavingsPlansClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SavingsPlansClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SavingsPlansBuiltInParameters::SetServiceSpecificParameters(const SavingsPlansClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SavingsPlans
}  // namespace Aws
