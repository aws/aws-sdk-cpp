/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sso/SSOClient.h>
#include <aws/sso/model/ListAccountRolesPaginationTraits.h>
#include <aws/sso/model/ListAccountsPaginationTraits.h>

namespace Aws {
namespace SSO {

using ListAccountRolesPaginator =
    Aws::Utils::Pagination::Paginator<SSOClient, Model::ListAccountRolesRequest, Pagination::ListAccountRolesPaginationTraits<SSOClient>>;
using ListAccountsPaginator =
    Aws::Utils::Pagination::Paginator<SSOClient, Model::ListAccountsRequest, Pagination::ListAccountsPaginationTraits<SSOClient>>;

}  // namespace SSO
}  // namespace Aws
