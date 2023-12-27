/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/networkmonitor/NetworkMonitorEndpointRules.h>


namespace Aws
{
namespace NetworkMonitor
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NetworkMonitorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NetworkMonitorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using NetworkMonitorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the NetworkMonitor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NetworkMonitorEndpointProviderBase =
    EndpointProviderBase<NetworkMonitorClientConfiguration, NetworkMonitorBuiltInParameters, NetworkMonitorClientContextParameters>;

using NetworkMonitorDefaultEpProviderBase =
    DefaultEndpointProvider<NetworkMonitorClientConfiguration, NetworkMonitorBuiltInParameters, NetworkMonitorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NETWORKMONITOR_API NetworkMonitorEndpointProvider : public NetworkMonitorDefaultEpProviderBase
{
public:
    using NetworkMonitorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NetworkMonitorEndpointProvider()
      : NetworkMonitorDefaultEpProviderBase(Aws::NetworkMonitor::NetworkMonitorEndpointRules::GetRulesBlob(), Aws::NetworkMonitor::NetworkMonitorEndpointRules::RulesBlobSize)
    {}

    ~NetworkMonitorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace NetworkMonitor
} // namespace Aws
