/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/ObservabilityAdminEndpointProvider.h>
#include <aws/observabilityadmin/internal/ObservabilityAdminEndpointRules.h>

namespace Aws {
#ifndef AWS_OBSERVABILITYADMIN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ObservabilityAdmin::Endpoint::ObservabilityAdminClientConfiguration,
                                                   ObservabilityAdmin::Endpoint::ObservabilityAdminBuiltInParameters,
                                                   ObservabilityAdmin::Endpoint::ObservabilityAdminClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ObservabilityAdmin::Endpoint::ObservabilityAdminClientConfiguration,
                                                  ObservabilityAdmin::Endpoint::ObservabilityAdminBuiltInParameters,
                                                  ObservabilityAdmin::Endpoint::ObservabilityAdminClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ObservabilityAdmin {
namespace Endpoint {
ObservabilityAdminEndpointProvider::ObservabilityAdminEndpointProvider()
    : ObservabilityAdminDefaultEpProviderBase(Aws::ObservabilityAdmin::ObservabilityAdminEndpointRules::GetRulesBlob(),
                                              Aws::ObservabilityAdmin::ObservabilityAdminEndpointRules::RulesBlobSize) {}

void ObservabilityAdminBuiltInParameters::SetFromClientConfiguration(const ObservabilityAdminClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ObservabilityAdminClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ObservabilityAdminBuiltInParameters::SetFromClientConfiguration(const ObservabilityAdminClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ObservabilityAdminClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ObservabilityAdminBuiltInParameters::SetServiceSpecificParameters(const ObservabilityAdminClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ObservabilityAdmin
}  // namespace Aws
