/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClientConfiguration.h>

namespace Aws {
namespace MigrationHubOrchestrator {

void MigrationHubOrchestratorClientConfiguration::LoadMigrationHubOrchestratorSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
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

}  // namespace MigrationHubOrchestrator
}  // namespace Aws
