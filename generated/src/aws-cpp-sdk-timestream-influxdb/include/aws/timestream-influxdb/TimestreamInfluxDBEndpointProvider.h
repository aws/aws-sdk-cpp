/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/timestream-influxdb/TimestreamInfluxDBEndpointRules.h>


namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TimestreamInfluxDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TimestreamInfluxDBClientConfiguration = Aws::Client::GenericClientConfiguration;
using TimestreamInfluxDBBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the TimestreamInfluxDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TimestreamInfluxDBEndpointProviderBase =
    EndpointProviderBase<TimestreamInfluxDBClientConfiguration, TimestreamInfluxDBBuiltInParameters, TimestreamInfluxDBClientContextParameters>;

using TimestreamInfluxDBDefaultEpProviderBase =
    DefaultEndpointProvider<TimestreamInfluxDBClientConfiguration, TimestreamInfluxDBBuiltInParameters, TimestreamInfluxDBClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TIMESTREAMINFLUXDB_API TimestreamInfluxDBEndpointProvider : public TimestreamInfluxDBDefaultEpProviderBase
{
public:
    using TimestreamInfluxDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TimestreamInfluxDBEndpointProvider()
      : TimestreamInfluxDBDefaultEpProviderBase(Aws::TimestreamInfluxDB::TimestreamInfluxDBEndpointRules::GetRulesBlob(), Aws::TimestreamInfluxDB::TimestreamInfluxDBEndpointRules::RulesBlobSize)
    {}

    ~TimestreamInfluxDBEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TimestreamInfluxDB
} // namespace Aws
