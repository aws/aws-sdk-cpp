/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/WellArchitectedClientConfiguration.h>

namespace Aws {
namespace WellArchitected {

void WellArchitectedClientConfiguration::LoadWellArchitectedSpecificConfig(const Aws::String& inputProfileName) {
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

WellArchitectedClientConfiguration::WellArchitectedClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadWellArchitectedSpecificConfig(this->profileName);
}

WellArchitectedClientConfiguration::WellArchitectedClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadWellArchitectedSpecificConfig(Aws::String(inputProfileName));
}

WellArchitectedClientConfiguration::WellArchitectedClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadWellArchitectedSpecificConfig(this->profileName);
}

WellArchitectedClientConfiguration::WellArchitectedClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadWellArchitectedSpecificConfig(this->profileName);
}

}  // namespace WellArchitected
}  // namespace Aws
