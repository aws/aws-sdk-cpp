/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/SagemakerEdgeManagerClientConfiguration.h>

namespace Aws {
namespace SagemakerEdgeManager {

void SagemakerEdgeManagerClientConfiguration::LoadSagemakerEdgeManagerSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SagemakerEdgeManagerClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace SagemakerEdgeManager
}  // namespace Aws
