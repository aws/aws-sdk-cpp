/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/timestream-influxdb/model/ListDbClustersPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbInstancesPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace TimestreamInfluxDB {

class TimestreamInfluxDBClient;

template <typename DerivedClient>
class TimestreamInfluxDBPaginationBase {
 public:
  /**
   * Create a paginator for ListDbClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbClustersRequest, Pagination::ListDbClustersPaginationTraits<DerivedClient>>
  ListDbClustersPaginator(const Model::ListDbClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbClustersRequest,
                                             Pagination::ListDbClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDbInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbInstancesRequest,
                                    Pagination::ListDbInstancesPaginationTraits<DerivedClient>>
  ListDbInstancesPaginator(const Model::ListDbInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbInstancesRequest,
                                             Pagination::ListDbInstancesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDbInstancesForCluster operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbInstancesForClusterRequest,
                                    Pagination::ListDbInstancesForClusterPaginationTraits<DerivedClient>>
  ListDbInstancesForClusterPaginator(const Model::ListDbInstancesForClusterRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbInstancesForClusterRequest,
                                             Pagination::ListDbInstancesForClusterPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDbParameterGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbParameterGroupsRequest,
                                    Pagination::ListDbParameterGroupsPaginationTraits<DerivedClient>>
  ListDbParameterGroupsPaginator(const Model::ListDbParameterGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbParameterGroupsRequest,
                                             Pagination::ListDbParameterGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace TimestreamInfluxDB
}  // namespace Aws
