/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/signin/model/ListResourcePermissionStatementsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Signin {

template <typename DerivedClient>
class SigninPaginationBase {
 public:
  /**
   * Create a paginator for ListResourcePermissionStatements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePermissionStatementsRequest,
                                    Pagination::ListResourcePermissionStatementsPaginationTraits<DerivedClient>>
  ListResourcePermissionStatementsPaginator(const Model::ListResourcePermissionStatementsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePermissionStatementsRequest,
                                             Pagination::ListResourcePermissionStatementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Signin
}  // namespace Aws
