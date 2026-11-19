/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/TrustedAdvisorClientConfiguration.h>

namespace Aws {
namespace TrustedAdvisor {

void TrustedAdvisorClientConfiguration::LoadTrustedAdvisorSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace TrustedAdvisor
}  // namespace Aws
