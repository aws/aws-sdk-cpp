/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsEndpointProvider.h>
#include <aws/migrationhubstrategy/internal/MigrationHubStrategyRecommendationsEndpointRules.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {
namespace Endpoint {
MigrationHubStrategyRecommendationsEndpointProvider::MigrationHubStrategyRecommendationsEndpointProvider()
    : MigrationHubStrategyRecommendationsDefaultEpProviderBase(
          Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsEndpointRules::GetRulesBlob(),
          Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
