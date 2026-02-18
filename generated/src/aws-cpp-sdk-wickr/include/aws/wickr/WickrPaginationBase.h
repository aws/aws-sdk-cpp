/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/wickr/model/ListBlockedGuestUsersPaginationTraits.h>
#include <aws/wickr/model/ListBotsPaginationTraits.h>
#include <aws/wickr/model/ListDevicesForUserPaginationTraits.h>
#include <aws/wickr/model/ListGuestUsersPaginationTraits.h>
#include <aws/wickr/model/ListNetworksPaginationTraits.h>
#include <aws/wickr/model/ListSecurityGroupUsersPaginationTraits.h>
#include <aws/wickr/model/ListSecurityGroupsPaginationTraits.h>
#include <aws/wickr/model/ListUsersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Wickr {

class WickrClient;

template <typename DerivedClient>
class WickrPaginationBase {
 public:
  /**
   * Create a paginator for ListBlockedGuestUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlockedGuestUsersRequest,
                                    Pagination::ListBlockedGuestUsersPaginationTraits<DerivedClient>>
  ListBlockedGuestUsersPaginator(const Model::ListBlockedGuestUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlockedGuestUsersRequest,
                                             Pagination::ListBlockedGuestUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>
  ListBotsPaginator(const Model::ListBotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDevicesForUser operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesForUserRequest,
                                    Pagination::ListDevicesForUserPaginationTraits<DerivedClient>>
  ListDevicesForUserPaginator(const Model::ListDevicesForUserRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesForUserRequest,
                                             Pagination::ListDevicesForUserPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGuestUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGuestUsersRequest, Pagination::ListGuestUsersPaginationTraits<DerivedClient>>
  ListGuestUsersPaginator(const Model::ListGuestUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGuestUsersRequest,
                                             Pagination::ListGuestUsersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworksRequest, Pagination::ListNetworksPaginationTraits<DerivedClient>>
  ListNetworksPaginator(const Model::ListNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworksRequest,
                                             Pagination::ListNetworksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSecurityGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityGroupsRequest,
                                    Pagination::ListSecurityGroupsPaginationTraits<DerivedClient>>
  ListSecurityGroupsPaginator(const Model::ListSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityGroupsRequest,
                                             Pagination::ListSecurityGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityGroupUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityGroupUsersRequest,
                                    Pagination::ListSecurityGroupUsersPaginationTraits<DerivedClient>>
  ListSecurityGroupUsersPaginator(const Model::ListSecurityGroupUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityGroupUsersRequest,
                                             Pagination::ListSecurityGroupUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Wickr
}  // namespace Aws
