/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/socialmessaging/SocialMessagingEndpointRules.h>


namespace Aws
{
namespace SocialMessaging
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SocialMessagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SocialMessagingClientConfiguration = Aws::Client::GenericClientConfiguration;
using SocialMessagingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SocialMessaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SocialMessagingEndpointProviderBase =
    EndpointProviderBase<SocialMessagingClientConfiguration, SocialMessagingBuiltInParameters, SocialMessagingClientContextParameters>;

using SocialMessagingDefaultEpProviderBase =
    DefaultEndpointProvider<SocialMessagingClientConfiguration, SocialMessagingBuiltInParameters, SocialMessagingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SOCIALMESSAGING_API SocialMessagingEndpointProvider : public SocialMessagingDefaultEpProviderBase
{
public:
    using SocialMessagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SocialMessagingEndpointProvider()
      : SocialMessagingDefaultEpProviderBase(Aws::SocialMessaging::SocialMessagingEndpointRules::GetRulesBlob(), Aws::SocialMessaging::SocialMessagingEndpointRules::RulesBlobSize)
    {}

    ~SocialMessagingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SocialMessaging
} // namespace Aws
