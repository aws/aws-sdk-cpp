/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/timestream-query/TimestreamQueryEndpointRules.h>


namespace Aws
{
namespace TimestreamQuery
{
namespace Endpoint
{
using TimestreamQueryClientConfiguration = Aws::TimestreamQuery::TimestreamQueryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TimestreamQueryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TIMESTREAMQUERY_API TimestreamQueryBuiltInParameters : public Aws::Endpoint::BuiltInParameters
{
public:
    virtual ~TimestreamQueryBuiltInParameters(){};
    using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
    virtual void SetFromClientConfiguration(const TimestreamQueryClientConfiguration& config);
};

/**
 * The type for the TimestreamQuery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TimestreamQueryEndpointProviderBase =
    EndpointProviderBase<TimestreamQueryClientConfiguration, TimestreamQueryBuiltInParameters, TimestreamQueryClientContextParameters>;

using TimestreamQueryDefaultEpProviderBase =
    DefaultEndpointProvider<TimestreamQueryClientConfiguration, TimestreamQueryBuiltInParameters, TimestreamQueryClientContextParameters>;

} // namespace Endpoint
} // namespace TimestreamQuery

namespace Endpoint
{
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TIMESTREAMQUERY_EXTERN template class AWS_TIMESTREAMQUERY_API
    Aws::Endpoint::EndpointProviderBase<TimestreamQuery::Endpoint::TimestreamQueryClientConfiguration, TimestreamQuery::Endpoint::TimestreamQueryBuiltInParameters, TimestreamQuery::Endpoint::TimestreamQueryClientContextParameters>;

AWS_TIMESTREAMQUERY_EXTERN template class AWS_TIMESTREAMQUERY_API
    Aws::Endpoint::DefaultEndpointProvider<TimestreamQuery::Endpoint::TimestreamQueryClientConfiguration, TimestreamQuery::Endpoint::TimestreamQueryBuiltInParameters, TimestreamQuery::Endpoint::TimestreamQueryClientContextParameters>;
} // namespace Endpoint

namespace TimestreamQuery
{
namespace Endpoint
{
/**
 * Default endpoint provider used for this service
 */
class AWS_TIMESTREAMQUERY_API TimestreamQueryEndpointProvider : public TimestreamQueryDefaultEpProviderBase
{
public:
    using TimestreamQueryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TimestreamQueryEndpointProvider()
      : TimestreamQueryDefaultEpProviderBase(Aws::TimestreamQuery::TimestreamQueryEndpointRules::GetRulesBlob(), Aws::TimestreamQuery::TimestreamQueryEndpointRules::RulesBlobSize)
    {}

    ~TimestreamQueryEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TimestreamQuery
} // namespace Aws
