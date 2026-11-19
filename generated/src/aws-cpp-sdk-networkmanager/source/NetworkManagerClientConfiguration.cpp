/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/NetworkManagerClientConfiguration.h>

namespace Aws {
namespace NetworkManager {

void NetworkManagerClientConfiguration::LoadNetworkManagerSpecificConfig(const Aws::String& inputProfileName) {
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

NetworkManagerClientConfiguration::NetworkManagerClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNetworkManagerSpecificConfig(this->profileName);
}

NetworkManagerClientConfiguration::NetworkManagerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNetworkManagerSpecificConfig(Aws::String(inputProfileName));
}

NetworkManagerClientConfiguration::NetworkManagerClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNetworkManagerSpecificConfig(this->profileName);
}

NetworkManagerClientConfiguration::NetworkManagerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNetworkManagerSpecificConfig(this->profileName);
}

}  // namespace NetworkManager
}  // namespace Aws
