/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/memorydb/model/DescribeACLsPaginationTraits.h>
#include <aws/memorydb/model/DescribeClustersPaginationTraits.h>
#include <aws/memorydb/model/DescribeEngineVersionsPaginationTraits.h>
#include <aws/memorydb/model/DescribeEventsPaginationTraits.h>
#include <aws/memorydb/model/DescribeMultiRegionClustersPaginationTraits.h>
#include <aws/memorydb/model/DescribeParameterGroupsPaginationTraits.h>
#include <aws/memorydb/model/DescribeParametersPaginationTraits.h>
#include <aws/memorydb/model/DescribeReservedNodesOfferingsPaginationTraits.h>
#include <aws/memorydb/model/DescribeReservedNodesPaginationTraits.h>
#include <aws/memorydb/model/DescribeServiceUpdatesPaginationTraits.h>
#include <aws/memorydb/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/memorydb/model/DescribeSubnetGroupsPaginationTraits.h>
#include <aws/memorydb/model/DescribeUsersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MemoryDB {

class MemoryDBClient;

template <typename DerivedClient>
class MemoryDBPaginationBase {
 public:
  /**
   * Create a paginator for DescribeACLs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeACLsRequest, Pagination::DescribeACLsPaginationTraits<DerivedClient>>
  DescribeACLsPaginator(const Model::DescribeACLsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeACLsRequest,
                                             Pagination::DescribeACLsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for DescribeClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClustersRequest,
                                    Pagination::DescribeClustersPaginationTraits<DerivedClient>>
  DescribeClustersPaginator(const Model::DescribeClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClustersRequest,
                                             Pagination::DescribeClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineVersionsRequest,
                                    Pagination::DescribeEngineVersionsPaginationTraits<DerivedClient>>
  DescribeEngineVersionsPaginator(const Model::DescribeEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineVersionsRequest,
                                             Pagination::DescribeEngineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeMultiRegionClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMultiRegionClustersRequest,
                                    Pagination::DescribeMultiRegionClustersPaginationTraits<DerivedClient>>
  DescribeMultiRegionClustersPaginator(const Model::DescribeMultiRegionClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMultiRegionClustersRequest,
                                             Pagination::DescribeMultiRegionClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeParameterGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeParameterGroupsRequest,
                                    Pagination::DescribeParameterGroupsPaginationTraits<DerivedClient>>
  DescribeParameterGroupsPaginator(const Model::DescribeParameterGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeParameterGroupsRequest,
                                             Pagination::DescribeParameterGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeParametersRequest,
                                    Pagination::DescribeParametersPaginationTraits<DerivedClient>>
  DescribeParametersPaginator(const Model::DescribeParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeParametersRequest,
                                             Pagination::DescribeParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodesRequest,
                                    Pagination::DescribeReservedNodesPaginationTraits<DerivedClient>>
  DescribeReservedNodesPaginator(const Model::DescribeReservedNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodesRequest,
                                             Pagination::DescribeReservedNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedNodesOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodesOfferingsRequest,
                                    Pagination::DescribeReservedNodesOfferingsPaginationTraits<DerivedClient>>
  DescribeReservedNodesOfferingsPaginator(const Model::DescribeReservedNodesOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedNodesOfferingsRequest,
                                             Pagination::DescribeReservedNodesOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeServiceUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServiceUpdatesRequest,
                                    Pagination::DescribeServiceUpdatesPaginationTraits<DerivedClient>>
  DescribeServiceUpdatesPaginator(const Model::DescribeServiceUpdatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServiceUpdatesRequest,
                                             Pagination::DescribeServiceUpdatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                    Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>
  DescribeSnapshotsPaginator(const Model::DescribeSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                             Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSubnetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubnetGroupsRequest,
                                    Pagination::DescribeSubnetGroupsPaginationTraits<DerivedClient>>
  DescribeSubnetGroupsPaginator(const Model::DescribeSubnetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubnetGroupsRequest,
                                             Pagination::DescribeSubnetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsersRequest, Pagination::DescribeUsersPaginationTraits<DerivedClient>>
  DescribeUsersPaginator(const Model::DescribeUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsersRequest,
                                             Pagination::DescribeUsersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace MemoryDB
}  // namespace Aws
