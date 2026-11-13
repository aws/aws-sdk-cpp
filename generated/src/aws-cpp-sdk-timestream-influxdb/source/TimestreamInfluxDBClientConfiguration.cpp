/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/TimestreamInfluxDBClientConfiguration.h>

namespace Aws {
namespace TimestreamInfluxDB {

void TimestreamInfluxDBClientConfiguration::LoadTimestreamInfluxDBSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

TimestreamInfluxDBClientConfiguration::TimestreamInfluxDBClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadTimestreamInfluxDBSpecificConfig(this->profileName);
}

TimestreamInfluxDBClientConfiguration::TimestreamInfluxDBClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadTimestreamInfluxDBSpecificConfig(Aws::String(inputProfileName));
}

TimestreamInfluxDBClientConfiguration::TimestreamInfluxDBClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadTimestreamInfluxDBSpecificConfig(this->profileName);
}

TimestreamInfluxDBClientConfiguration::TimestreamInfluxDBClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadTimestreamInfluxDBSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const TimestreamInfluxDBClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace TimestreamInfluxDB
}  // namespace Aws
