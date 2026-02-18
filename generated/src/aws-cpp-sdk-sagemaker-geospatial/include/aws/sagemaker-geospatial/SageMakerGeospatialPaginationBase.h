/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/ListRasterDataCollectionsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsPaginationTraits.h>
#include <aws/sagemaker-geospatial/model/SearchRasterDataCollectionPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SageMakerGeospatial {

class SageMakerGeospatialClient;

template <typename DerivedClient>
class SageMakerGeospatialPaginationBase {
 public:
  /**
   * Create a paginator for ListEarthObservationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEarthObservationJobsRequest,
                                    Pagination::ListEarthObservationJobsPaginationTraits<DerivedClient>>
  ListEarthObservationJobsPaginator(const Model::ListEarthObservationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEarthObservationJobsRequest,
                                             Pagination::ListEarthObservationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRasterDataCollections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRasterDataCollectionsRequest,
                                    Pagination::ListRasterDataCollectionsPaginationTraits<DerivedClient>>
  ListRasterDataCollectionsPaginator(const Model::ListRasterDataCollectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRasterDataCollectionsRequest,
                                             Pagination::ListRasterDataCollectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVectorEnrichmentJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVectorEnrichmentJobsRequest,
                                    Pagination::ListVectorEnrichmentJobsPaginationTraits<DerivedClient>>
  ListVectorEnrichmentJobsPaginator(const Model::ListVectorEnrichmentJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVectorEnrichmentJobsRequest,
                                             Pagination::ListVectorEnrichmentJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchRasterDataCollection operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRasterDataCollectionRequest,
                                    Pagination::SearchRasterDataCollectionPaginationTraits<DerivedClient>>
  SearchRasterDataCollectionPaginator(const Model::SearchRasterDataCollectionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRasterDataCollectionRequest,
                                             Pagination::SearchRasterDataCollectionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SageMakerGeospatial
}  // namespace Aws
