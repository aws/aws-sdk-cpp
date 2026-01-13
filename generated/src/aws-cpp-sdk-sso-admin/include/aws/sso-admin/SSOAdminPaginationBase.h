/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountAssignmentsForPrincipalPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountAssignmentsPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAccessScopesPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsForPrincipalPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAuthenticationMethodsPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationGrantsPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationProvidersPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationsPaginationTraits.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetPaginationTraits.h>
#include <aws/sso-admin/model/ListInstancesPaginationTraits.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetPaginationTraits.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusPaginationTraits.h>
#include <aws/sso-admin/model/ListPermissionSetsPaginationTraits.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountPaginationTraits.h>
#include <aws/sso-admin/model/ListRegionsPaginationTraits.h>
#include <aws/sso-admin/model/ListTagsForResourcePaginationTraits.h>
#include <aws/sso-admin/model/ListTrustedTokenIssuersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SSOAdmin {

class SSOAdminClient;

template <typename DerivedClient>
class SSOAdminPaginationBase {
 public:
  /**
   * Create a paginator for ListAccountAssignmentCreationStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentCreationStatusRequest,
                                    Pagination::ListAccountAssignmentCreationStatusPaginationTraits<DerivedClient>>
  ListAccountAssignmentCreationStatusPaginator(const Model::ListAccountAssignmentCreationStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentCreationStatusRequest,
                                             Pagination::ListAccountAssignmentCreationStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountAssignmentDeletionStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentDeletionStatusRequest,
                                    Pagination::ListAccountAssignmentDeletionStatusPaginationTraits<DerivedClient>>
  ListAccountAssignmentDeletionStatusPaginator(const Model::ListAccountAssignmentDeletionStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentDeletionStatusRequest,
                                             Pagination::ListAccountAssignmentDeletionStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountAssignments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentsRequest,
                                    Pagination::ListAccountAssignmentsPaginationTraits<DerivedClient>>
  ListAccountAssignmentsPaginator(const Model::ListAccountAssignmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentsRequest,
                                             Pagination::ListAccountAssignmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountAssignmentsForPrincipal operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentsForPrincipalRequest,
                                    Pagination::ListAccountAssignmentsForPrincipalPaginationTraits<DerivedClient>>
  ListAccountAssignmentsForPrincipalPaginator(const Model::ListAccountAssignmentsForPrincipalRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssignmentsForPrincipalRequest,
                                             Pagination::ListAccountAssignmentsForPrincipalPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountsForProvisionedPermissionSet operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsForProvisionedPermissionSetRequest,
                                    Pagination::ListAccountsForProvisionedPermissionSetPaginationTraits<DerivedClient>>
  ListAccountsForProvisionedPermissionSetPaginator(const Model::ListAccountsForProvisionedPermissionSetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsForProvisionedPermissionSetRequest,
                                             Pagination::ListAccountsForProvisionedPermissionSetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationAccessScopes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAccessScopesRequest,
                                    Pagination::ListApplicationAccessScopesPaginationTraits<DerivedClient>>
  ListApplicationAccessScopesPaginator(const Model::ListApplicationAccessScopesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAccessScopesRequest,
                                             Pagination::ListApplicationAccessScopesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationAssignments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAssignmentsRequest,
                                    Pagination::ListApplicationAssignmentsPaginationTraits<DerivedClient>>
  ListApplicationAssignmentsPaginator(const Model::ListApplicationAssignmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAssignmentsRequest,
                                             Pagination::ListApplicationAssignmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationAssignmentsForPrincipal operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAssignmentsForPrincipalRequest,
                                    Pagination::ListApplicationAssignmentsForPrincipalPaginationTraits<DerivedClient>>
  ListApplicationAssignmentsForPrincipalPaginator(const Model::ListApplicationAssignmentsForPrincipalRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAssignmentsForPrincipalRequest,
                                             Pagination::ListApplicationAssignmentsForPrincipalPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationAuthenticationMethods operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAuthenticationMethodsRequest,
                                    Pagination::ListApplicationAuthenticationMethodsPaginationTraits<DerivedClient>>
  ListApplicationAuthenticationMethodsPaginator(const Model::ListApplicationAuthenticationMethodsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAuthenticationMethodsRequest,
                                             Pagination::ListApplicationAuthenticationMethodsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationGrantsRequest,
                                    Pagination::ListApplicationGrantsPaginationTraits<DerivedClient>>
  ListApplicationGrantsPaginator(const Model::ListApplicationGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationGrantsRequest,
                                             Pagination::ListApplicationGrantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationProvidersRequest,
                                    Pagination::ListApplicationProvidersPaginationTraits<DerivedClient>>
  ListApplicationProvidersPaginator(const Model::ListApplicationProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationProvidersRequest,
                                             Pagination::ListApplicationProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCustomerManagedPolicyReferencesInPermissionSet operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest,
                                    Pagination::ListCustomerManagedPolicyReferencesInPermissionSetPaginationTraits<DerivedClient>>
  ListCustomerManagedPolicyReferencesInPermissionSetPaginator(
      const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest,
                                             Pagination::ListCustomerManagedPolicyReferencesInPermissionSetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest, Pagination::ListInstancesPaginationTraits<DerivedClient>>
  ListInstancesPaginator(const Model::ListInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest,
                                             Pagination::ListInstancesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListManagedPoliciesInPermissionSet operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedPoliciesInPermissionSetRequest,
                                    Pagination::ListManagedPoliciesInPermissionSetPaginationTraits<DerivedClient>>
  ListManagedPoliciesInPermissionSetPaginator(const Model::ListManagedPoliciesInPermissionSetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedPoliciesInPermissionSetRequest,
                                             Pagination::ListManagedPoliciesInPermissionSetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPermissionSetProvisioningStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionSetProvisioningStatusRequest,
                                    Pagination::ListPermissionSetProvisioningStatusPaginationTraits<DerivedClient>>
  ListPermissionSetProvisioningStatusPaginator(const Model::ListPermissionSetProvisioningStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionSetProvisioningStatusRequest,
                                             Pagination::ListPermissionSetProvisioningStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPermissionSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionSetsRequest,
                                    Pagination::ListPermissionSetsPaginationTraits<DerivedClient>>
  ListPermissionSetsPaginator(const Model::ListPermissionSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionSetsRequest,
                                             Pagination::ListPermissionSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPermissionSetsProvisionedToAccount operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionSetsProvisionedToAccountRequest,
                                    Pagination::ListPermissionSetsProvisionedToAccountPaginationTraits<DerivedClient>>
  ListPermissionSetsProvisionedToAccountPaginator(const Model::ListPermissionSetsProvisionedToAccountRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionSetsProvisionedToAccountRequest,
                                             Pagination::ListPermissionSetsProvisionedToAccountPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRegions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionsRequest, Pagination::ListRegionsPaginationTraits<DerivedClient>>
  ListRegionsPaginator(const Model::ListRegionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionsRequest,
                                             Pagination::ListRegionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrustedTokenIssuers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustedTokenIssuersRequest,
                                    Pagination::ListTrustedTokenIssuersPaginationTraits<DerivedClient>>
  ListTrustedTokenIssuersPaginator(const Model::ListTrustedTokenIssuersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustedTokenIssuersRequest,
                                             Pagination::ListTrustedTokenIssuersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SSOAdmin
}  // namespace Aws
