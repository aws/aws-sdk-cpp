/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmonitor/NetworkMonitorClientConfiguration.h>
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>

namespace Aws {
namespace NetworkMonitor {
namespace Endpoint {
using NetworkMonitorClientConfiguration = Aws::NetworkMonitor::NetworkMonitorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NetworkMonitorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NETWORKMONITOR_API NetworkMonitorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NetworkMonitorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NetworkMonitorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NetworkMonitorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NetworkMonitorClientConfiguration& config);
};

/**
 * The type for the NetworkMonitor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NetworkMonitorEndpointProviderBase =
    EndpointProviderBase<NetworkMonitorClientConfiguration, NetworkMonitorBuiltInParameters, NetworkMonitorClientContextParameters>;

using NetworkMonitorDefaultEpProviderBase =
    BDDEndpointProvider<NetworkMonitorClientConfiguration, NetworkMonitorBuiltInParameters, NetworkMonitorClientContextParameters>;

}  // namespace Endpoint
}  // namespace NetworkMonitor

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NETWORKMONITOR_EXTERN template class AWS_NETWORKMONITOR_API Aws::Endpoint::EndpointProviderBase<
    NetworkMonitor::Endpoint::NetworkMonitorClientConfiguration, NetworkMonitor::Endpoint::NetworkMonitorBuiltInParameters,
    NetworkMonitor::Endpoint::NetworkMonitorClientContextParameters>;

AWS_NETWORKMONITOR_EXTERN template class AWS_NETWORKMONITOR_API Aws::Endpoint::BDDEndpointProvider<
    NetworkMonitor::Endpoint::NetworkMonitorClientConfiguration, NetworkMonitor::Endpoint::NetworkMonitorBuiltInParameters,
    NetworkMonitor::Endpoint::NetworkMonitorClientContextParameters>;
}  // namespace Endpoint

namespace NetworkMonitor {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NETWORKMONITOR_API NetworkMonitorEndpointProvider : public NetworkMonitorDefaultEpProviderBase {
 public:
  using NetworkMonitorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NetworkMonitorEndpointProvider();

  ~NetworkMonitorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NetworkMonitor
}  // namespace Aws
