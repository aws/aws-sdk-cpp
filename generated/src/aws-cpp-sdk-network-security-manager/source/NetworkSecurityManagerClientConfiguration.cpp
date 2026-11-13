/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-security-manager/NetworkSecurityManagerClientConfiguration.h>

namespace Aws {
namespace NetworkSecurityManager {

void NetworkSecurityManagerClientConfiguration::LoadNetworkSecurityManagerSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

NetworkSecurityManagerClientConfiguration::NetworkSecurityManagerClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNetworkSecurityManagerSpecificConfig(this->profileName);
}

NetworkSecurityManagerClientConfiguration::NetworkSecurityManagerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNetworkSecurityManagerSpecificConfig(Aws::String(inputProfileName));
}

NetworkSecurityManagerClientConfiguration::NetworkSecurityManagerClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNetworkSecurityManagerSpecificConfig(this->profileName);
}

NetworkSecurityManagerClientConfiguration::NetworkSecurityManagerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNetworkSecurityManagerSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const NetworkSecurityManagerClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace NetworkSecurityManager
}  // namespace Aws
