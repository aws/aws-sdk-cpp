/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/s3tables/S3TablesEndpointRules.h>


namespace Aws
{
namespace S3Tables
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using S3TablesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using S3TablesClientConfiguration = Aws::Client::GenericClientConfiguration;
using S3TablesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the S3Tables Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3TablesEndpointProviderBase =
    EndpointProviderBase<S3TablesClientConfiguration, S3TablesBuiltInParameters, S3TablesClientContextParameters>;

using S3TablesDefaultEpProviderBase =
    DefaultEndpointProvider<S3TablesClientConfiguration, S3TablesBuiltInParameters, S3TablesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_S3TABLES_API S3TablesEndpointProvider : public S3TablesDefaultEpProviderBase
{
public:
    using S3TablesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    S3TablesEndpointProvider()
      : S3TablesDefaultEpProviderBase(Aws::S3Tables::S3TablesEndpointRules::GetRulesBlob(), Aws::S3Tables::S3TablesEndpointRules::RulesBlobSize)
    {}

    ~S3TablesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace S3Tables
} // namespace Aws
