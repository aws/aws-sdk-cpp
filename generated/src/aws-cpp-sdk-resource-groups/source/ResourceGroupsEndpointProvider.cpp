/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/ResourceGroupsEndpointProvider.h>
#include <aws/resource-groups/internal/ResourceGroupsEndpointRules.h>

namespace Aws {
namespace ResourceGroups {
namespace Endpoint {
ResourceGroupsEndpointProvider::ResourceGroupsEndpointProvider()
    : ResourceGroupsDefaultEpProviderBase(Aws::ResourceGroups::ResourceGroupsEndpointRules::GetRulesBlob(),
                                          Aws::ResourceGroups::ResourceGroupsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ResourceGroups
}  // namespace Aws
