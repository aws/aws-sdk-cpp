/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClientConfiguration.h>

namespace Aws {
namespace MigrationHubOrchestrator {

void MigrationHubOrchestratorClientConfiguration::LoadMigrationHubOrchestratorSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MigrationHubOrchestratorClientConfiguration::MigrationHubOrchestratorClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMigrationHubOrchestratorSpecificConfig(this->profileName);
}

MigrationHubOrchestratorClientConfiguration::MigrationHubOrchestratorClientConfiguration(const char* inputProfileName,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMigrationHubOrchestratorSpecificConfig(Aws::String(inputProfileName));
}

MigrationHubOrchestratorClientConfiguration::MigrationHubOrchestratorClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMigrationHubOrchestratorSpecificConfig(this->profileName);
}

MigrationHubOrchestratorClientConfiguration::MigrationHubOrchestratorClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMigrationHubOrchestratorSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const MigrationHubOrchestratorClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace MigrationHubOrchestrator
}  // namespace Aws
