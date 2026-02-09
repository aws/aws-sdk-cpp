/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialClient.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/ListRasterDataCollectionsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/SearchRasterDataCollectionPaginationTraits.h>

namespace Aws {
namespace SageMakerGeospatial {

using ListEarthObservationJobsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerGeospatialClient, Model::ListEarthObservationJobsRequest,
                                      Pagination::ListEarthObservationJobsPaginationTraits<SageMakerGeospatialClient>>;
using ListRasterDataCollectionsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerGeospatialClient, Model::ListRasterDataCollectionsRequest,
                                      Pagination::ListRasterDataCollectionsPaginationTraits<SageMakerGeospatialClient>>;
using ListVectorEnrichmentJobsPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerGeospatialClient, Model::ListVectorEnrichmentJobsRequest,
                                      Pagination::ListVectorEnrichmentJobsPaginationTraits<SageMakerGeospatialClient>>;
using SearchRasterDataCollectionPaginator =
    Aws::Utils::Pagination::Paginator<SageMakerGeospatialClient, Model::SearchRasterDataCollectionRequest,
                                      Pagination::SearchRasterDataCollectionPaginationTraits<SageMakerGeospatialClient>>;

}  // namespace SageMakerGeospatial
}  // namespace Aws
