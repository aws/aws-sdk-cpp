/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClientConfiguration.h>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {

void SageMakerFeatureStoreRuntimeClientConfiguration::LoadSageMakerFeatureStoreRuntimeSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SageMakerFeatureStoreRuntimeClientConfiguration::SageMakerFeatureStoreRuntimeClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSageMakerFeatureStoreRuntimeSpecificConfig(this->profileName);
}

SageMakerFeatureStoreRuntimeClientConfiguration::SageMakerFeatureStoreRuntimeClientConfiguration(const char* inputProfileName,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSageMakerFeatureStoreRuntimeSpecificConfig(Aws::String(inputProfileName));
}

SageMakerFeatureStoreRuntimeClientConfiguration::SageMakerFeatureStoreRuntimeClientConfiguration(bool useSmartDefaults,
                                                                                                 const char* defaultMode,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSageMakerFeatureStoreRuntimeSpecificConfig(this->profileName);
}

SageMakerFeatureStoreRuntimeClientConfiguration::SageMakerFeatureStoreRuntimeClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSageMakerFeatureStoreRuntimeSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SageMakerFeatureStoreRuntimeClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
