/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointProvider.h>
#include <aws/migration-hub-refactor-spaces/internal/MigrationHubRefactorSpacesEndpointRules.h>

namespace Aws {
#ifndef AWS_MIGRATIONHUBREFACTORSPACES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientConfiguration,
                                                   MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesBuiltInParameters,
                                                   MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientConfiguration,
                                                  MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesBuiltInParameters,
                                                  MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MigrationHubRefactorSpaces {
namespace Endpoint {
MigrationHubRefactorSpacesEndpointProvider::MigrationHubRefactorSpacesEndpointProvider()
    : MigrationHubRefactorSpacesDefaultEpProviderBase(
          Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesEndpointRules::GetRulesBlob(),
          Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesEndpointRules::RulesBlobSize) {}

void MigrationHubRefactorSpacesBuiltInParameters::SetFromClientConfiguration(const MigrationHubRefactorSpacesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MigrationHubRefactorSpacesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MigrationHubRefactorSpacesBuiltInParameters::SetFromClientConfiguration(const MigrationHubRefactorSpacesClientConfiguration& config,
                                                                             const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MigrationHubRefactorSpacesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MigrationHubRefactorSpacesBuiltInParameters::SetServiceSpecificParameters(
    const MigrationHubRefactorSpacesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
