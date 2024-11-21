/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/notificationscontacts/NotificationsContactsEndpointRules.h>


namespace Aws
{
namespace NotificationsContacts
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NotificationsContactsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NotificationsContactsClientConfiguration = Aws::Client::GenericClientConfiguration;
using NotificationsContactsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the NotificationsContacts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NotificationsContactsEndpointProviderBase =
    EndpointProviderBase<NotificationsContactsClientConfiguration, NotificationsContactsBuiltInParameters, NotificationsContactsClientContextParameters>;

using NotificationsContactsDefaultEpProviderBase =
    DefaultEndpointProvider<NotificationsContactsClientConfiguration, NotificationsContactsBuiltInParameters, NotificationsContactsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NOTIFICATIONSCONTACTS_API NotificationsContactsEndpointProvider : public NotificationsContactsDefaultEpProviderBase
{
public:
    using NotificationsContactsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NotificationsContactsEndpointProvider()
      : NotificationsContactsDefaultEpProviderBase(Aws::NotificationsContacts::NotificationsContactsEndpointRules::GetRulesBlob(), Aws::NotificationsContacts::NotificationsContactsEndpointRules::RulesBlobSize)
    {}

    ~NotificationsContactsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace NotificationsContacts
} // namespace Aws
