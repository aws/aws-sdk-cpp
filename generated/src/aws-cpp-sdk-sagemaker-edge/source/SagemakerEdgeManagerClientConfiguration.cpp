/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/SagemakerEdgeManagerClientConfiguration.h>

namespace Aws {
namespace SagemakerEdgeManager {

void SagemakerEdgeManagerClientConfiguration::LoadSagemakerEdgeManagerSpecificConfig(const Aws::String& inputProfileName) {
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

SagemakerEdgeManagerClientConfiguration::SagemakerEdgeManagerClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSagemakerEdgeManagerSpecificConfig(this->profileName);
}

SagemakerEdgeManagerClientConfiguration::SagemakerEdgeManagerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSagemakerEdgeManagerSpecificConfig(Aws::String(inputProfileName));
}

SagemakerEdgeManagerClientConfiguration::SagemakerEdgeManagerClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSagemakerEdgeManagerSpecificConfig(this->profileName);
}

SagemakerEdgeManagerClientConfiguration::SagemakerEdgeManagerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSagemakerEdgeManagerSpecificConfig(this->profileName);
}

}  // namespace SagemakerEdgeManager
}  // namespace Aws
