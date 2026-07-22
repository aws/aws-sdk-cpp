/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/OrganizationsEndpointProvider.h>
#include <aws/organizations/internal/OrganizationsEndpointRules.h>

namespace Aws {
namespace Organizations {
namespace Endpoint {
OrganizationsEndpointProvider::OrganizationsEndpointProvider()
    : OrganizationsDefaultEpProviderBase(Aws::Organizations::OrganizationsEndpointRules::GetRulesBlob(),
                                         Aws::Organizations::OrganizationsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Organizations
}  // namespace Aws
