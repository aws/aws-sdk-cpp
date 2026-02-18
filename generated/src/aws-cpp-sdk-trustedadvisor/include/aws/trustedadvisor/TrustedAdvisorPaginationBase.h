/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/trustedadvisor/model/ListChecksPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationsPaginationTraits.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesPaginationTraits.h>
#include <aws/trustedadvisor/model/ListRecommendationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace TrustedAdvisor {

class TrustedAdvisorClient;

template <typename DerivedClient>
class TrustedAdvisorPaginationBase {
 public:
  /**
   * Create a paginator for ListChecks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChecksRequest, Pagination::ListChecksPaginationTraits<DerivedClient>>
  ListChecksPaginator(const Model::ListChecksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChecksRequest,
                                             Pagination::ListChecksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListOrganizationRecommendationAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationRecommendationAccountsRequest,
                                    Pagination::ListOrganizationRecommendationAccountsPaginationTraits<DerivedClient>>
  ListOrganizationRecommendationAccountsPaginator(const Model::ListOrganizationRecommendationAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationRecommendationAccountsRequest,
                                             Pagination::ListOrganizationRecommendationAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOrganizationRecommendationResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationRecommendationResourcesRequest,
                                    Pagination::ListOrganizationRecommendationResourcesPaginationTraits<DerivedClient>>
  ListOrganizationRecommendationResourcesPaginator(const Model::ListOrganizationRecommendationResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationRecommendationResourcesRequest,
                                             Pagination::ListOrganizationRecommendationResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOrganizationRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationRecommendationsRequest,
                                    Pagination::ListOrganizationRecommendationsPaginationTraits<DerivedClient>>
  ListOrganizationRecommendationsPaginator(const Model::ListOrganizationRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationRecommendationsRequest,
                                             Pagination::ListOrganizationRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendationResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationResourcesRequest,
                                    Pagination::ListRecommendationResourcesPaginationTraits<DerivedClient>>
  ListRecommendationResourcesPaginator(const Model::ListRecommendationResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationResourcesRequest,
                                             Pagination::ListRecommendationResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                    Pagination::ListRecommendationsPaginationTraits<DerivedClient>>
  ListRecommendationsPaginator(const Model::ListRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                             Pagination::ListRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace TrustedAdvisor
}  // namespace Aws
