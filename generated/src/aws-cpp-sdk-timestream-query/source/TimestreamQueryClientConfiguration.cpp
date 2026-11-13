/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/TimestreamQueryClientConfiguration.h>

namespace Aws {
namespace TimestreamQuery {

bool IsEndpointDiscoveryEnabled(const Aws::String& endpointOverride, const Aws::String& profileName) {
  bool enabled = true;

  if (!endpointOverride.empty()) {
    enabled = false;
  } else {
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY = "AWS_ENABLE_ENDPOINT_DISCOVERY";
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY = "endpoint_discovery_enabled";
    static const char* AWS_EP_DISCOVERY_ENABLED = "true";
    static const char* AWS_EP_DISCOVERY_DISABLED = "false";
    static const char* DEFAULT_VALUE_FOR_TIMESTREAM_QUERY = AWS_EP_DISCOVERY_ENABLED;

    Aws::String configVal = Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
        AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY, profileName, AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY,
        {AWS_EP_DISCOVERY_ENABLED, AWS_EP_DISCOVERY_DISABLED}, DEFAULT_VALUE_FOR_TIMESTREAM_QUERY);

    if (AWS_EP_DISCOVERY_ENABLED == configVal) {
      enabled = true;
    } else if (AWS_EP_DISCOVERY_DISABLED == configVal) {
      enabled = false;
    }
  }
  return enabled;
}

void TimestreamQueryClientConfiguration::LoadTimestreamQuerySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
  if (!enableEndpointDiscovery) {
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, inputProfileName);
  }
}

TimestreamQueryClientConfiguration::TimestreamQueryClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadTimestreamQuerySpecificConfig(this->profileName);
}

TimestreamQueryClientConfiguration::TimestreamQueryClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadTimestreamQuerySpecificConfig(Aws::String(inputProfileName));
}

TimestreamQueryClientConfiguration::TimestreamQueryClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadTimestreamQuerySpecificConfig(this->profileName);
}

TimestreamQueryClientConfiguration::TimestreamQueryClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadTimestreamQuerySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const TimestreamQueryClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace TimestreamQuery
}  // namespace Aws
