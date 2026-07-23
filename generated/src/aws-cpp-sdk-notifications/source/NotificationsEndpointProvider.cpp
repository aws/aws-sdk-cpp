/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/NotificationsEndpointProvider.h>
#include <aws/notifications/internal/NotificationsEndpointRules.h>

namespace Aws {
namespace Notifications {
namespace Endpoint {
NotificationsEndpointProvider::NotificationsEndpointProvider()
    : NotificationsDefaultEpProviderBase(Aws::Notifications::NotificationsEndpointRules::GetRulesBlob(),
                                         Aws::Notifications::NotificationsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Notifications
}  // namespace Aws
