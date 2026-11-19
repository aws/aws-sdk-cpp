/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClientConfiguration.h>

namespace Aws {
namespace AugmentedAIRuntime {

void AugmentedAIRuntimeClientConfiguration::LoadAugmentedAIRuntimeSpecificConfig(const Aws::String& inputProfileName) {
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

AugmentedAIRuntimeClientConfiguration::AugmentedAIRuntimeClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAugmentedAIRuntimeSpecificConfig(this->profileName);
}

AugmentedAIRuntimeClientConfiguration::AugmentedAIRuntimeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAugmentedAIRuntimeSpecificConfig(Aws::String(inputProfileName));
}

AugmentedAIRuntimeClientConfiguration::AugmentedAIRuntimeClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAugmentedAIRuntimeSpecificConfig(this->profileName);
}

AugmentedAIRuntimeClientConfiguration::AugmentedAIRuntimeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAugmentedAIRuntimeSpecificConfig(this->profileName);
}

}  // namespace AugmentedAIRuntime
}  // namespace Aws
