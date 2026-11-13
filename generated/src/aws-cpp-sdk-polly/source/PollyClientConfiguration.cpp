/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/PollyClientConfiguration.h>

namespace Aws {
namespace Polly {

void PollyClientConfiguration::LoadPollySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PollyClientConfiguration::PollyClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPollySpecificConfig(this->profileName);
}

PollyClientConfiguration::PollyClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPollySpecificConfig(Aws::String(inputProfileName));
}

PollyClientConfiguration::PollyClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPollySpecificConfig(this->profileName);
}

PollyClientConfiguration::PollyClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPollySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PollyClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace Polly
}  // namespace Aws
