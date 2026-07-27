/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointProvider.h>
#include <aws/migration-hub-refactor-spaces/internal/MigrationHubRefactorSpacesEndpointRules.h>

namespace Aws {
namespace MigrationHubRefactorSpaces {
namespace Endpoint {
MigrationHubRefactorSpacesEndpointProvider::MigrationHubRefactorSpacesEndpointProvider()
    : MigrationHubRefactorSpacesDefaultEpProviderBase(
          Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesEndpointRules::GetRulesBlob(),
          Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
