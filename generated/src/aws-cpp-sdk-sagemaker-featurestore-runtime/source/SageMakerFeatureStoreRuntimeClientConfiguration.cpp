/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClientConfiguration.h>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {

void SageMakerFeatureStoreRuntimeClientConfiguration::LoadSageMakerFeatureStoreRuntimeSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
