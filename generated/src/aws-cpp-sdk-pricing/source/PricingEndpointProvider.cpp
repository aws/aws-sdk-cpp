/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/PricingEndpointProvider.h>
#include <aws/pricing/internal/PricingEndpointRules.h>

namespace Aws {
#ifndef AWS_PRICING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Pricing::Endpoint::PricingClientConfiguration,
                                                   Pricing::Endpoint::PricingBuiltInParameters,
                                                   Pricing::Endpoint::PricingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Pricing::Endpoint::PricingClientConfiguration,
                                                  Pricing::Endpoint::PricingBuiltInParameters,
                                                  Pricing::Endpoint::PricingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Pricing {
namespace Endpoint {
PricingEndpointProvider::PricingEndpointProvider()
    : PricingDefaultEpProviderBase(Aws::Pricing::PricingEndpointRules::GetRulesBlob(), Aws::Pricing::PricingEndpointRules::RulesBlobSize) {}

void PricingBuiltInParameters::SetFromClientConfiguration(const PricingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PricingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PricingBuiltInParameters::SetFromClientConfiguration(const PricingClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PricingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PricingBuiltInParameters::SetServiceSpecificParameters(const PricingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Pricing
}  // namespace Aws
