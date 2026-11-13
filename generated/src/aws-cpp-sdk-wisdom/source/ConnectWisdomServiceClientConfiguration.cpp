/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/ConnectWisdomServiceClientConfiguration.h>

namespace Aws {
namespace ConnectWisdomService {

void ConnectWisdomServiceClientConfiguration::LoadConnectWisdomServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ConnectWisdomServiceClientConfiguration::ConnectWisdomServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadConnectWisdomServiceSpecificConfig(this->profileName);
}

ConnectWisdomServiceClientConfiguration::ConnectWisdomServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadConnectWisdomServiceSpecificConfig(Aws::String(inputProfileName));
}

ConnectWisdomServiceClientConfiguration::ConnectWisdomServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadConnectWisdomServiceSpecificConfig(this->profileName);
}

ConnectWisdomServiceClientConfiguration::ConnectWisdomServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadConnectWisdomServiceSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ConnectWisdomServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ConnectWisdomService
}  // namespace Aws
