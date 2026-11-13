/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/SSMGuiConnectClientConfiguration.h>

namespace Aws {
namespace SSMGuiConnect {

void SSMGuiConnectClientConfiguration::LoadSSMGuiConnectSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SSMGuiConnectClientConfiguration::SSMGuiConnectClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSSMGuiConnectSpecificConfig(this->profileName);
}

SSMGuiConnectClientConfiguration::SSMGuiConnectClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSSMGuiConnectSpecificConfig(Aws::String(inputProfileName));
}

SSMGuiConnectClientConfiguration::SSMGuiConnectClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSSMGuiConnectSpecificConfig(this->profileName);
}

SSMGuiConnectClientConfiguration::SSMGuiConnectClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSSMGuiConnectSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SSMGuiConnectClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace SSMGuiConnect
}  // namespace Aws
