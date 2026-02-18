/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/snowball/model/DescribeAddressesPaginationTraits.h>
#include <aws/snowball/model/ListClusterJobsPaginationTraits.h>
#include <aws/snowball/model/ListClustersPaginationTraits.h>
#include <aws/snowball/model/ListCompatibleImagesPaginationTraits.h>
#include <aws/snowball/model/ListJobsPaginationTraits.h>
#include <aws/snowball/model/ListLongTermPricingPaginationTraits.h>
#include <aws/snowball/model/ListPickupLocationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Snowball {

class SnowballClient;

template <typename DerivedClient>
class SnowballPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAddresses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddressesRequest,
                                    Pagination::DescribeAddressesPaginationTraits<DerivedClient>>
  DescribeAddressesPaginator(const Model::DescribeAddressesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddressesRequest,
                                             Pagination::DescribeAddressesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusterJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterJobsRequest,
                                    Pagination::ListClusterJobsPaginationTraits<DerivedClient>>
  ListClusterJobsPaginator(const Model::ListClusterJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterJobsRequest,
                                             Pagination::ListClusterJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCompatibleImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompatibleImagesRequest,
                                    Pagination::ListCompatibleImagesPaginationTraits<DerivedClient>>
  ListCompatibleImagesPaginator(const Model::ListCompatibleImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompatibleImagesRequest,
                                             Pagination::ListCompatibleImagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLongTermPricing operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLongTermPricingRequest,
                                    Pagination::ListLongTermPricingPaginationTraits<DerivedClient>>
  ListLongTermPricingPaginator(const Model::ListLongTermPricingRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLongTermPricingRequest,
                                             Pagination::ListLongTermPricingPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPickupLocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPickupLocationsRequest,
                                    Pagination::ListPickupLocationsPaginationTraits<DerivedClient>>
  ListPickupLocationsPaginator(const Model::ListPickupLocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPickupLocationsRequest,
                                             Pagination::ListPickupLocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Snowball
}  // namespace Aws
