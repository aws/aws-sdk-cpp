/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-reporting/MarketplaceReportingEndpointProvider.h>
#include <aws/marketplace-reporting/internal/MarketplaceReportingEndpointRules.h>

namespace Aws {
#ifndef AWS_MARKETPLACEREPORTING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MarketplaceReporting::Endpoint::MarketplaceReportingClientConfiguration,
                                                   MarketplaceReporting::Endpoint::MarketplaceReportingBuiltInParameters,
                                                   MarketplaceReporting::Endpoint::MarketplaceReportingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MarketplaceReporting::Endpoint::MarketplaceReportingClientConfiguration,
                                                  MarketplaceReporting::Endpoint::MarketplaceReportingBuiltInParameters,
                                                  MarketplaceReporting::Endpoint::MarketplaceReportingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MarketplaceReporting {
namespace Endpoint {
MarketplaceReportingEndpointProvider::MarketplaceReportingEndpointProvider()
    : MarketplaceReportingDefaultEpProviderBase(Aws::MarketplaceReporting::MarketplaceReportingEndpointRules::GetRulesBlob(),
                                                Aws::MarketplaceReporting::MarketplaceReportingEndpointRules::RulesBlobSize) {}

void MarketplaceReportingBuiltInParameters::SetFromClientConfiguration(const MarketplaceReportingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MarketplaceReportingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MarketplaceReportingBuiltInParameters::SetFromClientConfiguration(const MarketplaceReportingClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MarketplaceReportingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MarketplaceReportingBuiltInParameters::SetServiceSpecificParameters(const MarketplaceReportingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MarketplaceReporting
}  // namespace Aws
