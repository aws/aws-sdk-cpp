/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/outposts/model/GetOutpostBillingInformationPaginationTraits.h>
#include <aws/outposts/model/GetOutpostInstanceTypesPaginationTraits.h>
#include <aws/outposts/model/GetOutpostSupportedInstanceTypesPaginationTraits.h>
#include <aws/outposts/model/ListAssetInstancesPaginationTraits.h>
#include <aws/outposts/model/ListAssetsPaginationTraits.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskPaginationTraits.h>
#include <aws/outposts/model/ListCapacityTasksPaginationTraits.h>
#include <aws/outposts/model/ListCatalogItemsPaginationTraits.h>
#include <aws/outposts/model/ListOrdersPaginationTraits.h>
#include <aws/outposts/model/ListOutpostsPaginationTraits.h>
#include <aws/outposts/model/ListSitesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Outposts {

class OutpostsClient;

template <typename DerivedClient>
class OutpostsPaginationBase {
 public:
  /**
   * Create a paginator for GetOutpostBillingInformation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutpostBillingInformationRequest,
                                    Pagination::GetOutpostBillingInformationPaginationTraits<DerivedClient>>
  GetOutpostBillingInformationPaginator(const Model::GetOutpostBillingInformationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutpostBillingInformationRequest,
                                             Pagination::GetOutpostBillingInformationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetOutpostInstanceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutpostInstanceTypesRequest,
                                    Pagination::GetOutpostInstanceTypesPaginationTraits<DerivedClient>>
  GetOutpostInstanceTypesPaginator(const Model::GetOutpostInstanceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutpostInstanceTypesRequest,
                                             Pagination::GetOutpostInstanceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetOutpostSupportedInstanceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutpostSupportedInstanceTypesRequest,
                                    Pagination::GetOutpostSupportedInstanceTypesPaginationTraits<DerivedClient>>
  GetOutpostSupportedInstanceTypesPaginator(const Model::GetOutpostSupportedInstanceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutpostSupportedInstanceTypesRequest,
                                             Pagination::GetOutpostSupportedInstanceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssetInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetInstancesRequest,
                                    Pagination::ListAssetInstancesPaginationTraits<DerivedClient>>
  ListAssetInstancesPaginator(const Model::ListAssetInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetInstancesRequest,
                                             Pagination::ListAssetInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest, Pagination::ListAssetsPaginationTraits<DerivedClient>>
  ListAssetsPaginator(const Model::ListAssetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest,
                                             Pagination::ListAssetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListBlockingInstancesForCapacityTask operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlockingInstancesForCapacityTaskRequest,
                                    Pagination::ListBlockingInstancesForCapacityTaskPaginationTraits<DerivedClient>>
  ListBlockingInstancesForCapacityTaskPaginator(const Model::ListBlockingInstancesForCapacityTaskRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlockingInstancesForCapacityTaskRequest,
                                             Pagination::ListBlockingInstancesForCapacityTaskPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCapacityTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapacityTasksRequest,
                                    Pagination::ListCapacityTasksPaginationTraits<DerivedClient>>
  ListCapacityTasksPaginator(const Model::ListCapacityTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapacityTasksRequest,
                                             Pagination::ListCapacityTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCatalogItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCatalogItemsRequest,
                                    Pagination::ListCatalogItemsPaginationTraits<DerivedClient>>
  ListCatalogItemsPaginator(const Model::ListCatalogItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCatalogItemsRequest,
                                             Pagination::ListCatalogItemsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListOrders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrdersRequest, Pagination::ListOrdersPaginationTraits<DerivedClient>>
  ListOrdersPaginator(const Model::ListOrdersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrdersRequest,
                                             Pagination::ListOrdersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListOutposts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutpostsRequest, Pagination::ListOutpostsPaginationTraits<DerivedClient>>
  ListOutpostsPaginator(const Model::ListOutpostsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutpostsRequest,
                                             Pagination::ListOutpostsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSites operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSitesRequest, Pagination::ListSitesPaginationTraits<DerivedClient>>
  ListSitesPaginator(const Model::ListSitesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSitesRequest, Pagination::ListSitesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Outposts
}  // namespace Aws
