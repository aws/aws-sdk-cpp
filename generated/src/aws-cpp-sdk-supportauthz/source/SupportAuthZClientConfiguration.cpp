/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supportauthz/SupportAuthZClientConfiguration.h>

namespace Aws {
namespace SupportAuthZ {

void SupportAuthZClientConfiguration::LoadSupportAuthZSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SupportAuthZClientConfiguration::SupportAuthZClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSupportAuthZSpecificConfig(this->profileName);
}

SupportAuthZClientConfiguration::SupportAuthZClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSupportAuthZSpecificConfig(Aws::String(inputProfileName));
}

SupportAuthZClientConfiguration::SupportAuthZClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSupportAuthZSpecificConfig(this->profileName);
}

SupportAuthZClientConfiguration::SupportAuthZClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSupportAuthZSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SupportAuthZClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace SupportAuthZ
}  // namespace Aws
