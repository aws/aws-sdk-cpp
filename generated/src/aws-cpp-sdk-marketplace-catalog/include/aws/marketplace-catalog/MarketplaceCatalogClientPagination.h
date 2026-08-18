/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-catalog/MarketplaceCatalogClient.h>
#include <aws/marketplace-catalog/model/DescribeAssessmentPaginationTraits.h>
#include <aws/marketplace-catalog/model/ListAssessmentsPaginationTraits.h>
#include <aws/marketplace-catalog/model/ListChangeSetsPaginationTraits.h>
#include <aws/marketplace-catalog/model/ListEntitiesPaginationTraits.h>

namespace Aws {
namespace MarketplaceCatalog {

using DescribeAssessmentPaginator =
    Aws::Utils::Pagination::Paginator<MarketplaceCatalogClient, Model::DescribeAssessmentRequest,
                                      Pagination::DescribeAssessmentPaginationTraits<MarketplaceCatalogClient>>;
using ListAssessmentsPaginator = Aws::Utils::Pagination::Paginator<MarketplaceCatalogClient, Model::ListAssessmentsRequest,
                                                                   Pagination::ListAssessmentsPaginationTraits<MarketplaceCatalogClient>>;
using ListChangeSetsPaginator = Aws::Utils::Pagination::Paginator<MarketplaceCatalogClient, Model::ListChangeSetsRequest,
                                                                  Pagination::ListChangeSetsPaginationTraits<MarketplaceCatalogClient>>;
using ListEntitiesPaginator = Aws::Utils::Pagination::Paginator<MarketplaceCatalogClient, Model::ListEntitiesRequest,
                                                                Pagination::ListEntitiesPaginationTraits<MarketplaceCatalogClient>>;

}  // namespace MarketplaceCatalog
}  // namespace Aws
