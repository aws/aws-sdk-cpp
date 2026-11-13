/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/SFNClientConfiguration.h>

namespace Aws {
namespace SFN {

void SFNClientConfiguration::LoadSFNSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SFNClientConfiguration::SFNClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSFNSpecificConfig(this->profileName);
}

SFNClientConfiguration::SFNClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSFNSpecificConfig(Aws::String(inputProfileName));
}

SFNClientConfiguration::SFNClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSFNSpecificConfig(this->profileName);
}

SFNClientConfiguration::SFNClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadSFNSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SFNClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace SFN
}  // namespace Aws
