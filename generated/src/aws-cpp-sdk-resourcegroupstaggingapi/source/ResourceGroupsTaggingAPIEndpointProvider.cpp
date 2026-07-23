/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpointProvider.h>
#include <aws/resourcegroupstaggingapi/internal/ResourceGroupsTaggingAPIEndpointRules.h>

namespace Aws {
namespace ResourceGroupsTaggingAPI {
namespace Endpoint {
ResourceGroupsTaggingAPIEndpointProvider::ResourceGroupsTaggingAPIEndpointProvider()
    : ResourceGroupsTaggingAPIDefaultEpProviderBase(Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIEndpointRules::GetRulesBlob(),
                                                    Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
