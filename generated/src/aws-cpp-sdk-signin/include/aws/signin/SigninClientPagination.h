/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/signin/SigninClient.h>
#include <aws/signin/model/ListResourcePermissionStatementsPaginationTraits.h>

namespace Aws {
namespace Signin {

using ListResourcePermissionStatementsPaginator =
    Aws::Utils::Pagination::Paginator<SigninClient, Model::ListResourcePermissionStatementsRequest,
                                      Pagination::ListResourcePermissionStatementsPaginationTraits<SigninClient>>;

}  // namespace Signin
}  // namespace Aws
