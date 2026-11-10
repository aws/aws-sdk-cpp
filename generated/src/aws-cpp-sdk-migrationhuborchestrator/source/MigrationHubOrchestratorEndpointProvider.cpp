/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointProvider.h>
#include <aws/migrationhuborchestrator/internal/MigrationHubOrchestratorEndpointRules.h>

namespace Aws {
#ifndef AWS_MIGRATIONHUBORCHESTRATOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientConfiguration,
                                                   MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorBuiltInParameters,
                                                   MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientConfiguration,
                                                  MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorBuiltInParameters,
                                                  MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MigrationHubOrchestrator {
namespace Endpoint {
MigrationHubOrchestratorEndpointProvider::MigrationHubOrchestratorEndpointProvider()
    : MigrationHubOrchestratorDefaultEpProviderBase(Aws::MigrationHubOrchestrator::MigrationHubOrchestratorEndpointRules::GetRulesBlob(),
                                                    Aws::MigrationHubOrchestrator::MigrationHubOrchestratorEndpointRules::RulesBlobSize) {}

void MigrationHubOrchestratorBuiltInParameters::SetFromClientConfiguration(const MigrationHubOrchestratorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MigrationHubOrchestratorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MigrationHubOrchestratorBuiltInParameters::SetFromClientConfiguration(const MigrationHubOrchestratorClientConfiguration& config,
                                                                           const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MigrationHubOrchestratorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MigrationHubOrchestratorBuiltInParameters::SetServiceSpecificParameters(const MigrationHubOrchestratorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
