/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpointProvider.h>
#include <aws/serverlessrepo/internal/ServerlessApplicationRepositoryEndpointRules.h>

namespace Aws {
#ifndef AWS_SERVERLESSAPPLICATIONREPOSITORY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientConfiguration,
    ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryBuiltInParameters,
    ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientConfiguration,
    ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryBuiltInParameters,
    ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ServerlessApplicationRepository {
namespace Endpoint {
ServerlessApplicationRepositoryEndpointProvider::ServerlessApplicationRepositoryEndpointProvider()
    : ServerlessApplicationRepositoryDefaultEpProviderBase(
          Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryEndpointRules::GetRulesBlob(),
          Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryEndpointRules::RulesBlobSize) {}

void ServerlessApplicationRepositoryBuiltInParameters::SetFromClientConfiguration(
    const ServerlessApplicationRepositoryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ServerlessApplicationRepositoryClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ServerlessApplicationRepositoryBuiltInParameters::SetFromClientConfiguration(
    const ServerlessApplicationRepositoryClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ServerlessApplicationRepositoryClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void ServerlessApplicationRepositoryBuiltInParameters::SetServiceSpecificParameters(
    const ServerlessApplicationRepositoryClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ServerlessApplicationRepository
}  // namespace Aws
