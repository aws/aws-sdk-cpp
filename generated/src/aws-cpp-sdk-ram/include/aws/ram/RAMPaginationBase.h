/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace RAM {

class RAMClient;

template <typename DerivedClient>
class RAMPaginationBase {
 public:
  /**
   * Create a paginator for GetResourcePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                    Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>
  GetResourcePoliciesPaginator(const Model::GetResourcePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                             Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourceShareAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceShareAssociationsRequest,
                                    Pagination::GetResourceShareAssociationsPaginationTraits<DerivedClient>>
  GetResourceShareAssociationsPaginator(const Model::GetResourceShareAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceShareAssociationsRequest,
                                             Pagination::GetResourceShareAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourceShareInvitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceShareInvitationsRequest,
                                    Pagination::GetResourceShareInvitationsPaginationTraits<DerivedClient>>
  GetResourceShareInvitationsPaginator(const Model::GetResourceShareInvitationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceShareInvitationsRequest,
                                             Pagination::GetResourceShareInvitationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourceShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceSharesRequest,
                                    Pagination::GetResourceSharesPaginationTraits<DerivedClient>>
  GetResourceSharesPaginator(const Model::GetResourceSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceSharesRequest,
                                             Pagination::GetResourceSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPendingInvitationResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPendingInvitationResourcesRequest,
                                    Pagination::ListPendingInvitationResourcesPaginationTraits<DerivedClient>>
  ListPendingInvitationResourcesPaginator(const Model::ListPendingInvitationResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPendingInvitationResourcesRequest,
                                             Pagination::ListPendingInvitationResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPermissionAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionAssociationsRequest,
                                    Pagination::ListPermissionAssociationsPaginationTraits<DerivedClient>>
  ListPermissionAssociationsPaginator(const Model::ListPermissionAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionAssociationsRequest,
                                             Pagination::ListPermissionAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                    Pagination::ListPermissionsPaginationTraits<DerivedClient>>
  ListPermissionsPaginator(const Model::ListPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                             Pagination::ListPermissionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPermissionVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionVersionsRequest,
                                    Pagination::ListPermissionVersionsPaginationTraits<DerivedClient>>
  ListPermissionVersionsPaginator(const Model::ListPermissionVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionVersionsRequest,
                                             Pagination::ListPermissionVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPrincipals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalsRequest, Pagination::ListPrincipalsPaginationTraits<DerivedClient>>
  ListPrincipalsPaginator(const Model::ListPrincipalsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalsRequest,
                                             Pagination::ListPrincipalsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListReplacePermissionAssociationsWork operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReplacePermissionAssociationsWorkRequest,
                                    Pagination::ListReplacePermissionAssociationsWorkPaginationTraits<DerivedClient>>
  ListReplacePermissionAssociationsWorkPaginator(const Model::ListReplacePermissionAssociationsWorkRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReplacePermissionAssociationsWorkRequest,
                                             Pagination::ListReplacePermissionAssociationsWorkPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListResourceSharePermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSharePermissionsRequest,
                                    Pagination::ListResourceSharePermissionsPaginationTraits<DerivedClient>>
  ListResourceSharePermissionsPaginator(const Model::ListResourceSharePermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSharePermissionsRequest,
                                             Pagination::ListResourceSharePermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTypesRequest,
                                    Pagination::ListResourceTypesPaginationTraits<DerivedClient>>
  ListResourceTypesPaginator(const Model::ListResourceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTypesRequest,
                                             Pagination::ListResourceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceAssociationsRequest,
                                    Pagination::ListSourceAssociationsPaginationTraits<DerivedClient>>
  ListSourceAssociationsPaginator(const Model::ListSourceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceAssociationsRequest,
                                             Pagination::ListSourceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace RAM
}  // namespace Aws
