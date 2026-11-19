/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/ResilienceHubClientConfiguration.h>

namespace Aws {
namespace ResilienceHub {

void ResilienceHubClientConfiguration::LoadResilienceHubSpecificConfig(const Aws::String& inputProfileName) {
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

ResilienceHubClientConfiguration::ResilienceHubClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadResilienceHubSpecificConfig(this->profileName);
}

ResilienceHubClientConfiguration::ResilienceHubClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadResilienceHubSpecificConfig(Aws::String(inputProfileName));
}

ResilienceHubClientConfiguration::ResilienceHubClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadResilienceHubSpecificConfig(this->profileName);
}

ResilienceHubClientConfiguration::ResilienceHubClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadResilienceHubSpecificConfig(this->profileName);
}

}  // namespace ResilienceHub
}  // namespace Aws
