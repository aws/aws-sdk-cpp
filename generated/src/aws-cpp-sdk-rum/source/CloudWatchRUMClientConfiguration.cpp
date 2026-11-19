/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/CloudWatchRUMClientConfiguration.h>

namespace Aws {
namespace CloudWatchRUM {

void CloudWatchRUMClientConfiguration::LoadCloudWatchRUMSpecificConfig(const Aws::String& inputProfileName) {
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

CloudWatchRUMClientConfiguration::CloudWatchRUMClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudWatchRUMSpecificConfig(this->profileName);
}

CloudWatchRUMClientConfiguration::CloudWatchRUMClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudWatchRUMSpecificConfig(Aws::String(inputProfileName));
}

CloudWatchRUMClientConfiguration::CloudWatchRUMClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudWatchRUMSpecificConfig(this->profileName);
}

CloudWatchRUMClientConfiguration::CloudWatchRUMClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudWatchRUMSpecificConfig(this->profileName);
}

}  // namespace CloudWatchRUM
}  // namespace Aws
