/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-security-manager/NetworkSecurityManagerEndpointProvider.h>
#include <aws/network-security-manager/internal/NetworkSecurityManagerEndpointRules.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Endpoint {
NetworkSecurityManagerEndpointProvider::NetworkSecurityManagerEndpointProvider()
    : NetworkSecurityManagerDefaultEpProviderBase(Aws::NetworkSecurityManager::NetworkSecurityManagerEndpointRules::GetRulesBlob(),
                                                  Aws::NetworkSecurityManager::NetworkSecurityManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NetworkSecurityManager
}  // namespace Aws
