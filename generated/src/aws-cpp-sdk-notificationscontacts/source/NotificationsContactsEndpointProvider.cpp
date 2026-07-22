/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notificationscontacts/NotificationsContactsEndpointProvider.h>
#include <aws/notificationscontacts/internal/NotificationsContactsEndpointRules.h>

namespace Aws {
namespace NotificationsContacts {
namespace Endpoint {
NotificationsContactsEndpointProvider::NotificationsContactsEndpointProvider()
    : NotificationsContactsDefaultEpProviderBase(Aws::NotificationsContacts::NotificationsContactsEndpointRules::GetRulesBlob(),
                                                 Aws::NotificationsContacts::NotificationsContactsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NotificationsContacts
}  // namespace Aws
