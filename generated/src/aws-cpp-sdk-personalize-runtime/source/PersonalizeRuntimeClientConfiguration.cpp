/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/PersonalizeRuntimeClientConfiguration.h>

namespace Aws {
namespace PersonalizeRuntime {

void PersonalizeRuntimeClientConfiguration::LoadPersonalizeRuntimeSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PersonalizeRuntimeClientConfiguration::PersonalizeRuntimeClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPersonalizeRuntimeSpecificConfig(this->profileName);
}

PersonalizeRuntimeClientConfiguration::PersonalizeRuntimeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPersonalizeRuntimeSpecificConfig(Aws::String(inputProfileName));
}

PersonalizeRuntimeClientConfiguration::PersonalizeRuntimeClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPersonalizeRuntimeSpecificConfig(this->profileName);
}

PersonalizeRuntimeClientConfiguration::PersonalizeRuntimeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPersonalizeRuntimeSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PersonalizeRuntimeClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PersonalizeRuntime
}  // namespace Aws
