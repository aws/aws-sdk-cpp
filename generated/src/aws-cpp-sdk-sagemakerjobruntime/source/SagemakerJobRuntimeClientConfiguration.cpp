/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemakerjobruntime/SagemakerJobRuntimeClientConfiguration.h>

namespace Aws {
namespace SagemakerJobRuntime {

void SagemakerJobRuntimeClientConfiguration::LoadSagemakerJobRuntimeSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

SagemakerJobRuntimeClientConfiguration::SagemakerJobRuntimeClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSagemakerJobRuntimeSpecificConfig(this->profileName);
}

SagemakerJobRuntimeClientConfiguration::SagemakerJobRuntimeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSagemakerJobRuntimeSpecificConfig(Aws::String(inputProfileName));
}

SagemakerJobRuntimeClientConfiguration::SagemakerJobRuntimeClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSagemakerJobRuntimeSpecificConfig(this->profileName);
}

SagemakerJobRuntimeClientConfiguration::SagemakerJobRuntimeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSagemakerJobRuntimeSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const SagemakerJobRuntimeClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace SagemakerJobRuntime
}  // namespace Aws
