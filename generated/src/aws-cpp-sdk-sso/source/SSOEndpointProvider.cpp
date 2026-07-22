/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/SSOEndpointProvider.h>
#include <aws/sso/internal/SSOEndpointRules.h>

namespace Aws {
namespace SSO {
namespace Endpoint {
SSOEndpointProvider::SSOEndpointProvider()
    : SSODefaultEpProviderBase(Aws::SSO::SSOEndpointRules::GetRulesBlob(), Aws::SSO::SSOEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSO
}  // namespace Aws
