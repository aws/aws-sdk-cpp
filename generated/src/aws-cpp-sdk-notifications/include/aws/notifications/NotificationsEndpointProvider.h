/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/notifications/NotificationsEndpointRules.h>


namespace Aws
{
namespace Notifications
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NotificationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NotificationsClientConfiguration = Aws::Client::GenericClientConfiguration;
using NotificationsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Notifications Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NotificationsEndpointProviderBase =
    EndpointProviderBase<NotificationsClientConfiguration, NotificationsBuiltInParameters, NotificationsClientContextParameters>;

using NotificationsDefaultEpProviderBase =
    DefaultEndpointProvider<NotificationsClientConfiguration, NotificationsBuiltInParameters, NotificationsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NOTIFICATIONS_API NotificationsEndpointProvider : public NotificationsDefaultEpProviderBase
{
public:
    using NotificationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NotificationsEndpointProvider()
      : NotificationsDefaultEpProviderBase(Aws::Notifications::NotificationsEndpointRules::GetRulesBlob(), Aws::Notifications::NotificationsEndpointRules::RulesBlobSize)
    {}

    ~NotificationsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Notifications
} // namespace Aws
