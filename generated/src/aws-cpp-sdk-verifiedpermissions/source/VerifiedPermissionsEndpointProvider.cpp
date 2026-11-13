/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/VerifiedPermissionsEndpointProvider.h>
#include <aws/verifiedpermissions/internal/VerifiedPermissionsEndpointRules.h>

namespace Aws {
#ifndef AWS_VERIFIEDPERMISSIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<VerifiedPermissions::Endpoint::VerifiedPermissionsClientConfiguration,
                                                   VerifiedPermissions::Endpoint::VerifiedPermissionsBuiltInParameters,
                                                   VerifiedPermissions::Endpoint::VerifiedPermissionsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<VerifiedPermissions::Endpoint::VerifiedPermissionsClientConfiguration,
                                                  VerifiedPermissions::Endpoint::VerifiedPermissionsBuiltInParameters,
                                                  VerifiedPermissions::Endpoint::VerifiedPermissionsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace VerifiedPermissions {
namespace Endpoint {
VerifiedPermissionsEndpointProvider::VerifiedPermissionsEndpointProvider()
    : VerifiedPermissionsDefaultEpProviderBase(Aws::VerifiedPermissions::VerifiedPermissionsEndpointRules::GetRulesBlob(),
                                               Aws::VerifiedPermissions::VerifiedPermissionsEndpointRules::RulesBlobSize) {}

void VerifiedPermissionsBuiltInParameters::SetFromClientConfiguration(const VerifiedPermissionsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const VerifiedPermissionsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void VerifiedPermissionsBuiltInParameters::SetFromClientConfiguration(const VerifiedPermissionsClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const VerifiedPermissionsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void VerifiedPermissionsBuiltInParameters::SetServiceSpecificParameters(const VerifiedPermissionsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace VerifiedPermissions
}  // namespace Aws
