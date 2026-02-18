/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sso/model/ListAccountRolesPaginationTraits.h>
#include <aws/sso/model/ListAccountsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SSO {

class SSOClient;

template <typename DerivedClient>
class SSOPaginationBase {
 public:
  /**
   * Create a paginator for ListAccountRoles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountRolesRequest,
                                    Pagination::ListAccountRolesPaginationTraits<DerivedClient>>
  ListAccountRolesPaginator(const Model::ListAccountRolesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountRolesRequest,
                                             Pagination::ListAccountRolesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest, Pagination::ListAccountsPaginationTraits<DerivedClient>>
  ListAccountsPaginator(const Model::ListAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest,
                                             Pagination::ListAccountsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace SSO
}  // namespace Aws
