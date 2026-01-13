/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/memorydb/MemoryDBClient.h>
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

namespace Aws {
namespace MemoryDB {

using DescribeACLsPaginator =
    Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeACLsRequest, Pagination::DescribeACLsPaginationTraits<MemoryDBClient>>;
using DescribeClustersPaginator = Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeClustersRequest,
                                                                    Pagination::DescribeClustersPaginationTraits<MemoryDBClient>>;
using DescribeEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeEngineVersionsRequest,
                                      Pagination::DescribeEngineVersionsPaginationTraits<MemoryDBClient>>;
using DescribeEventsPaginator = Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeEventsRequest,
                                                                  Pagination::DescribeEventsPaginationTraits<MemoryDBClient>>;
using DescribeMultiRegionClustersPaginator =
    Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeMultiRegionClustersRequest,
                                      Pagination::DescribeMultiRegionClustersPaginationTraits<MemoryDBClient>>;
using DescribeParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeParameterGroupsRequest,
                                      Pagination::DescribeParameterGroupsPaginationTraits<MemoryDBClient>>;
using DescribeParametersPaginator = Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeParametersRequest,
                                                                      Pagination::DescribeParametersPaginationTraits<MemoryDBClient>>;
using DescribeReservedNodesPaginator = Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeReservedNodesRequest,
                                                                         Pagination::DescribeReservedNodesPaginationTraits<MemoryDBClient>>;
using DescribeReservedNodesOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeReservedNodesOfferingsRequest,
                                      Pagination::DescribeReservedNodesOfferingsPaginationTraits<MemoryDBClient>>;
using DescribeServiceUpdatesPaginator =
    Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeServiceUpdatesRequest,
                                      Pagination::DescribeServiceUpdatesPaginationTraits<MemoryDBClient>>;
using DescribeSnapshotsPaginator = Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeSnapshotsRequest,
                                                                     Pagination::DescribeSnapshotsPaginationTraits<MemoryDBClient>>;
using DescribeSubnetGroupsPaginator = Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeSubnetGroupsRequest,
                                                                        Pagination::DescribeSubnetGroupsPaginationTraits<MemoryDBClient>>;
using DescribeUsersPaginator = Aws::Utils::Pagination::Paginator<MemoryDBClient, Model::DescribeUsersRequest,
                                                                 Pagination::DescribeUsersPaginationTraits<MemoryDBClient>>;

}  // namespace MemoryDB
}  // namespace Aws
