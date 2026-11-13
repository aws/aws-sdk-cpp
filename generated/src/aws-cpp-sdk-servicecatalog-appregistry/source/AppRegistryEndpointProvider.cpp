/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/AppRegistryEndpointProvider.h>
#include <aws/servicecatalog-appregistry/internal/AppRegistryEndpointRules.h>

namespace Aws {
#ifndef AWS_APPREGISTRY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppRegistry::Endpoint::AppRegistryClientConfiguration,
                                                   AppRegistry::Endpoint::AppRegistryBuiltInParameters,
                                                   AppRegistry::Endpoint::AppRegistryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppRegistry::Endpoint::AppRegistryClientConfiguration,
                                                  AppRegistry::Endpoint::AppRegistryBuiltInParameters,
                                                  AppRegistry::Endpoint::AppRegistryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppRegistry {
namespace Endpoint {
AppRegistryEndpointProvider::AppRegistryEndpointProvider()
    : AppRegistryDefaultEpProviderBase(Aws::AppRegistry::AppRegistryEndpointRules::GetRulesBlob(),
                                       Aws::AppRegistry::AppRegistryEndpointRules::RulesBlobSize) {}

void AppRegistryBuiltInParameters::SetFromClientConfiguration(const AppRegistryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppRegistryClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppRegistryBuiltInParameters::SetFromClientConfiguration(const AppRegistryClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppRegistryClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppRegistryBuiltInParameters::SetServiceSpecificParameters(const AppRegistryClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppRegistry
}  // namespace Aws
