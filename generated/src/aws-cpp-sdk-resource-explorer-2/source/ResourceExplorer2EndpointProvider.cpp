/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/ResourceExplorer2EndpointProvider.h>
#include <aws/resource-explorer-2/internal/ResourceExplorer2EndpointRules.h>

namespace Aws {
namespace ResourceExplorer2 {
namespace Endpoint {
ResourceExplorer2EndpointProvider::ResourceExplorer2EndpointProvider()
    : ResourceExplorer2DefaultEpProviderBase(Aws::ResourceExplorer2::ResourceExplorer2EndpointRules::GetRulesBlob(),
                                             Aws::ResourceExplorer2::ResourceExplorer2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ResourceExplorer2
}  // namespace Aws
