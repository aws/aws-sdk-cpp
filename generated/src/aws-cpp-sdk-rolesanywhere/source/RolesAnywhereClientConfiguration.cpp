/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/RolesAnywhereClientConfiguration.h>

namespace Aws {
namespace RolesAnywhere {

void RolesAnywhereClientConfiguration::LoadRolesAnywhereSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const RolesAnywhereClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace RolesAnywhere
}  // namespace Aws
