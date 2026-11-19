/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsEndpointProvider.h>
#include <aws/migrationhubstrategy/internal/MigrationHubStrategyRecommendationsEndpointRules.h>

namespace Aws {
#ifndef AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientConfiguration,
    MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsBuiltInParameters,
    MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientConfiguration,
    MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsBuiltInParameters,
    MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MigrationHubStrategyRecommendations {
namespace Endpoint {
MigrationHubStrategyRecommendationsEndpointProvider::MigrationHubStrategyRecommendationsEndpointProvider()
    : MigrationHubStrategyRecommendationsDefaultEpProviderBase(
          Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsEndpointRules::GetRulesBlob(),
          Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsEndpointRules::RulesBlobSize) {}

void MigrationHubStrategyRecommendationsBuiltInParameters::SetFromClientConfiguration(
    const MigrationHubStrategyRecommendationsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MigrationHubStrategyRecommendationsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MigrationHubStrategyRecommendationsBuiltInParameters::SetFromClientConfiguration(
    const MigrationHubStrategyRecommendationsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MigrationHubStrategyRecommendationsClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void MigrationHubStrategyRecommendationsBuiltInParameters::SetServiceSpecificParameters(
    const MigrationHubStrategyRecommendationsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
