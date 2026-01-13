/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/trustedadvisor/TrustedAdvisorClient.h>
#include <aws/trustedadvisor/model/ListChecksPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationsPaginationTraits.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesPaginationTraits.h>
#include <aws/trustedadvisor/model/ListRecommendationsPaginationTraits.h>

namespace Aws {
namespace TrustedAdvisor {

using ListChecksPaginator = Aws::Utils::Pagination::Paginator<TrustedAdvisorClient, Model::ListChecksRequest,
                                                              Pagination::ListChecksPaginationTraits<TrustedAdvisorClient>>;
using ListOrganizationRecommendationAccountsPaginator =
    Aws::Utils::Pagination::Paginator<TrustedAdvisorClient, Model::ListOrganizationRecommendationAccountsRequest,
                                      Pagination::ListOrganizationRecommendationAccountsPaginationTraits<TrustedAdvisorClient>>;
using ListOrganizationRecommendationResourcesPaginator =
    Aws::Utils::Pagination::Paginator<TrustedAdvisorClient, Model::ListOrganizationRecommendationResourcesRequest,
                                      Pagination::ListOrganizationRecommendationResourcesPaginationTraits<TrustedAdvisorClient>>;
using ListOrganizationRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<TrustedAdvisorClient, Model::ListOrganizationRecommendationsRequest,
                                      Pagination::ListOrganizationRecommendationsPaginationTraits<TrustedAdvisorClient>>;
using ListRecommendationResourcesPaginator =
    Aws::Utils::Pagination::Paginator<TrustedAdvisorClient, Model::ListRecommendationResourcesRequest,
                                      Pagination::ListRecommendationResourcesPaginationTraits<TrustedAdvisorClient>>;
using ListRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<TrustedAdvisorClient, Model::ListRecommendationsRequest,
                                      Pagination::ListRecommendationsPaginationTraits<TrustedAdvisorClient>>;

}  // namespace TrustedAdvisor
}  // namespace Aws
