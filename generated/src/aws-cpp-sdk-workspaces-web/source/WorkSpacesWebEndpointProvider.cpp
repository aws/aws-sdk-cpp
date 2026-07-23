/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/WorkSpacesWebEndpointProvider.h>
#include <aws/workspaces-web/internal/WorkSpacesWebEndpointRules.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Endpoint {
WorkSpacesWebEndpointProvider::WorkSpacesWebEndpointProvider()
    : WorkSpacesWebDefaultEpProviderBase(Aws::WorkSpacesWeb::WorkSpacesWebEndpointRules::GetRulesBlob(),
                                         Aws::WorkSpacesWeb::WorkSpacesWebEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WorkSpacesWeb
}  // namespace Aws
