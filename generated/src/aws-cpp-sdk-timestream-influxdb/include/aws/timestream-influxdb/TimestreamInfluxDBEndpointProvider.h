/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBClientConfiguration.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Endpoint {
using TimestreamInfluxDBClientConfiguration = Aws::TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TimestreamInfluxDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TIMESTREAMINFLUXDB_API TimestreamInfluxDBBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TimestreamInfluxDBBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TimestreamInfluxDBClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TimestreamInfluxDBClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TimestreamInfluxDBClientConfiguration& config);
};

/**
 * The type for the TimestreamInfluxDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TimestreamInfluxDBEndpointProviderBase =
    EndpointProviderBase<TimestreamInfluxDBClientConfiguration, TimestreamInfluxDBBuiltInParameters,
                         TimestreamInfluxDBClientContextParameters>;

using TimestreamInfluxDBDefaultEpProviderBase =
    BDDEndpointProvider<TimestreamInfluxDBClientConfiguration, TimestreamInfluxDBBuiltInParameters,
                        TimestreamInfluxDBClientContextParameters>;

}  // namespace Endpoint
}  // namespace TimestreamInfluxDB

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TIMESTREAMINFLUXDB_EXTERN template class AWS_TIMESTREAMINFLUXDB_API Aws::Endpoint::EndpointProviderBase<
    TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientConfiguration, TimestreamInfluxDB::Endpoint::TimestreamInfluxDBBuiltInParameters,
    TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientContextParameters>;

AWS_TIMESTREAMINFLUXDB_EXTERN template class AWS_TIMESTREAMINFLUXDB_API Aws::Endpoint::BDDEndpointProvider<
    TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientConfiguration, TimestreamInfluxDB::Endpoint::TimestreamInfluxDBBuiltInParameters,
    TimestreamInfluxDB::Endpoint::TimestreamInfluxDBClientContextParameters>;
}  // namespace Endpoint

namespace TimestreamInfluxDB {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TIMESTREAMINFLUXDB_API TimestreamInfluxDBEndpointProvider : public TimestreamInfluxDBDefaultEpProviderBase {
 public:
  using TimestreamInfluxDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TimestreamInfluxDBEndpointProvider();

  ~TimestreamInfluxDBEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace TimestreamInfluxDB
}  // namespace Aws
