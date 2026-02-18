/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sso-admin/SSOAdminClient.h>
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

namespace Aws {
namespace SSOAdmin {

using ListAccountAssignmentCreationStatusPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListAccountAssignmentCreationStatusRequest,
                                      Pagination::ListAccountAssignmentCreationStatusPaginationTraits<SSOAdminClient>>;
using ListAccountAssignmentDeletionStatusPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListAccountAssignmentDeletionStatusRequest,
                                      Pagination::ListAccountAssignmentDeletionStatusPaginationTraits<SSOAdminClient>>;
using ListAccountAssignmentsPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListAccountAssignmentsRequest,
                                      Pagination::ListAccountAssignmentsPaginationTraits<SSOAdminClient>>;
using ListAccountAssignmentsForPrincipalPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListAccountAssignmentsForPrincipalRequest,
                                      Pagination::ListAccountAssignmentsForPrincipalPaginationTraits<SSOAdminClient>>;
using ListAccountsForProvisionedPermissionSetPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListAccountsForProvisionedPermissionSetRequest,
                                      Pagination::ListAccountsForProvisionedPermissionSetPaginationTraits<SSOAdminClient>>;
using ListApplicationAccessScopesPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListApplicationAccessScopesRequest,
                                      Pagination::ListApplicationAccessScopesPaginationTraits<SSOAdminClient>>;
using ListApplicationAssignmentsPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListApplicationAssignmentsRequest,
                                      Pagination::ListApplicationAssignmentsPaginationTraits<SSOAdminClient>>;
using ListApplicationAssignmentsForPrincipalPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListApplicationAssignmentsForPrincipalRequest,
                                      Pagination::ListApplicationAssignmentsForPrincipalPaginationTraits<SSOAdminClient>>;
using ListApplicationAuthenticationMethodsPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListApplicationAuthenticationMethodsRequest,
                                      Pagination::ListApplicationAuthenticationMethodsPaginationTraits<SSOAdminClient>>;
using ListApplicationGrantsPaginator = Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListApplicationGrantsRequest,
                                                                         Pagination::ListApplicationGrantsPaginationTraits<SSOAdminClient>>;
using ListApplicationProvidersPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListApplicationProvidersRequest,
                                      Pagination::ListApplicationProvidersPaginationTraits<SSOAdminClient>>;
using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<SSOAdminClient>>;
using ListCustomerManagedPolicyReferencesInPermissionSetPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest,
                                      Pagination::ListCustomerManagedPolicyReferencesInPermissionSetPaginationTraits<SSOAdminClient>>;
using ListInstancesPaginator = Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListInstancesRequest,
                                                                 Pagination::ListInstancesPaginationTraits<SSOAdminClient>>;
using ListManagedPoliciesInPermissionSetPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListManagedPoliciesInPermissionSetRequest,
                                      Pagination::ListManagedPoliciesInPermissionSetPaginationTraits<SSOAdminClient>>;
using ListPermissionSetProvisioningStatusPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListPermissionSetProvisioningStatusRequest,
                                      Pagination::ListPermissionSetProvisioningStatusPaginationTraits<SSOAdminClient>>;
using ListPermissionSetsPaginator = Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListPermissionSetsRequest,
                                                                      Pagination::ListPermissionSetsPaginationTraits<SSOAdminClient>>;
using ListPermissionSetsProvisionedToAccountPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListPermissionSetsProvisionedToAccountRequest,
                                      Pagination::ListPermissionSetsProvisionedToAccountPaginationTraits<SSOAdminClient>>;
using ListRegionsPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListRegionsRequest, Pagination::ListRegionsPaginationTraits<SSOAdminClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<SSOAdminClient>>;
using ListTrustedTokenIssuersPaginator =
    Aws::Utils::Pagination::Paginator<SSOAdminClient, Model::ListTrustedTokenIssuersRequest,
                                      Pagination::ListTrustedTokenIssuersPaginationTraits<SSOAdminClient>>;

}  // namespace SSOAdmin
}  // namespace Aws
