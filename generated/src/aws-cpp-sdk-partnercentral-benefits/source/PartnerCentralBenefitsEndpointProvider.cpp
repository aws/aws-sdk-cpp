/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-benefits/PartnerCentralBenefitsEndpointProvider.h>
#include <aws/partnercentral-benefits/internal/PartnerCentralBenefitsEndpointRules.h>

namespace Aws {
#ifndef AWS_PARTNERCENTRALBENEFITS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientConfiguration,
                                                   PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsBuiltInParameters,
                                                   PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientConfiguration,
                                                  PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsBuiltInParameters,
                                                  PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PartnerCentralBenefits {
namespace Endpoint {
PartnerCentralBenefitsEndpointProvider::PartnerCentralBenefitsEndpointProvider()
    : PartnerCentralBenefitsDefaultEpProviderBase(Aws::PartnerCentralBenefits::PartnerCentralBenefitsEndpointRules::GetRulesBlob(),
                                                  Aws::PartnerCentralBenefits::PartnerCentralBenefitsEndpointRules::RulesBlobSize) {}

void PartnerCentralBenefitsBuiltInParameters::SetFromClientConfiguration(const PartnerCentralBenefitsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PartnerCentralBenefitsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PartnerCentralBenefitsBuiltInParameters::SetFromClientConfiguration(const PartnerCentralBenefitsClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PartnerCentralBenefitsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PartnerCentralBenefitsBuiltInParameters::SetServiceSpecificParameters(const PartnerCentralBenefitsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace PartnerCentralBenefits
}  // namespace Aws
