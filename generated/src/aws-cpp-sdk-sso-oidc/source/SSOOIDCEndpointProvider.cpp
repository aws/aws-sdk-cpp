/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/SSOOIDCEndpointProvider.h>
#include <aws/sso-oidc/internal/SSOOIDCEndpointRules.h>

namespace Aws {
namespace SSOOIDC {
namespace Endpoint {
SSOOIDCEndpointProvider::SSOOIDCEndpointProvider()
    : SSOOIDCDefaultEpProviderBase(Aws::SSOOIDC::SSOOIDCEndpointRules::GetRulesBlob(), Aws::SSOOIDC::SSOOIDCEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSOOIDC
}  // namespace Aws
