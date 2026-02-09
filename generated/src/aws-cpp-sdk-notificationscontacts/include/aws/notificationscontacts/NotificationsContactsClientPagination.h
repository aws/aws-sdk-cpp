/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/notificationscontacts/NotificationsContactsClient.h>
#include <aws/notificationscontacts/model/ListEmailContactsPaginationTraits.h>

namespace Aws {
namespace NotificationsContacts {

using ListEmailContactsPaginator =
    Aws::Utils::Pagination::Paginator<NotificationsContactsClient, Model::ListEmailContactsRequest,
                                      Pagination::ListEmailContactsPaginationTraits<NotificationsContactsClient>>;

}  // namespace NotificationsContacts
}  // namespace Aws
