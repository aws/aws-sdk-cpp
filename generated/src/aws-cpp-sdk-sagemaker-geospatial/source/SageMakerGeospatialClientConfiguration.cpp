/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/SageMakerGeospatialClientConfiguration.h>

namespace Aws {
namespace SageMakerGeospatial {

void SageMakerGeospatialClientConfiguration::LoadSageMakerGeospatialSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SageMakerGeospatialClientConfiguration::SageMakerGeospatialClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSageMakerGeospatialSpecificConfig(this->profileName);
}

SageMakerGeospatialClientConfiguration::SageMakerGeospatialClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSageMakerGeospatialSpecificConfig(Aws::String(inputProfileName));
}

SageMakerGeospatialClientConfiguration::SageMakerGeospatialClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSageMakerGeospatialSpecificConfig(this->profileName);
}

SageMakerGeospatialClientConfiguration::SageMakerGeospatialClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSageMakerGeospatialSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SageMakerGeospatialClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace SageMakerGeospatial
}  // namespace Aws
