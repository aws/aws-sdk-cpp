/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/notificationscontacts/model/ListEmailContactsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace NotificationsContacts {

template <typename DerivedClient>
class NotificationsContactsPaginationBase {
 public:
  /**
   * Create a paginator for ListEmailContacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailContactsRequest,
                                    Pagination::ListEmailContactsPaginationTraits<DerivedClient>>
  ListEmailContactsPaginator(const Model::ListEmailContactsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailContactsRequest,
                                             Pagination::ListEmailContactsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace NotificationsContacts
}  // namespace Aws
