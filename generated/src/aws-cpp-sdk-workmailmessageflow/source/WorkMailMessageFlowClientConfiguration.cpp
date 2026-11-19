/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/WorkMailMessageFlowClientConfiguration.h>

namespace Aws {
namespace WorkMailMessageFlow {

void WorkMailMessageFlowClientConfiguration::LoadWorkMailMessageFlowSpecificConfig(const Aws::String& inputProfileName) {
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

WorkMailMessageFlowClientConfiguration::WorkMailMessageFlowClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadWorkMailMessageFlowSpecificConfig(this->profileName);
}

WorkMailMessageFlowClientConfiguration::WorkMailMessageFlowClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadWorkMailMessageFlowSpecificConfig(Aws::String(inputProfileName));
}

WorkMailMessageFlowClientConfiguration::WorkMailMessageFlowClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadWorkMailMessageFlowSpecificConfig(this->profileName);
}

WorkMailMessageFlowClientConfiguration::WorkMailMessageFlowClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadWorkMailMessageFlowSpecificConfig(this->profileName);
}

}  // namespace WorkMailMessageFlow
}  // namespace Aws
