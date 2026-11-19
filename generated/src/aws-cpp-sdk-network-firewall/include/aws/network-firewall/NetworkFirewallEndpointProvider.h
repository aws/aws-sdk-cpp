/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallClientConfiguration.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Endpoint {
using NetworkFirewallClientConfiguration = Aws::NetworkFirewall::NetworkFirewallClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NetworkFirewallClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NETWORKFIREWALL_API NetworkFirewallBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NetworkFirewallBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NetworkFirewallClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NetworkFirewallClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NetworkFirewallClientConfiguration& config);
};

/**
 * The type for the NetworkFirewall Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NetworkFirewallEndpointProviderBase =
    EndpointProviderBase<NetworkFirewallClientConfiguration, NetworkFirewallBuiltInParameters, NetworkFirewallClientContextParameters>;

using NetworkFirewallDefaultEpProviderBase =
    BDDEndpointProvider<NetworkFirewallClientConfiguration, NetworkFirewallBuiltInParameters, NetworkFirewallClientContextParameters>;

}  // namespace Endpoint
}  // namespace NetworkFirewall

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NETWORKFIREWALL_EXTERN template class AWS_NETWORKFIREWALL_API Aws::Endpoint::EndpointProviderBase<
    NetworkFirewall::Endpoint::NetworkFirewallClientConfiguration, NetworkFirewall::Endpoint::NetworkFirewallBuiltInParameters,
    NetworkFirewall::Endpoint::NetworkFirewallClientContextParameters>;

AWS_NETWORKFIREWALL_EXTERN template class AWS_NETWORKFIREWALL_API Aws::Endpoint::BDDEndpointProvider<
    NetworkFirewall::Endpoint::NetworkFirewallClientConfiguration, NetworkFirewall::Endpoint::NetworkFirewallBuiltInParameters,
    NetworkFirewall::Endpoint::NetworkFirewallClientContextParameters>;
}  // namespace Endpoint

namespace NetworkFirewall {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NETWORKFIREWALL_API NetworkFirewallEndpointProvider : public NetworkFirewallDefaultEpProviderBase {
 public:
  using NetworkFirewallResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NetworkFirewallEndpointProvider();

  ~NetworkFirewallEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NetworkFirewall
}  // namespace Aws
