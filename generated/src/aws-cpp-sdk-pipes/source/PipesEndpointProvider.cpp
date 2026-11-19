/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/PipesEndpointProvider.h>
#include <aws/pipes/internal/PipesEndpointRules.h>

namespace Aws {
#ifndef AWS_PIPES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Pipes::Endpoint::PipesClientConfiguration, Pipes::Endpoint::PipesBuiltInParameters,
                                                   Pipes::Endpoint::PipesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Pipes::Endpoint::PipesClientConfiguration, Pipes::Endpoint::PipesBuiltInParameters,
                                                  Pipes::Endpoint::PipesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Pipes {
namespace Endpoint {
PipesEndpointProvider::PipesEndpointProvider()
    : PipesDefaultEpProviderBase(Aws::Pipes::PipesEndpointRules::GetRulesBlob(), Aws::Pipes::PipesEndpointRules::RulesBlobSize) {}

void PipesBuiltInParameters::SetFromClientConfiguration(const PipesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PipesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PipesBuiltInParameters::SetFromClientConfiguration(const PipesClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PipesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PipesBuiltInParameters::SetServiceSpecificParameters(const PipesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Pipes
}  // namespace Aws
