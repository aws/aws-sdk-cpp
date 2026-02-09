/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/organizations/OrganizationsClient.h>
#include <aws/organizations/model/ListAWSServiceAccessForOrganizationPaginationTraits.h>
#include <aws/organizations/model/ListAccountsForParentPaginationTraits.h>
#include <aws/organizations/model/ListAccountsPaginationTraits.h>
#include <aws/organizations/model/ListAccountsWithInvalidEffectivePolicyPaginationTraits.h>
#include <aws/organizations/model/ListChildrenPaginationTraits.h>
#include <aws/organizations/model/ListCreateAccountStatusPaginationTraits.h>
#include <aws/organizations/model/ListDelegatedAdministratorsPaginationTraits.h>
#include <aws/organizations/model/ListDelegatedServicesForAccountPaginationTraits.h>
#include <aws/organizations/model/ListEffectivePolicyValidationErrorsPaginationTraits.h>
#include <aws/organizations/model/ListHandshakesForAccountPaginationTraits.h>
#include <aws/organizations/model/ListHandshakesForOrganizationPaginationTraits.h>
#include <aws/organizations/model/ListOrganizationalUnitsForParentPaginationTraits.h>
#include <aws/organizations/model/ListParentsPaginationTraits.h>
#include <aws/organizations/model/ListPoliciesForTargetPaginationTraits.h>
#include <aws/organizations/model/ListPoliciesPaginationTraits.h>
#include <aws/organizations/model/ListRootsPaginationTraits.h>
#include <aws/organizations/model/ListTagsForResourcePaginationTraits.h>
#include <aws/organizations/model/ListTargetsForPolicyPaginationTraits.h>

namespace Aws {
namespace Organizations {

using ListAccountsPaginator = Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListAccountsRequest,
                                                                Pagination::ListAccountsPaginationTraits<OrganizationsClient>>;
using ListAccountsForParentPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListAccountsForParentRequest,
                                      Pagination::ListAccountsForParentPaginationTraits<OrganizationsClient>>;
using ListAccountsWithInvalidEffectivePolicyPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListAccountsWithInvalidEffectivePolicyRequest,
                                      Pagination::ListAccountsWithInvalidEffectivePolicyPaginationTraits<OrganizationsClient>>;
using ListAWSServiceAccessForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListAWSServiceAccessForOrganizationRequest,
                                      Pagination::ListAWSServiceAccessForOrganizationPaginationTraits<OrganizationsClient>>;
using ListChildrenPaginator = Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListChildrenRequest,
                                                                Pagination::ListChildrenPaginationTraits<OrganizationsClient>>;
using ListCreateAccountStatusPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListCreateAccountStatusRequest,
                                      Pagination::ListCreateAccountStatusPaginationTraits<OrganizationsClient>>;
using ListDelegatedAdministratorsPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListDelegatedAdministratorsRequest,
                                      Pagination::ListDelegatedAdministratorsPaginationTraits<OrganizationsClient>>;
using ListDelegatedServicesForAccountPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListDelegatedServicesForAccountRequest,
                                      Pagination::ListDelegatedServicesForAccountPaginationTraits<OrganizationsClient>>;
using ListEffectivePolicyValidationErrorsPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListEffectivePolicyValidationErrorsRequest,
                                      Pagination::ListEffectivePolicyValidationErrorsPaginationTraits<OrganizationsClient>>;
using ListHandshakesForAccountPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListHandshakesForAccountRequest,
                                      Pagination::ListHandshakesForAccountPaginationTraits<OrganizationsClient>>;
using ListHandshakesForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListHandshakesForOrganizationRequest,
                                      Pagination::ListHandshakesForOrganizationPaginationTraits<OrganizationsClient>>;
using ListOrganizationalUnitsForParentPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListOrganizationalUnitsForParentRequest,
                                      Pagination::ListOrganizationalUnitsForParentPaginationTraits<OrganizationsClient>>;
using ListParentsPaginator = Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListParentsRequest,
                                                               Pagination::ListParentsPaginationTraits<OrganizationsClient>>;
using ListPoliciesPaginator = Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListPoliciesRequest,
                                                                Pagination::ListPoliciesPaginationTraits<OrganizationsClient>>;
using ListPoliciesForTargetPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListPoliciesForTargetRequest,
                                      Pagination::ListPoliciesForTargetPaginationTraits<OrganizationsClient>>;
using ListRootsPaginator = Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListRootsRequest,
                                                             Pagination::ListRootsPaginationTraits<OrganizationsClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<OrganizationsClient>>;
using ListTargetsForPolicyPaginator =
    Aws::Utils::Pagination::Paginator<OrganizationsClient, Model::ListTargetsForPolicyRequest,
                                      Pagination::ListTargetsForPolicyPaginationTraits<OrganizationsClient>>;

}  // namespace Organizations
}  // namespace Aws
