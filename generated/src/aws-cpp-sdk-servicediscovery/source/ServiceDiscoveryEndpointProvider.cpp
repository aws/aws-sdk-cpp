/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/ServiceDiscoveryEndpointProvider.h>
#include <aws/servicediscovery/internal/ServiceDiscoveryEndpointRules.h>

namespace Aws {
namespace ServiceDiscovery {
namespace Endpoint {
ServiceDiscoveryEndpointProvider::ServiceDiscoveryEndpointProvider()
    : ServiceDiscoveryDefaultEpProviderBase(Aws::ServiceDiscovery::ServiceDiscoveryEndpointRules::GetRulesBlob(),
                                            Aws::ServiceDiscovery::ServiceDiscoveryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ServiceDiscovery
}  // namespace Aws
