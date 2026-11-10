/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelClientConfiguration.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Endpoint {
using PartnerCentralChannelClientConfiguration = Aws::PartnerCentralChannel::PartnerCentralChannelClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralChannelClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PARTNERCENTRALCHANNEL_API PartnerCentralChannelBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PartnerCentralChannelBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PartnerCentralChannelClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PartnerCentralChannelClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PartnerCentralChannelClientConfiguration& config);
};

/**
 * The type for the PartnerCentralChannel Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralChannelEndpointProviderBase =
    EndpointProviderBase<PartnerCentralChannelClientConfiguration, PartnerCentralChannelBuiltInParameters,
                         PartnerCentralChannelClientContextParameters>;

using PartnerCentralChannelDefaultEpProviderBase =
    BDDEndpointProvider<PartnerCentralChannelClientConfiguration, PartnerCentralChannelBuiltInParameters,
                        PartnerCentralChannelClientContextParameters>;

}  // namespace Endpoint
}  // namespace PartnerCentralChannel

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PARTNERCENTRALCHANNEL_EXTERN template class AWS_PARTNERCENTRALCHANNEL_API
    Aws::Endpoint::EndpointProviderBase<PartnerCentralChannel::Endpoint::PartnerCentralChannelClientConfiguration,
                                        PartnerCentralChannel::Endpoint::PartnerCentralChannelBuiltInParameters,
                                        PartnerCentralChannel::Endpoint::PartnerCentralChannelClientContextParameters>;

AWS_PARTNERCENTRALCHANNEL_EXTERN template class AWS_PARTNERCENTRALCHANNEL_API
    Aws::Endpoint::BDDEndpointProvider<PartnerCentralChannel::Endpoint::PartnerCentralChannelClientConfiguration,
                                       PartnerCentralChannel::Endpoint::PartnerCentralChannelBuiltInParameters,
                                       PartnerCentralChannel::Endpoint::PartnerCentralChannelClientContextParameters>;
}  // namespace Endpoint

namespace PartnerCentralChannel {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALCHANNEL_API PartnerCentralChannelEndpointProvider : public PartnerCentralChannelDefaultEpProviderBase {
 public:
  using PartnerCentralChannelResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralChannelEndpointProvider();

  ~PartnerCentralChannelEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralChannel
}  // namespace Aws
