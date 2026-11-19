/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/MigrationHubConfigClientConfiguration.h>

namespace Aws {
namespace MigrationHubConfig {

void MigrationHubConfigClientConfiguration::LoadMigrationHubConfigSpecificConfig(const Aws::String& inputProfileName) {
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

MigrationHubConfigClientConfiguration::MigrationHubConfigClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMigrationHubConfigSpecificConfig(this->profileName);
}

MigrationHubConfigClientConfiguration::MigrationHubConfigClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMigrationHubConfigSpecificConfig(Aws::String(inputProfileName));
}

MigrationHubConfigClientConfiguration::MigrationHubConfigClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMigrationHubConfigSpecificConfig(this->profileName);
}

MigrationHubConfigClientConfiguration::MigrationHubConfigClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMigrationHubConfigSpecificConfig(this->profileName);
}

}  // namespace MigrationHubConfig
}  // namespace Aws
