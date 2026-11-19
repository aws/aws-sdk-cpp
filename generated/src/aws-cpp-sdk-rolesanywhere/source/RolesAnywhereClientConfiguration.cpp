/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/RolesAnywhereClientConfiguration.h>

namespace Aws {
namespace RolesAnywhere {

void RolesAnywhereClientConfiguration::LoadRolesAnywhereSpecificConfig(const Aws::String& inputProfileName) {
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

RolesAnywhereClientConfiguration::RolesAnywhereClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRolesAnywhereSpecificConfig(this->profileName);
}

RolesAnywhereClientConfiguration::RolesAnywhereClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRolesAnywhereSpecificConfig(Aws::String(inputProfileName));
}

RolesAnywhereClientConfiguration::RolesAnywhereClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRolesAnywhereSpecificConfig(this->profileName);
}

RolesAnywhereClientConfiguration::RolesAnywhereClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRolesAnywhereSpecificConfig(this->profileName);
}

}  // namespace RolesAnywhere
}  // namespace Aws
