/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-channel/PartnerCentralChannelEndpointProvider.h>
#include <aws/partnercentral-channel/internal/PartnerCentralChannelEndpointRules.h>

namespace Aws {
#ifndef AWS_PARTNERCENTRALCHANNEL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PartnerCentralChannel::Endpoint::PartnerCentralChannelClientConfiguration,
                                                   PartnerCentralChannel::Endpoint::PartnerCentralChannelBuiltInParameters,
                                                   PartnerCentralChannel::Endpoint::PartnerCentralChannelClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PartnerCentralChannel::Endpoint::PartnerCentralChannelClientConfiguration,
                                                  PartnerCentralChannel::Endpoint::PartnerCentralChannelBuiltInParameters,
                                                  PartnerCentralChannel::Endpoint::PartnerCentralChannelClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PartnerCentralChannel {
namespace Endpoint {
PartnerCentralChannelEndpointProvider::PartnerCentralChannelEndpointProvider()
    : PartnerCentralChannelDefaultEpProviderBase(Aws::PartnerCentralChannel::PartnerCentralChannelEndpointRules::GetRulesBlob(),
                                                 Aws::PartnerCentralChannel::PartnerCentralChannelEndpointRules::RulesBlobSize) {}

void PartnerCentralChannelBuiltInParameters::SetFromClientConfiguration(const PartnerCentralChannelClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PartnerCentralChannelClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PartnerCentralChannelBuiltInParameters::SetFromClientConfiguration(const PartnerCentralChannelClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PartnerCentralChannelClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PartnerCentralChannelBuiltInParameters::SetServiceSpecificParameters(const PartnerCentralChannelClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace PartnerCentralChannel
}  // namespace Aws
