/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/ResilienceHubEndpointProvider.h>
#include <aws/resiliencehub/internal/ResilienceHubEndpointRules.h>

namespace Aws {
#ifndef AWS_RESILIENCEHUB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ResilienceHub::Endpoint::ResilienceHubClientConfiguration,
                                                   ResilienceHub::Endpoint::ResilienceHubBuiltInParameters,
                                                   ResilienceHub::Endpoint::ResilienceHubClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ResilienceHub::Endpoint::ResilienceHubClientConfiguration,
                                                  ResilienceHub::Endpoint::ResilienceHubBuiltInParameters,
                                                  ResilienceHub::Endpoint::ResilienceHubClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ResilienceHub {
namespace Endpoint {
ResilienceHubEndpointProvider::ResilienceHubEndpointProvider()
    : ResilienceHubDefaultEpProviderBase(Aws::ResilienceHub::ResilienceHubEndpointRules::GetRulesBlob(),
                                         Aws::ResilienceHub::ResilienceHubEndpointRules::RulesBlobSize) {}

void ResilienceHubBuiltInParameters::SetFromClientConfiguration(const ResilienceHubClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ResilienceHubClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ResilienceHubBuiltInParameters::SetFromClientConfiguration(const ResilienceHubClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ResilienceHubClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ResilienceHubBuiltInParameters::SetServiceSpecificParameters(const ResilienceHubClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ResilienceHub
}  // namespace Aws
