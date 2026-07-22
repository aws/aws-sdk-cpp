/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/RolesAnywhereEndpointProvider.h>
#include <aws/rolesanywhere/internal/RolesAnywhereEndpointRules.h>

namespace Aws {
namespace RolesAnywhere {
namespace Endpoint {
RolesAnywhereEndpointProvider::RolesAnywhereEndpointProvider()
    : RolesAnywhereDefaultEpProviderBase(Aws::RolesAnywhere::RolesAnywhereEndpointRules::GetRulesBlob(),
                                         Aws::RolesAnywhere::RolesAnywhereEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RolesAnywhere
}  // namespace Aws
