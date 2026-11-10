/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/SnowDeviceManagementClientConfiguration.h>

namespace Aws {
namespace SnowDeviceManagement {

void SnowDeviceManagementClientConfiguration::LoadSnowDeviceManagementSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SnowDeviceManagementClientConfiguration::SnowDeviceManagementClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSnowDeviceManagementSpecificConfig(this->profileName);
}

SnowDeviceManagementClientConfiguration::SnowDeviceManagementClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSnowDeviceManagementSpecificConfig(Aws::String(inputProfileName));
}

SnowDeviceManagementClientConfiguration::SnowDeviceManagementClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSnowDeviceManagementSpecificConfig(this->profileName);
}

SnowDeviceManagementClientConfiguration::SnowDeviceManagementClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSnowDeviceManagementSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SnowDeviceManagementClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace SnowDeviceManagement
}  // namespace Aws
