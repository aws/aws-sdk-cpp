/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeClientConfiguration.h>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {

void SageMakerTrainingSessionRuntimeClientConfiguration::LoadSageMakerTrainingSessionRuntimeSpecificConfig(
    const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SageMakerTrainingSessionRuntimeClientConfiguration::SageMakerTrainingSessionRuntimeClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSageMakerTrainingSessionRuntimeSpecificConfig(this->profileName);
}

SageMakerTrainingSessionRuntimeClientConfiguration::SageMakerTrainingSessionRuntimeClientConfiguration(const char* inputProfileName,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSageMakerTrainingSessionRuntimeSpecificConfig(Aws::String(inputProfileName));
}

SageMakerTrainingSessionRuntimeClientConfiguration::SageMakerTrainingSessionRuntimeClientConfiguration(bool useSmartDefaults,
                                                                                                       const char* defaultMode,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSageMakerTrainingSessionRuntimeSpecificConfig(this->profileName);
}

SageMakerTrainingSessionRuntimeClientConfiguration::SageMakerTrainingSessionRuntimeClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSageMakerTrainingSessionRuntimeSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SageMakerTrainingSessionRuntimeClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
