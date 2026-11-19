/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/PersonalizeClientConfiguration.h>

namespace Aws {
namespace Personalize {

void PersonalizeClientConfiguration::LoadPersonalizeSpecificConfig(const Aws::String& inputProfileName) {
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

PersonalizeClientConfiguration::PersonalizeClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPersonalizeSpecificConfig(this->profileName);
}

PersonalizeClientConfiguration::PersonalizeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPersonalizeSpecificConfig(Aws::String(inputProfileName));
}

PersonalizeClientConfiguration::PersonalizeClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPersonalizeSpecificConfig(this->profileName);
}

PersonalizeClientConfiguration::PersonalizeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPersonalizeSpecificConfig(this->profileName);
}

}  // namespace Personalize
}  // namespace Aws
