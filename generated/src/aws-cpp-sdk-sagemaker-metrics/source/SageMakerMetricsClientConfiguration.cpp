/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/SageMakerMetricsClientConfiguration.h>

namespace Aws {
namespace SageMakerMetrics {

void SageMakerMetricsClientConfiguration::LoadSageMakerMetricsSpecificConfig(const Aws::String& inputProfileName) {
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

SageMakerMetricsClientConfiguration::SageMakerMetricsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSageMakerMetricsSpecificConfig(this->profileName);
}

SageMakerMetricsClientConfiguration::SageMakerMetricsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSageMakerMetricsSpecificConfig(Aws::String(inputProfileName));
}

SageMakerMetricsClientConfiguration::SageMakerMetricsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSageMakerMetricsSpecificConfig(this->profileName);
}

SageMakerMetricsClientConfiguration::SageMakerMetricsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSageMakerMetricsSpecificConfig(this->profileName);
}

}  // namespace SageMakerMetrics
}  // namespace Aws
