/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/s3vectors/S3VectorsEndpointRules.h>


namespace Aws
{
namespace S3Vectors
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using S3VectorsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using S3VectorsClientConfiguration = Aws::Client::GenericClientConfiguration;
using S3VectorsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the S3Vectors Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3VectorsEndpointProviderBase =
    EndpointProviderBase<S3VectorsClientConfiguration, S3VectorsBuiltInParameters, S3VectorsClientContextParameters>;

using S3VectorsDefaultEpProviderBase =
    DefaultEndpointProvider<S3VectorsClientConfiguration, S3VectorsBuiltInParameters, S3VectorsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_S3VECTORS_API S3VectorsEndpointProvider : public S3VectorsDefaultEpProviderBase
{
public:
    using S3VectorsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    S3VectorsEndpointProvider()
      : S3VectorsDefaultEpProviderBase(Aws::S3Vectors::S3VectorsEndpointRules::GetRulesBlob(), Aws::S3Vectors::S3VectorsEndpointRules::RulesBlobSize)
    {}

    ~S3VectorsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace S3Vectors
} // namespace Aws
