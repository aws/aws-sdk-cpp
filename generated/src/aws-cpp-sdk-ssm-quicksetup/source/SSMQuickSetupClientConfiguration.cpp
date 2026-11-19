/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/SSMQuickSetupClientConfiguration.h>

namespace Aws {
namespace SSMQuickSetup {

void SSMQuickSetupClientConfiguration::LoadSSMQuickSetupSpecificConfig(const Aws::String& inputProfileName) {
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

SSMQuickSetupClientConfiguration::SSMQuickSetupClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSSMQuickSetupSpecificConfig(this->profileName);
}

SSMQuickSetupClientConfiguration::SSMQuickSetupClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSSMQuickSetupSpecificConfig(Aws::String(inputProfileName));
}

SSMQuickSetupClientConfiguration::SSMQuickSetupClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSSMQuickSetupSpecificConfig(this->profileName);
}

SSMQuickSetupClientConfiguration::SSMQuickSetupClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSSMQuickSetupSpecificConfig(this->profileName);
}

}  // namespace SSMQuickSetup
}  // namespace Aws
