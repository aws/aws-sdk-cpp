/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/WorkSpacesThinClientEndpointProvider.h>
#include <aws/workspaces-thin-client/internal/WorkSpacesThinClientEndpointRules.h>

namespace Aws {
namespace WorkSpacesThinClient {
namespace Endpoint {
WorkSpacesThinClientEndpointProvider::WorkSpacesThinClientEndpointProvider()
    : WorkSpacesThinClientDefaultEpProviderBase(Aws::WorkSpacesThinClient::WorkSpacesThinClientEndpointRules::GetRulesBlob(),
                                                Aws::WorkSpacesThinClient::WorkSpacesThinClientEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WorkSpacesThinClient
}  // namespace Aws
