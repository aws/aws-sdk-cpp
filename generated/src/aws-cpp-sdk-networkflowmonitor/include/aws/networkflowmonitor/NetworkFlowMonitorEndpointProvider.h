/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorClientConfiguration.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Endpoint {
using NetworkFlowMonitorClientConfiguration = Aws::NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NetworkFlowMonitorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NETWORKFLOWMONITOR_API NetworkFlowMonitorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NetworkFlowMonitorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NetworkFlowMonitorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NetworkFlowMonitorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NetworkFlowMonitorClientConfiguration& config);
};

/**
 * The type for the NetworkFlowMonitor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NetworkFlowMonitorEndpointProviderBase =
    EndpointProviderBase<NetworkFlowMonitorClientConfiguration, NetworkFlowMonitorBuiltInParameters,
                         NetworkFlowMonitorClientContextParameters>;

using NetworkFlowMonitorDefaultEpProviderBase =
    BDDEndpointProvider<NetworkFlowMonitorClientConfiguration, NetworkFlowMonitorBuiltInParameters,
                        NetworkFlowMonitorClientContextParameters>;

}  // namespace Endpoint
}  // namespace NetworkFlowMonitor

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NETWORKFLOWMONITOR_EXTERN template class AWS_NETWORKFLOWMONITOR_API Aws::Endpoint::EndpointProviderBase<
    NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientConfiguration, NetworkFlowMonitor::Endpoint::NetworkFlowMonitorBuiltInParameters,
    NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientContextParameters>;

AWS_NETWORKFLOWMONITOR_EXTERN template class AWS_NETWORKFLOWMONITOR_API Aws::Endpoint::BDDEndpointProvider<
    NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientConfiguration, NetworkFlowMonitor::Endpoint::NetworkFlowMonitorBuiltInParameters,
    NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientContextParameters>;
}  // namespace Endpoint

namespace NetworkFlowMonitor {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NETWORKFLOWMONITOR_API NetworkFlowMonitorEndpointProvider : public NetworkFlowMonitorDefaultEpProviderBase {
 public:
  using NetworkFlowMonitorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NetworkFlowMonitorEndpointProvider();

  ~NetworkFlowMonitorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NetworkFlowMonitor
}  // namespace Aws
