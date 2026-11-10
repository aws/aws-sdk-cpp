/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/TimestreamInfluxDBEndpointProvider.h>
#include <aws/timestream-influxdb/internal/TimestreamInfluxDBEndpointRules.h>

namespace Aws {
#ifndef AWS_TIMESTREAMINFLUXDB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientConfiguration,
                                                   TimestreamInfluxDB::Endpoint::TimestreamInfluxDBBuiltInParameters,
                                                   TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientConfiguration,
                                                  TimestreamInfluxDB::Endpoint::TimestreamInfluxDBBuiltInParameters,
                                                  TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientContextParameters>;
}  // namespace Endpoint
#endif

namespace TimestreamInfluxDB {
namespace Endpoint {
TimestreamInfluxDBEndpointProvider::TimestreamInfluxDBEndpointProvider()
    : TimestreamInfluxDBDefaultEpProviderBase(Aws::TimestreamInfluxDB::TimestreamInfluxDBEndpointRules::GetRulesBlob(),
                                              Aws::TimestreamInfluxDB::TimestreamInfluxDBEndpointRules::RulesBlobSize) {}

void TimestreamInfluxDBBuiltInParameters::SetFromClientConfiguration(const TimestreamInfluxDBClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TimestreamInfluxDBClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TimestreamInfluxDBBuiltInParameters::SetFromClientConfiguration(const TimestreamInfluxDBClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TimestreamInfluxDBClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TimestreamInfluxDBBuiltInParameters::SetServiceSpecificParameters(const TimestreamInfluxDBClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace TimestreamInfluxDB
}  // namespace Aws
