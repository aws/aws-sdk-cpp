/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/TaxSettingsClientConfiguration.h>

namespace Aws {
namespace TaxSettings {

void TaxSettingsClientConfiguration::LoadTaxSettingsSpecificConfig(const Aws::String& inputProfileName) {
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

TaxSettingsClientConfiguration::TaxSettingsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadTaxSettingsSpecificConfig(this->profileName);
}

TaxSettingsClientConfiguration::TaxSettingsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadTaxSettingsSpecificConfig(Aws::String(inputProfileName));
}

TaxSettingsClientConfiguration::TaxSettingsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadTaxSettingsSpecificConfig(this->profileName);
}

TaxSettingsClientConfiguration::TaxSettingsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadTaxSettingsSpecificConfig(this->profileName);
}

}  // namespace TaxSettings
}  // namespace Aws
