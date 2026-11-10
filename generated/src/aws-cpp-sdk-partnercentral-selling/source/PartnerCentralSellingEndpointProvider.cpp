/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/PartnerCentralSellingEndpointProvider.h>
#include <aws/partnercentral-selling/internal/PartnerCentralSellingEndpointRules.h>

namespace Aws {
#ifndef AWS_PARTNERCENTRALSELLING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PartnerCentralSelling::Endpoint::PartnerCentralSellingClientConfiguration,
                                                   PartnerCentralSelling::Endpoint::PartnerCentralSellingBuiltInParameters,
                                                   PartnerCentralSelling::Endpoint::PartnerCentralSellingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PartnerCentralSelling::Endpoint::PartnerCentralSellingClientConfiguration,
                                                  PartnerCentralSelling::Endpoint::PartnerCentralSellingBuiltInParameters,
                                                  PartnerCentralSelling::Endpoint::PartnerCentralSellingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PartnerCentralSelling {
namespace Endpoint {
PartnerCentralSellingEndpointProvider::PartnerCentralSellingEndpointProvider()
    : PartnerCentralSellingDefaultEpProviderBase(Aws::PartnerCentralSelling::PartnerCentralSellingEndpointRules::GetRulesBlob(),
                                                 Aws::PartnerCentralSelling::PartnerCentralSellingEndpointRules::RulesBlobSize) {}

void PartnerCentralSellingBuiltInParameters::SetFromClientConfiguration(const PartnerCentralSellingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PartnerCentralSellingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PartnerCentralSellingBuiltInParameters::SetFromClientConfiguration(const PartnerCentralSellingClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PartnerCentralSellingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PartnerCentralSellingBuiltInParameters::SetServiceSpecificParameters(const PartnerCentralSellingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace PartnerCentralSelling
}  // namespace Aws
