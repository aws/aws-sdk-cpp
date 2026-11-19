/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClientConfiguration.h>

namespace Aws {
namespace MigrationHubRefactorSpaces {

void MigrationHubRefactorSpacesClientConfiguration::LoadMigrationHubRefactorSpacesSpecificConfig(const Aws::String& inputProfileName) {
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

MigrationHubRefactorSpacesClientConfiguration::MigrationHubRefactorSpacesClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMigrationHubRefactorSpacesSpecificConfig(this->profileName);
}

MigrationHubRefactorSpacesClientConfiguration::MigrationHubRefactorSpacesClientConfiguration(const char* inputProfileName,
                                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMigrationHubRefactorSpacesSpecificConfig(Aws::String(inputProfileName));
}

MigrationHubRefactorSpacesClientConfiguration::MigrationHubRefactorSpacesClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMigrationHubRefactorSpacesSpecificConfig(this->profileName);
}

MigrationHubRefactorSpacesClientConfiguration::MigrationHubRefactorSpacesClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMigrationHubRefactorSpacesSpecificConfig(this->profileName);
}

}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
