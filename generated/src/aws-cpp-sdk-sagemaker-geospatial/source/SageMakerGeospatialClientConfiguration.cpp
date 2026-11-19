/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/SageMakerGeospatialClientConfiguration.h>

namespace Aws {
namespace SageMakerGeospatial {

void SageMakerGeospatialClientConfiguration::LoadSageMakerGeospatialSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace SageMakerGeospatial
}  // namespace Aws
