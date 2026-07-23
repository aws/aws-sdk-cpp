/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/SSOAdminEndpointProvider.h>
#include <aws/sso-admin/internal/SSOAdminEndpointRules.h>

namespace Aws {
namespace SSOAdmin {
namespace Endpoint {
SSOAdminEndpointProvider::SSOAdminEndpointProvider()
    : SSOAdminDefaultEpProviderBase(Aws::SSOAdmin::SSOAdminEndpointRules::GetRulesBlob(),
                                    Aws::SSOAdmin::SSOAdminEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSOAdmin
}  // namespace Aws
