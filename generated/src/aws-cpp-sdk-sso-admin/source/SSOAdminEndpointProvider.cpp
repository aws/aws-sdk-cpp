/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/SSOAdminEndpointProvider.h>
#include <aws/sso-admin/internal/SSOAdminEndpointRules.h>

namespace Aws {
#ifndef AWS_SSOADMIN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSOAdmin::Endpoint::SSOAdminClientConfiguration,
                                                   SSOAdmin::Endpoint::SSOAdminBuiltInParameters,
                                                   SSOAdmin::Endpoint::SSOAdminClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSOAdmin::Endpoint::SSOAdminClientConfiguration,
                                                  SSOAdmin::Endpoint::SSOAdminBuiltInParameters,
                                                  SSOAdmin::Endpoint::SSOAdminClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSOAdmin {
namespace Endpoint {
SSOAdminEndpointProvider::SSOAdminEndpointProvider()
    : SSOAdminDefaultEpProviderBase(Aws::SSOAdmin::SSOAdminEndpointRules::GetRulesBlob(),
                                    Aws::SSOAdmin::SSOAdminEndpointRules::RulesBlobSize) {}

void SSOAdminBuiltInParameters::SetFromClientConfiguration(const SSOAdminClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSOAdminClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSOAdminBuiltInParameters::SetFromClientConfiguration(const SSOAdminClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSOAdminClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSOAdminBuiltInParameters::SetServiceSpecificParameters(const SSOAdminClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSOAdmin
}  // namespace Aws
