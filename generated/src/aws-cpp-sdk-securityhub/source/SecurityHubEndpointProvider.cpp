/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/SecurityHubEndpointProvider.h>
#include <aws/securityhub/internal/SecurityHubEndpointRules.h>

namespace Aws {
#ifndef AWS_SECURITYHUB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SecurityHub::Endpoint::SecurityHubClientConfiguration,
                                                   SecurityHub::Endpoint::SecurityHubBuiltInParameters,
                                                   SecurityHub::Endpoint::SecurityHubClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SecurityHub::Endpoint::SecurityHubClientConfiguration,
                                                  SecurityHub::Endpoint::SecurityHubBuiltInParameters,
                                                  SecurityHub::Endpoint::SecurityHubClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SecurityHub {
namespace Endpoint {
SecurityHubEndpointProvider::SecurityHubEndpointProvider()
    : SecurityHubDefaultEpProviderBase(Aws::SecurityHub::SecurityHubEndpointRules::GetRulesBlob(),
                                       Aws::SecurityHub::SecurityHubEndpointRules::RulesBlobSize) {}

void SecurityHubBuiltInParameters::SetFromClientConfiguration(const SecurityHubClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SecurityHubClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SecurityHubBuiltInParameters::SetFromClientConfiguration(const SecurityHubClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SecurityHubClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SecurityHubBuiltInParameters::SetServiceSpecificParameters(const SecurityHubClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SecurityHub
}  // namespace Aws
