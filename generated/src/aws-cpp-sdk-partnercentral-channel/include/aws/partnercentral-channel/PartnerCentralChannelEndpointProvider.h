/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelEndpointRules.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralChannelClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PartnerCentralChannelClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralChannelBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PartnerCentralChannel Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralChannelEndpointProviderBase =
    EndpointProviderBase<PartnerCentralChannelClientConfiguration, PartnerCentralChannelBuiltInParameters,
                         PartnerCentralChannelClientContextParameters>;

using PartnerCentralChannelDefaultEpProviderBase =
    DefaultEndpointProvider<PartnerCentralChannelClientConfiguration, PartnerCentralChannelBuiltInParameters,
                            PartnerCentralChannelClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALCHANNEL_API PartnerCentralChannelEndpointProvider : public PartnerCentralChannelDefaultEpProviderBase {
 public:
  using PartnerCentralChannelResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralChannelEndpointProvider()
      : PartnerCentralChannelDefaultEpProviderBase(Aws::PartnerCentralChannel::PartnerCentralChannelEndpointRules::GetRulesBlob(),
                                                   Aws::PartnerCentralChannel::PartnerCentralChannelEndpointRules::RulesBlobSize) {}

  ~PartnerCentralChannelEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralChannel
}  // namespace Aws
