/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/WorkspacesInstancesEndpointProvider.h>
#include <aws/workspaces-instances/internal/WorkspacesInstancesEndpointRules.h>

namespace Aws {
namespace WorkspacesInstances {
namespace Endpoint {
WorkspacesInstancesEndpointProvider::WorkspacesInstancesEndpointProvider()
    : WorkspacesInstancesDefaultEpProviderBase(Aws::WorkspacesInstances::WorkspacesInstancesEndpointRules::GetRulesBlob(),
                                               Aws::WorkspacesInstances::WorkspacesInstancesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WorkspacesInstances
}  // namespace Aws
