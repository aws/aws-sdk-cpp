/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace WorkMail {

class WorkMailClient;

template <typename DerivedClient>
class WorkMailPaginationBase {
 public:
  /**
   * Create a paginator for ListAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<DerivedClient>>
  ListAliasesPaginator(const Model::ListAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest,
                                             Pagination::ListAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListAvailabilityConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailabilityConfigurationsRequest,
                                    Pagination::ListAvailabilityConfigurationsPaginationTraits<DerivedClient>>
  ListAvailabilityConfigurationsPaginator(const Model::ListAvailabilityConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailabilityConfigurationsRequest,
                                             Pagination::ListAvailabilityConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroupMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembersRequest,
                                    Pagination::ListGroupMembersPaginationTraits<DerivedClient>>
  ListGroupMembersPaginator(const Model::ListGroupMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembersRequest,
                                             Pagination::ListGroupMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<DerivedClient>>
  ListGroupsPaginator(const Model::ListGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest,
                                             Pagination::ListGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListGroupsForEntity operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsForEntityRequest,
                                    Pagination::ListGroupsForEntityPaginationTraits<DerivedClient>>
  ListGroupsForEntityPaginator(const Model::ListGroupsForEntityRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsForEntityRequest,
                                             Pagination::ListGroupsForEntityPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImpersonationRoles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImpersonationRolesRequest,
                                    Pagination::ListImpersonationRolesPaginationTraits<DerivedClient>>
  ListImpersonationRolesPaginator(const Model::ListImpersonationRolesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImpersonationRolesRequest,
                                             Pagination::ListImpersonationRolesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMailboxExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMailboxExportJobsRequest,
                                    Pagination::ListMailboxExportJobsPaginationTraits<DerivedClient>>
  ListMailboxExportJobsPaginator(const Model::ListMailboxExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMailboxExportJobsRequest,
                                             Pagination::ListMailboxExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMailboxPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMailboxPermissionsRequest,
                                    Pagination::ListMailboxPermissionsPaginationTraits<DerivedClient>>
  ListMailboxPermissionsPaginator(const Model::ListMailboxPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMailboxPermissionsRequest,
                                             Pagination::ListMailboxPermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMailDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMailDomainsRequest,
                                    Pagination::ListMailDomainsPaginationTraits<DerivedClient>>
  ListMailDomainsPaginator(const Model::ListMailDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMailDomainsRequest,
                                             Pagination::ListMailDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListMobileDeviceAccessOverrides operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMobileDeviceAccessOverridesRequest,
                                    Pagination::ListMobileDeviceAccessOverridesPaginationTraits<DerivedClient>>
  ListMobileDeviceAccessOverridesPaginator(const Model::ListMobileDeviceAccessOverridesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMobileDeviceAccessOverridesRequest,
                                             Pagination::ListMobileDeviceAccessOverridesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOrganizations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationsRequest,
                                    Pagination::ListOrganizationsPaginationTraits<DerivedClient>>
  ListOrganizationsPaginator(const Model::ListOrganizationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationsRequest,
                                             Pagination::ListOrganizationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPersonalAccessTokens operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPersonalAccessTokensRequest,
                                    Pagination::ListPersonalAccessTokensPaginationTraits<DerivedClient>>
  ListPersonalAccessTokensPaginator(const Model::ListPersonalAccessTokensRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPersonalAccessTokensRequest,
                                             Pagination::ListPersonalAccessTokensPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceDelegates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceDelegatesRequest,
                                    Pagination::ListResourceDelegatesPaginationTraits<DerivedClient>>
  ListResourceDelegatesPaginator(const Model::ListResourceDelegatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceDelegatesRequest,
                                             Pagination::ListResourceDelegatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest, Pagination::ListResourcesPaginationTraits<DerivedClient>>
  ListResourcesPaginator(const Model::ListResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest,
                                             Pagination::ListResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace WorkMail
}  // namespace Aws
