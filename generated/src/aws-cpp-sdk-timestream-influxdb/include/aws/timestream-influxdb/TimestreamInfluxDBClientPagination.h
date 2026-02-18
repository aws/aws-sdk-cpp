/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBClient.h>
#include <aws/timestream-influxdb/model/ListDbClustersPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbInstancesPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsPaginationTraits.h>

namespace Aws {
namespace TimestreamInfluxDB {

using ListDbClustersPaginator = Aws::Utils::Pagination::Paginator<TimestreamInfluxDBClient, Model::ListDbClustersRequest,
                                                                  Pagination::ListDbClustersPaginationTraits<TimestreamInfluxDBClient>>;
using ListDbInstancesPaginator = Aws::Utils::Pagination::Paginator<TimestreamInfluxDBClient, Model::ListDbInstancesRequest,
                                                                   Pagination::ListDbInstancesPaginationTraits<TimestreamInfluxDBClient>>;
using ListDbInstancesForClusterPaginator =
    Aws::Utils::Pagination::Paginator<TimestreamInfluxDBClient, Model::ListDbInstancesForClusterRequest,
                                      Pagination::ListDbInstancesForClusterPaginationTraits<TimestreamInfluxDBClient>>;
using ListDbParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<TimestreamInfluxDBClient, Model::ListDbParameterGroupsRequest,
                                      Pagination::ListDbParameterGroupsPaginationTraits<TimestreamInfluxDBClient>>;

}  // namespace TimestreamInfluxDB
}  // namespace Aws
