/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/TimestreamInfluxDBEndpointProvider.h>
#include <aws/timestream-influxdb/internal/TimestreamInfluxDBEndpointRules.h>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Endpoint {
TimestreamInfluxDBEndpointProvider::TimestreamInfluxDBEndpointProvider()
    : TimestreamInfluxDBDefaultEpProviderBase(Aws::TimestreamInfluxDB::TimestreamInfluxDBEndpointRules::GetRulesBlob(),
                                              Aws::TimestreamInfluxDB::TimestreamInfluxDBEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace TimestreamInfluxDB
}  // namespace Aws
