/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/TimestreamWriteClientConfiguration.h>

namespace Aws {
namespace TimestreamWrite {

bool IsEndpointDiscoveryEnabled(const Aws::String& endpointOverride, const Aws::String& profileName) {
  bool enabled = true;

  if (!endpointOverride.empty()) {
    enabled = false;
  } else {
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY = "AWS_ENABLE_ENDPOINT_DISCOVERY";
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY = "endpoint_discovery_enabled";
    static const char* AWS_EP_DISCOVERY_ENABLED = "true";
    static const char* AWS_EP_DISCOVERY_DISABLED = "false";
    static const char* DEFAULT_VALUE_FOR_TIMESTREAM_WRITE = AWS_EP_DISCOVERY_ENABLED;

    Aws::String configVal = Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
        AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY, profileName, AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY,
        {AWS_EP_DISCOVERY_ENABLED, AWS_EP_DISCOVERY_DISABLED}, DEFAULT_VALUE_FOR_TIMESTREAM_WRITE);

    if (AWS_EP_DISCOVERY_ENABLED == configVal) {
      enabled = true;
    } else if (AWS_EP_DISCOVERY_DISABLED == configVal) {
      enabled = false;
    }
  }
  return enabled;
}

void TimestreamWriteClientConfiguration::LoadTimestreamWriteSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  if (!enableEndpointDiscovery) {
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, inputProfileName);
  }
}

TimestreamWriteClientConfiguration::TimestreamWriteClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadTimestreamWriteSpecificConfig(this->profileName);
}

TimestreamWriteClientConfiguration::TimestreamWriteClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadTimestreamWriteSpecificConfig(Aws::String(inputProfileName));
}

TimestreamWriteClientConfiguration::TimestreamWriteClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadTimestreamWriteSpecificConfig(this->profileName);
}

TimestreamWriteClientConfiguration::TimestreamWriteClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadTimestreamWriteSpecificConfig(this->profileName);
}

}  // namespace TimestreamWrite
}  // namespace Aws
