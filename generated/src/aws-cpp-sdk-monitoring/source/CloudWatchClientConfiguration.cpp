/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/CloudWatchClientConfiguration.h>

namespace Aws {
namespace CloudWatch {

void CloudWatchClientConfiguration::LoadCloudWatchSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudWatchSpecificConfig(this->profileName);
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudWatchSpecificConfig(Aws::String(inputProfileName));
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudWatchSpecificConfig(this->profileName);
}

CloudWatchClientConfiguration::CloudWatchClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudWatchSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const CloudWatchClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.requestCompressionConfig = config.requestCompressionConfig;
  return options;
}

}  // namespace CloudWatch
}  // namespace Aws
