/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ClientConfiguration.h>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {

void SageMakerRuntimeHTTP2ClientConfiguration::LoadSageMakerRuntimeHTTP2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SageMakerRuntimeHTTP2ClientConfiguration::SageMakerRuntimeHTTP2ClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSageMakerRuntimeHTTP2SpecificConfig(this->profileName);
}

SageMakerRuntimeHTTP2ClientConfiguration::SageMakerRuntimeHTTP2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSageMakerRuntimeHTTP2SpecificConfig(Aws::String(inputProfileName));
}

SageMakerRuntimeHTTP2ClientConfiguration::SageMakerRuntimeHTTP2ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSageMakerRuntimeHTTP2SpecificConfig(this->profileName);
}

SageMakerRuntimeHTTP2ClientConfiguration::SageMakerRuntimeHTTP2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSageMakerRuntimeHTTP2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SageMakerRuntimeHTTP2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
