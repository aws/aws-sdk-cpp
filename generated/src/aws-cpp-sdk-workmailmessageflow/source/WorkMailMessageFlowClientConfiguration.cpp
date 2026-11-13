/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/WorkMailMessageFlowClientConfiguration.h>

namespace Aws {
namespace WorkMailMessageFlow {

void WorkMailMessageFlowClientConfiguration::LoadWorkMailMessageFlowSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const WorkMailMessageFlowClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace WorkMailMessageFlow
}  // namespace Aws
