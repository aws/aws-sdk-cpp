/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/SSOOIDCEndpointProvider.h>
#include <aws/sso-oidc/internal/SSOOIDCEndpointRules.h>

namespace Aws {
#ifndef AWS_SSOOIDC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSOOIDC::Endpoint::SSOOIDCClientConfiguration,
                                                   SSOOIDC::Endpoint::SSOOIDCBuiltInParameters,
                                                   SSOOIDC::Endpoint::SSOOIDCClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSOOIDC::Endpoint::SSOOIDCClientConfiguration,
                                                  SSOOIDC::Endpoint::SSOOIDCBuiltInParameters,
                                                  SSOOIDC::Endpoint::SSOOIDCClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSOOIDC {
namespace Endpoint {
SSOOIDCEndpointProvider::SSOOIDCEndpointProvider()
    : SSOOIDCDefaultEpProviderBase(Aws::SSOOIDC::SSOOIDCEndpointRules::GetRulesBlob(), Aws::SSOOIDC::SSOOIDCEndpointRules::RulesBlobSize) {}

void SSOOIDCBuiltInParameters::SetFromClientConfiguration(const SSOOIDCClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSOOIDCClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSOOIDCBuiltInParameters::SetFromClientConfiguration(const SSOOIDCClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSOOIDCClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSOOIDCBuiltInParameters::SetServiceSpecificParameters(const SSOOIDCClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSOOIDC
}  // namespace Aws
