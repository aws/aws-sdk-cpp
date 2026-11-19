/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-account/PartnerCentralAccountEndpointProvider.h>
#include <aws/partnercentral-account/internal/PartnerCentralAccountEndpointRules.h>

namespace Aws {
#ifndef AWS_PARTNERCENTRALACCOUNT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PartnerCentralAccount::Endpoint::PartnerCentralAccountClientConfiguration,
                                                   PartnerCentralAccount::Endpoint::PartnerCentralAccountBuiltInParameters,
                                                   PartnerCentralAccount::Endpoint::PartnerCentralAccountClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PartnerCentralAccount::Endpoint::PartnerCentralAccountClientConfiguration,
                                                  PartnerCentralAccount::Endpoint::PartnerCentralAccountBuiltInParameters,
                                                  PartnerCentralAccount::Endpoint::PartnerCentralAccountClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PartnerCentralAccount {
namespace Endpoint {
PartnerCentralAccountEndpointProvider::PartnerCentralAccountEndpointProvider()
    : PartnerCentralAccountDefaultEpProviderBase(Aws::PartnerCentralAccount::PartnerCentralAccountEndpointRules::GetRulesBlob(),
                                                 Aws::PartnerCentralAccount::PartnerCentralAccountEndpointRules::RulesBlobSize) {}

void PartnerCentralAccountBuiltInParameters::SetFromClientConfiguration(const PartnerCentralAccountClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PartnerCentralAccountClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PartnerCentralAccountBuiltInParameters::SetFromClientConfiguration(const PartnerCentralAccountClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PartnerCentralAccountClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PartnerCentralAccountBuiltInParameters::SetServiceSpecificParameters(const PartnerCentralAccountClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace PartnerCentralAccount
}  // namespace Aws
