/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/wickr/WickrClient.h>
#include <aws/wickr/model/ListBlockedGuestUsersPaginationTraits.h>
#include <aws/wickr/model/ListBotsPaginationTraits.h>
#include <aws/wickr/model/ListDevicesForUserPaginationTraits.h>
#include <aws/wickr/model/ListGuestUsersPaginationTraits.h>
#include <aws/wickr/model/ListNetworksPaginationTraits.h>
#include <aws/wickr/model/ListSecurityGroupUsersPaginationTraits.h>
#include <aws/wickr/model/ListSecurityGroupsPaginationTraits.h>
#include <aws/wickr/model/ListUsersPaginationTraits.h>

namespace Aws {
namespace Wickr {

using ListBlockedGuestUsersPaginator = Aws::Utils::Pagination::Paginator<WickrClient, Model::ListBlockedGuestUsersRequest,
                                                                         Pagination::ListBlockedGuestUsersPaginationTraits<WickrClient>>;
using ListBotsPaginator =
    Aws::Utils::Pagination::Paginator<WickrClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<WickrClient>>;
using ListDevicesForUserPaginator = Aws::Utils::Pagination::Paginator<WickrClient, Model::ListDevicesForUserRequest,
                                                                      Pagination::ListDevicesForUserPaginationTraits<WickrClient>>;
using ListGuestUsersPaginator =
    Aws::Utils::Pagination::Paginator<WickrClient, Model::ListGuestUsersRequest, Pagination::ListGuestUsersPaginationTraits<WickrClient>>;
using ListNetworksPaginator =
    Aws::Utils::Pagination::Paginator<WickrClient, Model::ListNetworksRequest, Pagination::ListNetworksPaginationTraits<WickrClient>>;
using ListSecurityGroupsPaginator = Aws::Utils::Pagination::Paginator<WickrClient, Model::ListSecurityGroupsRequest,
                                                                      Pagination::ListSecurityGroupsPaginationTraits<WickrClient>>;
using ListSecurityGroupUsersPaginator = Aws::Utils::Pagination::Paginator<WickrClient, Model::ListSecurityGroupUsersRequest,
                                                                          Pagination::ListSecurityGroupUsersPaginationTraits<WickrClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<WickrClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<WickrClient>>;

}  // namespace Wickr
}  // namespace Aws
