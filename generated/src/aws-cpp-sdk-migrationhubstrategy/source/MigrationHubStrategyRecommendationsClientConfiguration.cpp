/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsClientConfiguration.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {

void MigrationHubStrategyRecommendationsClientConfiguration::LoadMigrationHubStrategyRecommendationsSpecificConfig(
    const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MigrationHubStrategyRecommendationsClientConfiguration::MigrationHubStrategyRecommendationsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMigrationHubStrategyRecommendationsSpecificConfig(this->profileName);
}

MigrationHubStrategyRecommendationsClientConfiguration::MigrationHubStrategyRecommendationsClientConfiguration(const char* inputProfileName,
                                                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMigrationHubStrategyRecommendationsSpecificConfig(Aws::String(inputProfileName));
}

MigrationHubStrategyRecommendationsClientConfiguration::MigrationHubStrategyRecommendationsClientConfiguration(bool useSmartDefaults,
                                                                                                               const char* defaultMode,
                                                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMigrationHubStrategyRecommendationsSpecificConfig(this->profileName);
}

MigrationHubStrategyRecommendationsClientConfiguration::MigrationHubStrategyRecommendationsClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMigrationHubStrategyRecommendationsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MigrationHubStrategyRecommendationsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
