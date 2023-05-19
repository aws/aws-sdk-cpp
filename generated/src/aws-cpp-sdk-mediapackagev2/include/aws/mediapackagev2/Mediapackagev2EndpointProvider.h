/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediapackagev2/Mediapackagev2EndpointRules.h>


namespace Aws
{
namespace mediapackagev2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Mediapackagev2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Mediapackagev2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Mediapackagev2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the mediapackagev2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Mediapackagev2EndpointProviderBase =
    EndpointProviderBase<Mediapackagev2ClientConfiguration, Mediapackagev2BuiltInParameters, Mediapackagev2ClientContextParameters>;

using Mediapackagev2DefaultEpProviderBase =
    DefaultEndpointProvider<Mediapackagev2ClientConfiguration, Mediapackagev2BuiltInParameters, Mediapackagev2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIAPACKAGEV2_API Mediapackagev2EndpointProvider : public Mediapackagev2DefaultEpProviderBase
{
public:
    using Mediapackagev2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Mediapackagev2EndpointProvider()
      : Mediapackagev2DefaultEpProviderBase(Aws::mediapackagev2::Mediapackagev2EndpointRules::GetRulesBlob(), Aws::mediapackagev2::Mediapackagev2EndpointRules::RulesBlobSize)
    {}

    ~Mediapackagev2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace mediapackagev2
} // namespace Aws
