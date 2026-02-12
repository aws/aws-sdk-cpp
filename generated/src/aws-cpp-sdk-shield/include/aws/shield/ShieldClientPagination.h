/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/shield/ShieldClient.h>
#include <aws/shield/model/ListAttacksPaginationTraits.h>
#include <aws/shield/model/ListProtectionGroupsPaginationTraits.h>
#include <aws/shield/model/ListProtectionsPaginationTraits.h>
#include <aws/shield/model/ListResourcesInProtectionGroupPaginationTraits.h>

namespace Aws {
namespace Shield {

using ListAttacksPaginator =
    Aws::Utils::Pagination::Paginator<ShieldClient, Model::ListAttacksRequest, Pagination::ListAttacksPaginationTraits<ShieldClient>>;
using ListProtectionGroupsPaginator = Aws::Utils::Pagination::Paginator<ShieldClient, Model::ListProtectionGroupsRequest,
                                                                        Pagination::ListProtectionGroupsPaginationTraits<ShieldClient>>;
using ListProtectionsPaginator = Aws::Utils::Pagination::Paginator<ShieldClient, Model::ListProtectionsRequest,
                                                                   Pagination::ListProtectionsPaginationTraits<ShieldClient>>;
using ListResourcesInProtectionGroupPaginator =
    Aws::Utils::Pagination::Paginator<ShieldClient, Model::ListResourcesInProtectionGroupRequest,
                                      Pagination::ListResourcesInProtectionGroupPaginationTraits<ShieldClient>>;

}  // namespace Shield
}  // namespace Aws
