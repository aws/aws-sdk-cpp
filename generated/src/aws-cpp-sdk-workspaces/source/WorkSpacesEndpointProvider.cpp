/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/WorkSpacesEndpointProvider.h>
#include <aws/workspaces/internal/WorkSpacesEndpointRules.h>

namespace Aws {
namespace WorkSpaces {
namespace Endpoint {
WorkSpacesEndpointProvider::WorkSpacesEndpointProvider()
    : WorkSpacesDefaultEpProviderBase(Aws::WorkSpaces::WorkSpacesEndpointRules::GetRulesBlob(),
                                      Aws::WorkSpaces::WorkSpacesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WorkSpaces
}  // namespace Aws
