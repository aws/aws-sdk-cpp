/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Notifications {

class NotificationsClient;

template <typename DerivedClient>
class NotificationsPaginationBase {
 public:
  /**
   * Create a paginator for ListChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<DerivedClient>>
  ListChannelsPaginator(const Model::ListChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest,
                                             Pagination::ListChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEventRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventRulesRequest, Pagination::ListEventRulesPaginationTraits<DerivedClient>>
  ListEventRulesPaginator(const Model::ListEventRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventRulesRequest,
                                             Pagination::ListEventRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListManagedNotificationChannelAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationChannelAssociationsRequest,
                                    Pagination::ListManagedNotificationChannelAssociationsPaginationTraits<DerivedClient>>
  ListManagedNotificationChannelAssociationsPaginator(const Model::ListManagedNotificationChannelAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationChannelAssociationsRequest,
                                             Pagination::ListManagedNotificationChannelAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedNotificationChildEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationChildEventsRequest,
                                    Pagination::ListManagedNotificationChildEventsPaginationTraits<DerivedClient>>
  ListManagedNotificationChildEventsPaginator(const Model::ListManagedNotificationChildEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationChildEventsRequest,
                                             Pagination::ListManagedNotificationChildEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedNotificationConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationConfigurationsRequest,
                                    Pagination::ListManagedNotificationConfigurationsPaginationTraits<DerivedClient>>
  ListManagedNotificationConfigurationsPaginator(const Model::ListManagedNotificationConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationConfigurationsRequest,
                                             Pagination::ListManagedNotificationConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedNotificationEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationEventsRequest,
                                    Pagination::ListManagedNotificationEventsPaginationTraits<DerivedClient>>
  ListManagedNotificationEventsPaginator(const Model::ListManagedNotificationEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedNotificationEventsRequest,
                                             Pagination::ListManagedNotificationEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMemberAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemberAccountsRequest,
                                    Pagination::ListMemberAccountsPaginationTraits<DerivedClient>>
  ListMemberAccountsPaginator(const Model::ListMemberAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemberAccountsRequest,
                                             Pagination::ListMemberAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotificationConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationConfigurationsRequest,
                                    Pagination::ListNotificationConfigurationsPaginationTraits<DerivedClient>>
  ListNotificationConfigurationsPaginator(const Model::ListNotificationConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationConfigurationsRequest,
                                             Pagination::ListNotificationConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotificationEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationEventsRequest,
                                    Pagination::ListNotificationEventsPaginationTraits<DerivedClient>>
  ListNotificationEventsPaginator(const Model::ListNotificationEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationEventsRequest,
                                             Pagination::ListNotificationEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotificationHubs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationHubsRequest,
                                    Pagination::ListNotificationHubsPaginationTraits<DerivedClient>>
  ListNotificationHubsPaginator(const Model::ListNotificationHubsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationHubsRequest,
                                             Pagination::ListNotificationHubsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOrganizationalUnits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationalUnitsRequest,
                                    Pagination::ListOrganizationalUnitsPaginationTraits<DerivedClient>>
  ListOrganizationalUnitsPaginator(const Model::ListOrganizationalUnitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationalUnitsRequest,
                                             Pagination::ListOrganizationalUnitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Notifications
}  // namespace Aws
