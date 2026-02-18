/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resource-explorer-2/model/GetResourceExplorerSetupPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListIndexesForMembersPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListIndexesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListManagedViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListResourcesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListServiceIndexesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListServiceViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListStreamingAccessForServicesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/SearchPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ResourceExplorer2 {

class ResourceExplorer2Client;

template <typename DerivedClient>
class ResourceExplorer2PaginationBase {
 public:
  /**
   * Create a paginator for GetResourceExplorerSetup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceExplorerSetupRequest,
                                    Pagination::GetResourceExplorerSetupPaginationTraits<DerivedClient>>
  GetResourceExplorerSetupPaginator(const Model::GetResourceExplorerSetupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceExplorerSetupRequest,
                                             Pagination::GetResourceExplorerSetupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIndexes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexesRequest, Pagination::ListIndexesPaginationTraits<DerivedClient>>
  ListIndexesPaginator(const Model::ListIndexesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexesRequest,
                                             Pagination::ListIndexesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListIndexesForMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexesForMembersRequest,
                                    Pagination::ListIndexesForMembersPaginationTraits<DerivedClient>>
  ListIndexesForMembersPaginator(const Model::ListIndexesForMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexesForMembersRequest,
                                             Pagination::ListIndexesForMembersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedViewsRequest,
                                    Pagination::ListManagedViewsPaginationTraits<DerivedClient>>
  ListManagedViewsPaginator(const Model::ListManagedViewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedViewsRequest,
                                             Pagination::ListManagedViewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest, Pagination::ListResourcesPaginationTraits<DerivedClient>>
  ListResourcesPaginator(const Model::ListResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest,
                                             Pagination::ListResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListServiceIndexes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceIndexesRequest,
                                    Pagination::ListServiceIndexesPaginationTraits<DerivedClient>>
  ListServiceIndexesPaginator(const Model::ListServiceIndexesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceIndexesRequest,
                                             Pagination::ListServiceIndexesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceViewsRequest,
                                    Pagination::ListServiceViewsPaginationTraits<DerivedClient>>
  ListServiceViewsPaginator(const Model::ListServiceViewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceViewsRequest,
                                             Pagination::ListServiceViewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListStreamingAccessForServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamingAccessForServicesRequest,
                                    Pagination::ListStreamingAccessForServicesPaginationTraits<DerivedClient>>
  ListStreamingAccessForServicesPaginator(const Model::ListStreamingAccessForServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamingAccessForServicesRequest,
                                             Pagination::ListStreamingAccessForServicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSupportedResourceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportedResourceTypesRequest,
                                    Pagination::ListSupportedResourceTypesPaginationTraits<DerivedClient>>
  ListSupportedResourceTypesPaginator(const Model::ListSupportedResourceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportedResourceTypesRequest,
                                             Pagination::ListSupportedResourceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewsRequest, Pagination::ListViewsPaginationTraits<DerivedClient>>
  ListViewsPaginator(const Model::ListViewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewsRequest, Pagination::ListViewsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for Search operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRequest, Pagination::SearchPaginationTraits<DerivedClient>> SearchPaginator(
      const Model::SearchRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRequest, Pagination::SearchPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ResourceExplorer2
}  // namespace Aws
