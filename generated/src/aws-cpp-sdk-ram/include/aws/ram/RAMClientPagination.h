/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ram/RAMClient.h>
#include <aws/ram/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/ram/model/GetResourceShareAssociationsPaginationTraits.h>
#include <aws/ram/model/GetResourceShareInvitationsPaginationTraits.h>
#include <aws/ram/model/GetResourceSharesPaginationTraits.h>
#include <aws/ram/model/ListPendingInvitationResourcesPaginationTraits.h>
#include <aws/ram/model/ListPermissionAssociationsPaginationTraits.h>
#include <aws/ram/model/ListPermissionVersionsPaginationTraits.h>
#include <aws/ram/model/ListPermissionsPaginationTraits.h>
#include <aws/ram/model/ListPrincipalsPaginationTraits.h>
#include <aws/ram/model/ListReplacePermissionAssociationsWorkPaginationTraits.h>
#include <aws/ram/model/ListResourceSharePermissionsPaginationTraits.h>
#include <aws/ram/model/ListResourceTypesPaginationTraits.h>
#include <aws/ram/model/ListResourcesPaginationTraits.h>
#include <aws/ram/model/ListSourceAssociationsPaginationTraits.h>

namespace Aws {
namespace RAM {

using GetResourcePoliciesPaginator = Aws::Utils::Pagination::Paginator<RAMClient, Model::GetResourcePoliciesRequest,
                                                                       Pagination::GetResourcePoliciesPaginationTraits<RAMClient>>;
using GetResourceShareAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::GetResourceShareAssociationsRequest,
                                      Pagination::GetResourceShareAssociationsPaginationTraits<RAMClient>>;
using GetResourceShareInvitationsPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::GetResourceShareInvitationsRequest,
                                      Pagination::GetResourceShareInvitationsPaginationTraits<RAMClient>>;
using GetResourceSharesPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::GetResourceSharesRequest, Pagination::GetResourceSharesPaginationTraits<RAMClient>>;
using ListPendingInvitationResourcesPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListPendingInvitationResourcesRequest,
                                      Pagination::ListPendingInvitationResourcesPaginationTraits<RAMClient>>;
using ListPermissionAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListPermissionAssociationsRequest,
                                      Pagination::ListPermissionAssociationsPaginationTraits<RAMClient>>;
using ListPermissionsPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListPermissionsRequest, Pagination::ListPermissionsPaginationTraits<RAMClient>>;
using ListPermissionVersionsPaginator = Aws::Utils::Pagination::Paginator<RAMClient, Model::ListPermissionVersionsRequest,
                                                                          Pagination::ListPermissionVersionsPaginationTraits<RAMClient>>;
using ListPrincipalsPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListPrincipalsRequest, Pagination::ListPrincipalsPaginationTraits<RAMClient>>;
using ListReplacePermissionAssociationsWorkPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListReplacePermissionAssociationsWorkRequest,
                                      Pagination::ListReplacePermissionAssociationsWorkPaginationTraits<RAMClient>>;
using ListResourcesPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListResourcesRequest, Pagination::ListResourcesPaginationTraits<RAMClient>>;
using ListResourceSharePermissionsPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListResourceSharePermissionsRequest,
                                      Pagination::ListResourceSharePermissionsPaginationTraits<RAMClient>>;
using ListResourceTypesPaginator =
    Aws::Utils::Pagination::Paginator<RAMClient, Model::ListResourceTypesRequest, Pagination::ListResourceTypesPaginationTraits<RAMClient>>;
using ListSourceAssociationsPaginator = Aws::Utils::Pagination::Paginator<RAMClient, Model::ListSourceAssociationsRequest,
                                                                          Pagination::ListSourceAssociationsPaginationTraits<RAMClient>>;

}  // namespace RAM
}  // namespace Aws
