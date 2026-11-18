/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/signin/SigninClient.h>
#include <aws/signin/model/ListResourcePermissionStatementsPaginationTraits.h>
#include <aws/signin/model/ListSessionsPaginationTraits.h>

namespace Aws {
namespace Signin {

using ListResourcePermissionStatementsPaginator =
    Aws::Utils::Pagination::Paginator<SigninClient, Model::ListResourcePermissionStatementsRequest,
                                      Pagination::ListResourcePermissionStatementsPaginationTraits<SigninClient>>;
using ListSessionsPaginator =
    Aws::Utils::Pagination::Paginator<SigninClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<SigninClient>>;

}  // namespace Signin
}  // namespace Aws
