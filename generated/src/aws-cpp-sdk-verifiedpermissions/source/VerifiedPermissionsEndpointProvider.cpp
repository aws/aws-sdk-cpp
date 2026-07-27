/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/VerifiedPermissionsEndpointProvider.h>
#include <aws/verifiedpermissions/internal/VerifiedPermissionsEndpointRules.h>

namespace Aws {
namespace VerifiedPermissions {
namespace Endpoint {
VerifiedPermissionsEndpointProvider::VerifiedPermissionsEndpointProvider()
    : VerifiedPermissionsDefaultEpProviderBase(Aws::VerifiedPermissions::VerifiedPermissionsEndpointRules::GetRulesBlob(),
                                               Aws::VerifiedPermissions::VerifiedPermissionsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace VerifiedPermissions
}  // namespace Aws
