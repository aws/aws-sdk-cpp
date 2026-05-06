/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sso/model/ListAccountRolesPaginationTraits.h>
#include <aws/sso/model/ListAccountsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SSO {

template <typename DerivedClient>
class SSOPaginationBase {
 public:
  /**
   * Create a paginator for ListAccountRoles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountRolesRequest,
                                    Pagination::ListAccountRolesPaginationTraits<DerivedClient>>
  ListAccountRolesPaginator(const Model::ListAccountRolesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountRolesRequest,
                                             Pagination::ListAccountRolesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest, Pagination::ListAccountsPaginationTraits<DerivedClient>>
  ListAccountsPaginator(const Model::ListAccountsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest,
                                             Pagination::ListAccountsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace SSO
}  // namespace Aws
