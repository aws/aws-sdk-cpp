/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/HttpClient.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeClientConfiguration.h>
#include <smithy/client/features/ChunkingInterceptor.h>
#include <smithy/client/features/ExpectHeaderInterceptor.h>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {

namespace {
// Default aws-chunked buffer size used to content encode streaming request bodies.
const size_t DEFAULT_AWS_CHUNKED_BUFFER_SIZE = 64UL * 1024;
}  // namespace

void SageMakerTrainingSessionRuntimeClientConfiguration::LoadSageMakerTrainingSessionRuntimeSpecificConfig(
    const Aws::String& inputProfileName) {
  awsChunkedBufferSize = DEFAULT_AWS_CHUNKED_BUFFER_SIZE;
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
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

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> SageMakerTrainingSessionRuntimeClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "SageMakerTrainingSessionRuntimeClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  interceptors.push_back(Aws::MakeShared<smithy::client::features::ChunkingInterceptor>(
      TAG, request.httpClient->IsDefaultAwsHttpClient() ? Aws::Client::HttpClientChunkedMode::DEFAULT : httpClientChunkedMode,
      awsChunkedBufferSize));
  if (!disableExpectHeader) {
    interceptors.push_back(Aws::MakeShared<smithy::client::features::ExpectHeaderInterceptor>(TAG));
  }
  return interceptors;
}

}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
