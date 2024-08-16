/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/timestream-write/TimestreamWriteEndpointRules.h>


namespace Aws
{
namespace TimestreamWrite
{
namespace Endpoint
{
using TimestreamWriteClientConfiguration = Aws::TimestreamWrite::TimestreamWriteClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TimestreamWriteClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TIMESTREAMWRITE_API TimestreamWriteBuiltInParameters : public Aws::Endpoint::BuiltInParameters
{
public:
    virtual ~TimestreamWriteBuiltInParameters(){};
    using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
    virtual void SetFromClientConfiguration(const TimestreamWriteClientConfiguration& config);
};

/**
 * The type for the TimestreamWrite Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TimestreamWriteEndpointProviderBase =
    EndpointProviderBase<TimestreamWriteClientConfiguration, TimestreamWriteBuiltInParameters, TimestreamWriteClientContextParameters>;

using TimestreamWriteDefaultEpProviderBase =
    DefaultEndpointProvider<TimestreamWriteClientConfiguration, TimestreamWriteBuiltInParameters, TimestreamWriteClientContextParameters>;

} // namespace Endpoint
} // namespace TimestreamWrite

namespace Endpoint
{
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TIMESTREAMWRITE_EXTERN template class AWS_TIMESTREAMWRITE_API
    Aws::Endpoint::EndpointProviderBase<TimestreamWrite::Endpoint::TimestreamWriteClientConfiguration, TimestreamWrite::Endpoint::TimestreamWriteBuiltInParameters, TimestreamWrite::Endpoint::TimestreamWriteClientContextParameters>;

AWS_TIMESTREAMWRITE_EXTERN template class AWS_TIMESTREAMWRITE_API
    Aws::Endpoint::DefaultEndpointProvider<TimestreamWrite::Endpoint::TimestreamWriteClientConfiguration, TimestreamWrite::Endpoint::TimestreamWriteBuiltInParameters, TimestreamWrite::Endpoint::TimestreamWriteClientContextParameters>;
} // namespace Endpoint

namespace TimestreamWrite
{
namespace Endpoint
{
/**
 * Default endpoint provider used for this service
 */
class AWS_TIMESTREAMWRITE_API TimestreamWriteEndpointProvider : public TimestreamWriteDefaultEpProviderBase
{
public:
    using TimestreamWriteResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TimestreamWriteEndpointProvider()
      : TimestreamWriteDefaultEpProviderBase(Aws::TimestreamWrite::TimestreamWriteEndpointRules::GetRulesBlob(), Aws::TimestreamWrite::TimestreamWriteEndpointRules::RulesBlobSize)
    {}

    ~TimestreamWriteEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TimestreamWrite
} // namespace Aws
