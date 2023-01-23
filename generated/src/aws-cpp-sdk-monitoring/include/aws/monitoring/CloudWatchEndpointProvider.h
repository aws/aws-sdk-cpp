/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/monitoring/CloudWatchEndpointRules.h>


namespace Aws
{
namespace CloudWatch
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudWatchClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudWatchClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudWatchBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudWatch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchEndpointProviderBase =
    EndpointProviderBase<CloudWatchClientConfiguration, CloudWatchBuiltInParameters, CloudWatchClientContextParameters>;

using CloudWatchDefaultEpProviderBase =
    DefaultEndpointProvider<CloudWatchClientConfiguration, CloudWatchBuiltInParameters, CloudWatchClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCH_API CloudWatchEndpointProvider : public CloudWatchDefaultEpProviderBase
{
public:
    using CloudWatchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudWatchEndpointProvider()
      : CloudWatchDefaultEpProviderBase(Aws::CloudWatch::CloudWatchEndpointRules::GetRulesBlob(), Aws::CloudWatch::CloudWatchEndpointRules::RulesBlobSize)
    {}

    ~CloudWatchEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudWatch
} // namespace Aws
