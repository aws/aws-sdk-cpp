/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/notifications/NotificationsClient.h>
#include <aws/notifications/model/ListChannelsPaginationTraits.h>
#include <aws/notifications/model/ListEventRulesPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationChannelAssociationsPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationChildEventsPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationConfigurationsPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationEventsPaginationTraits.h>
#include <aws/notifications/model/ListMemberAccountsPaginationTraits.h>
#include <aws/notifications/model/ListNotificationConfigurationsPaginationTraits.h>
#include <aws/notifications/model/ListNotificationEventsPaginationTraits.h>
#include <aws/notifications/model/ListNotificationHubsPaginationTraits.h>
#include <aws/notifications/model/ListOrganizationalUnitsPaginationTraits.h>

namespace Aws {
namespace Notifications {

using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<NotificationsClient>>;
using ListEventRulesPaginator = Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListEventRulesRequest,
                                                                  Pagination::ListEventRulesPaginationTraits<NotificationsClient>>;
using ListManagedNotificationChannelAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListManagedNotificationChannelAssociationsRequest,
                                      Pagination::ListManagedNotificationChannelAssociationsPaginationTraits<NotificationsClient>>;
using ListManagedNotificationChildEventsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListManagedNotificationChildEventsRequest,
                                      Pagination::ListManagedNotificationChildEventsPaginationTraits<NotificationsClient>>;
using ListManagedNotificationConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListManagedNotificationConfigurationsRequest,
                                      Pagination::ListManagedNotificationConfigurationsPaginationTraits<NotificationsClient>>;
using ListManagedNotificationEventsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListManagedNotificationEventsRequest,
                                      Pagination::ListManagedNotificationEventsPaginationTraits<NotificationsClient>>;
using ListMemberAccountsPaginator = Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListMemberAccountsRequest,
                                                                      Pagination::ListMemberAccountsPaginationTraits<NotificationsClient>>;
using ListNotificationConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListNotificationConfigurationsRequest,
                                      Pagination::ListNotificationConfigurationsPaginationTraits<NotificationsClient>>;
using ListNotificationEventsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListNotificationEventsRequest,
                                      Pagination::ListNotificationEventsPaginationTraits<NotificationsClient>>;
using ListNotificationHubsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListNotificationHubsRequest,
                                      Pagination::ListNotificationHubsPaginationTraits<NotificationsClient>>;
using ListOrganizationalUnitsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsClient, Model::ListOrganizationalUnitsRequest,
                                      Pagination::ListOrganizationalUnitsPaginationTraits<NotificationsClient>>;

}  // namespace Notifications
}  // namespace Aws
