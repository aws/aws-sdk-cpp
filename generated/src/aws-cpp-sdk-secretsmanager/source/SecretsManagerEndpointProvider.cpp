/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/SecretsManagerEndpointProvider.h>
#include <aws/secretsmanager/internal/SecretsManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_SECRETSMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SecretsManager::Endpoint::SecretsManagerClientConfiguration,
                                                   SecretsManager::Endpoint::SecretsManagerBuiltInParameters,
                                                   SecretsManager::Endpoint::SecretsManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SecretsManager::Endpoint::SecretsManagerClientConfiguration,
                                                  SecretsManager::Endpoint::SecretsManagerBuiltInParameters,
                                                  SecretsManager::Endpoint::SecretsManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SecretsManager {
namespace Endpoint {
SecretsManagerEndpointProvider::SecretsManagerEndpointProvider()
    : SecretsManagerDefaultEpProviderBase(Aws::SecretsManager::SecretsManagerEndpointRules::GetRulesBlob(),
                                          Aws::SecretsManager::SecretsManagerEndpointRules::RulesBlobSize) {}

void SecretsManagerBuiltInParameters::SetFromClientConfiguration(const SecretsManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SecretsManagerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SecretsManagerBuiltInParameters::SetFromClientConfiguration(const SecretsManagerClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SecretsManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SecretsManagerBuiltInParameters::SetServiceSpecificParameters(const SecretsManagerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SecretsManager
}  // namespace Aws
