/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointProvider.h>
#include <aws/migrationhuborchestrator/internal/MigrationHubOrchestratorEndpointRules.h>

namespace Aws {
namespace MigrationHubOrchestrator {
namespace Endpoint {
MigrationHubOrchestratorEndpointProvider::MigrationHubOrchestratorEndpointProvider()
    : MigrationHubOrchestratorDefaultEpProviderBase(Aws::MigrationHubOrchestrator::MigrationHubOrchestratorEndpointRules::GetRulesBlob(),
                                                    Aws::MigrationHubOrchestrator::MigrationHubOrchestratorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
