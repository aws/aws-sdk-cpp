/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/TranscribeStreamingServiceClientConfiguration.h>

namespace Aws {
namespace TranscribeStreamingService {

void TranscribeStreamingServiceClientConfiguration::LoadTranscribeStreamingServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

TranscribeStreamingServiceClientConfiguration::TranscribeStreamingServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadTranscribeStreamingServiceSpecificConfig(this->profileName);
}

TranscribeStreamingServiceClientConfiguration::TranscribeStreamingServiceClientConfiguration(const char* inputProfileName,
                                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadTranscribeStreamingServiceSpecificConfig(Aws::String(inputProfileName));
}

TranscribeStreamingServiceClientConfiguration::TranscribeStreamingServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadTranscribeStreamingServiceSpecificConfig(this->profileName);
}

TranscribeStreamingServiceClientConfiguration::TranscribeStreamingServiceClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadTranscribeStreamingServiceSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const TranscribeStreamingServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace TranscribeStreamingService
}  // namespace Aws
