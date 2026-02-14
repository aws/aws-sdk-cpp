/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workmail/WorkMailClient.h>
#include <aws/workmail/model/ListAliasesPaginationTraits.h>
#include <aws/workmail/model/ListAvailabilityConfigurationsPaginationTraits.h>
#include <aws/workmail/model/ListGroupMembersPaginationTraits.h>
#include <aws/workmail/model/ListGroupsForEntityPaginationTraits.h>
#include <aws/workmail/model/ListGroupsPaginationTraits.h>
#include <aws/workmail/model/ListImpersonationRolesPaginationTraits.h>
#include <aws/workmail/model/ListMailDomainsPaginationTraits.h>
#include <aws/workmail/model/ListMailboxExportJobsPaginationTraits.h>
#include <aws/workmail/model/ListMailboxPermissionsPaginationTraits.h>
#include <aws/workmail/model/ListMobileDeviceAccessOverridesPaginationTraits.h>
#include <aws/workmail/model/ListOrganizationsPaginationTraits.h>
#include <aws/workmail/model/ListPersonalAccessTokensPaginationTraits.h>
#include <aws/workmail/model/ListResourceDelegatesPaginationTraits.h>
#include <aws/workmail/model/ListResourcesPaginationTraits.h>
#include <aws/workmail/model/ListUsersPaginationTraits.h>

namespace Aws {
namespace WorkMail {

using ListAliasesPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<WorkMailClient>>;
using ListAvailabilityConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListAvailabilityConfigurationsRequest,
                                      Pagination::ListAvailabilityConfigurationsPaginationTraits<WorkMailClient>>;
using ListGroupMembersPaginator = Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListGroupMembersRequest,
                                                                    Pagination::ListGroupMembersPaginationTraits<WorkMailClient>>;
using ListGroupsPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<WorkMailClient>>;
using ListGroupsForEntityPaginator = Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListGroupsForEntityRequest,
                                                                       Pagination::ListGroupsForEntityPaginationTraits<WorkMailClient>>;
using ListImpersonationRolesPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListImpersonationRolesRequest,
                                      Pagination::ListImpersonationRolesPaginationTraits<WorkMailClient>>;
using ListMailboxExportJobsPaginator = Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListMailboxExportJobsRequest,
                                                                         Pagination::ListMailboxExportJobsPaginationTraits<WorkMailClient>>;
using ListMailboxPermissionsPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListMailboxPermissionsRequest,
                                      Pagination::ListMailboxPermissionsPaginationTraits<WorkMailClient>>;
using ListMailDomainsPaginator = Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListMailDomainsRequest,
                                                                   Pagination::ListMailDomainsPaginationTraits<WorkMailClient>>;
using ListMobileDeviceAccessOverridesPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListMobileDeviceAccessOverridesRequest,
                                      Pagination::ListMobileDeviceAccessOverridesPaginationTraits<WorkMailClient>>;
using ListOrganizationsPaginator = Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListOrganizationsRequest,
                                                                     Pagination::ListOrganizationsPaginationTraits<WorkMailClient>>;
using ListPersonalAccessTokensPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListPersonalAccessTokensRequest,
                                      Pagination::ListPersonalAccessTokensPaginationTraits<WorkMailClient>>;
using ListResourceDelegatesPaginator = Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListResourceDelegatesRequest,
                                                                         Pagination::ListResourceDelegatesPaginationTraits<WorkMailClient>>;
using ListResourcesPaginator = Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListResourcesRequest,
                                                                 Pagination::ListResourcesPaginationTraits<WorkMailClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<WorkMailClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<WorkMailClient>>;

}  // namespace WorkMail
}  // namespace Aws
