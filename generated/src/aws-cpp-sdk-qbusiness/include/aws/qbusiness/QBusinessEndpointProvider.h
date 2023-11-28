/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/qbusiness/QBusinessEndpointRules.h>


namespace Aws
{
namespace QBusiness
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using QBusinessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using QBusinessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using QBusinessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the QBusiness Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QBusinessEndpointProviderBase =
    EndpointProviderBase<QBusinessClientConfiguration, QBusinessBuiltInParameters, QBusinessClientContextParameters>;

using QBusinessDefaultEpProviderBase =
    DefaultEndpointProvider<QBusinessClientConfiguration, QBusinessBuiltInParameters, QBusinessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_QBUSINESS_API QBusinessEndpointProvider : public QBusinessDefaultEpProviderBase
{
public:
    using QBusinessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    QBusinessEndpointProvider()
      : QBusinessDefaultEpProviderBase(Aws::QBusiness::QBusinessEndpointRules::GetRulesBlob(), Aws::QBusiness::QBusinessEndpointRules::RulesBlobSize)
    {}

    ~QBusinessEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace QBusiness
} // namespace Aws
