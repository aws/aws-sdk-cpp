/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/TrustedAdvisorClientConfiguration.h>

namespace Aws {
namespace TrustedAdvisor {

void TrustedAdvisorClientConfiguration::LoadTrustedAdvisorSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

TrustedAdvisorClientConfiguration::TrustedAdvisorClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadTrustedAdvisorSpecificConfig(this->profileName);
}

TrustedAdvisorClientConfiguration::TrustedAdvisorClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadTrustedAdvisorSpecificConfig(Aws::String(inputProfileName));
}

TrustedAdvisorClientConfiguration::TrustedAdvisorClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadTrustedAdvisorSpecificConfig(this->profileName);
}

TrustedAdvisorClientConfiguration::TrustedAdvisorClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadTrustedAdvisorSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const TrustedAdvisorClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace TrustedAdvisor
}  // namespace Aws
