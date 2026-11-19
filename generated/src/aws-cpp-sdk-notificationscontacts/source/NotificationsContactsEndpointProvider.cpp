/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notificationscontacts/NotificationsContactsEndpointProvider.h>
#include <aws/notificationscontacts/internal/NotificationsContactsEndpointRules.h>

namespace Aws {
#ifndef AWS_NOTIFICATIONSCONTACTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NotificationsContacts::Endpoint::NotificationsContactsClientConfiguration,
                                                   NotificationsContacts::Endpoint::NotificationsContactsBuiltInParameters,
                                                   NotificationsContacts::Endpoint::NotificationsContactsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NotificationsContacts::Endpoint::NotificationsContactsClientConfiguration,
                                                  NotificationsContacts::Endpoint::NotificationsContactsBuiltInParameters,
                                                  NotificationsContacts::Endpoint::NotificationsContactsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NotificationsContacts {
namespace Endpoint {
NotificationsContactsEndpointProvider::NotificationsContactsEndpointProvider()
    : NotificationsContactsDefaultEpProviderBase(Aws::NotificationsContacts::NotificationsContactsEndpointRules::GetRulesBlob(),
                                                 Aws::NotificationsContacts::NotificationsContactsEndpointRules::RulesBlobSize) {}

void NotificationsContactsBuiltInParameters::SetFromClientConfiguration(const NotificationsContactsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NotificationsContactsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NotificationsContactsBuiltInParameters::SetFromClientConfiguration(const NotificationsContactsClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NotificationsContactsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NotificationsContactsBuiltInParameters::SetServiceSpecificParameters(const NotificationsContactsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace NotificationsContacts
}  // namespace Aws
