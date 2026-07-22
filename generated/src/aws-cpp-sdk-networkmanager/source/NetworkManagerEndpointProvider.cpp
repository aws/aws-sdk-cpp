/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/NetworkManagerEndpointProvider.h>
#include <aws/networkmanager/internal/NetworkManagerEndpointRules.h>

namespace Aws {
namespace NetworkManager {
namespace Endpoint {
NetworkManagerEndpointProvider::NetworkManagerEndpointProvider()
    : NetworkManagerDefaultEpProviderBase(Aws::NetworkManager::NetworkManagerEndpointRules::GetRulesBlob(),
                                          Aws::NetworkManager::NetworkManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NetworkManager
}  // namespace Aws
