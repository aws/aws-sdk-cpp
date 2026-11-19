/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityagent/SecurityAgentClientConfiguration.h>

namespace Aws {
namespace SecurityAgent {

void SecurityAgentClientConfiguration::LoadSecurityAgentSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SecurityAgentClientConfiguration::SecurityAgentClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSecurityAgentSpecificConfig(this->profileName);
}

SecurityAgentClientConfiguration::SecurityAgentClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSecurityAgentSpecificConfig(Aws::String(inputProfileName));
}

SecurityAgentClientConfiguration::SecurityAgentClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSecurityAgentSpecificConfig(this->profileName);
}

SecurityAgentClientConfiguration::SecurityAgentClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSecurityAgentSpecificConfig(this->profileName);
}

}  // namespace SecurityAgent
}  // namespace Aws
