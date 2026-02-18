/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Organizations {

class OrganizationsClient;

template <typename DerivedClient>
class OrganizationsPaginationBase {
 public:
  /**
   * Create a paginator for ListAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest, Pagination::ListAccountsPaginationTraits<DerivedClient>>
  ListAccountsPaginator(const Model::ListAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest,
                                             Pagination::ListAccountsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAccountsForParent operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsForParentRequest,
                                    Pagination::ListAccountsForParentPaginationTraits<DerivedClient>>
  ListAccountsForParentPaginator(const Model::ListAccountsForParentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsForParentRequest,
                                             Pagination::ListAccountsForParentPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountsWithInvalidEffectivePolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsWithInvalidEffectivePolicyRequest,
                                    Pagination::ListAccountsWithInvalidEffectivePolicyPaginationTraits<DerivedClient>>
  ListAccountsWithInvalidEffectivePolicyPaginator(const Model::ListAccountsWithInvalidEffectivePolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsWithInvalidEffectivePolicyRequest,
                                             Pagination::ListAccountsWithInvalidEffectivePolicyPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAWSServiceAccessForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAWSServiceAccessForOrganizationRequest,
                                    Pagination::ListAWSServiceAccessForOrganizationPaginationTraits<DerivedClient>>
  ListAWSServiceAccessForOrganizationPaginator(const Model::ListAWSServiceAccessForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAWSServiceAccessForOrganizationRequest,
                                             Pagination::ListAWSServiceAccessForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChildren operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChildrenRequest, Pagination::ListChildrenPaginationTraits<DerivedClient>>
  ListChildrenPaginator(const Model::ListChildrenRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChildrenRequest,
                                             Pagination::ListChildrenPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCreateAccountStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCreateAccountStatusRequest,
                                    Pagination::ListCreateAccountStatusPaginationTraits<DerivedClient>>
  ListCreateAccountStatusPaginator(const Model::ListCreateAccountStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCreateAccountStatusRequest,
                                             Pagination::ListCreateAccountStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDelegatedAdministrators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDelegatedAdministratorsRequest,
                                    Pagination::ListDelegatedAdministratorsPaginationTraits<DerivedClient>>
  ListDelegatedAdministratorsPaginator(const Model::ListDelegatedAdministratorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDelegatedAdministratorsRequest,
                                             Pagination::ListDelegatedAdministratorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDelegatedServicesForAccount operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDelegatedServicesForAccountRequest,
                                    Pagination::ListDelegatedServicesForAccountPaginationTraits<DerivedClient>>
  ListDelegatedServicesForAccountPaginator(const Model::ListDelegatedServicesForAccountRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDelegatedServicesForAccountRequest,
                                             Pagination::ListDelegatedServicesForAccountPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEffectivePolicyValidationErrors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEffectivePolicyValidationErrorsRequest,
                                    Pagination::ListEffectivePolicyValidationErrorsPaginationTraits<DerivedClient>>
  ListEffectivePolicyValidationErrorsPaginator(const Model::ListEffectivePolicyValidationErrorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEffectivePolicyValidationErrorsRequest,
                                             Pagination::ListEffectivePolicyValidationErrorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHandshakesForAccount operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHandshakesForAccountRequest,
                                    Pagination::ListHandshakesForAccountPaginationTraits<DerivedClient>>
  ListHandshakesForAccountPaginator(const Model::ListHandshakesForAccountRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHandshakesForAccountRequest,
                                             Pagination::ListHandshakesForAccountPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHandshakesForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHandshakesForOrganizationRequest,
                                    Pagination::ListHandshakesForOrganizationPaginationTraits<DerivedClient>>
  ListHandshakesForOrganizationPaginator(const Model::ListHandshakesForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHandshakesForOrganizationRequest,
                                             Pagination::ListHandshakesForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOrganizationalUnitsForParent operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationalUnitsForParentRequest,
                                    Pagination::ListOrganizationalUnitsForParentPaginationTraits<DerivedClient>>
  ListOrganizationalUnitsForParentPaginator(const Model::ListOrganizationalUnitsForParentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationalUnitsForParentRequest,
                                             Pagination::ListOrganizationalUnitsForParentPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListParents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParentsRequest, Pagination::ListParentsPaginationTraits<DerivedClient>>
  ListParentsPaginator(const Model::ListParentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParentsRequest,
                                             Pagination::ListParentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPoliciesForTarget operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesForTargetRequest,
                                    Pagination::ListPoliciesForTargetPaginationTraits<DerivedClient>>
  ListPoliciesForTargetPaginator(const Model::ListPoliciesForTargetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesForTargetRequest,
                                             Pagination::ListPoliciesForTargetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRootsRequest, Pagination::ListRootsPaginationTraits<DerivedClient>>
  ListRootsPaginator(const Model::ListRootsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRootsRequest, Pagination::ListRootsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListTargetsForPolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsForPolicyRequest,
                                    Pagination::ListTargetsForPolicyPaginationTraits<DerivedClient>>
  ListTargetsForPolicyPaginator(const Model::ListTargetsForPolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsForPolicyRequest,
                                             Pagination::ListTargetsForPolicyPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Organizations
}  // namespace Aws
