/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/neptune/NeptuneClient.h>
#include <aws/neptune/model/DescribeDBClusterEndpointsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClusterParameterGroupsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClusterParametersPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBClustersPaginationTraits.h>
#include <aws/neptune/model/DescribeDBEngineVersionsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBInstancesPaginationTraits.h>
#include <aws/neptune/model/DescribeDBParameterGroupsPaginationTraits.h>
#include <aws/neptune/model/DescribeDBParametersPaginationTraits.h>
#include <aws/neptune/model/DescribeDBSubnetGroupsPaginationTraits.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersPaginationTraits.h>
#include <aws/neptune/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/neptune/model/DescribeEventsPaginationTraits.h>
#include <aws/neptune/model/DescribeGlobalClustersPaginationTraits.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsPaginationTraits.h>
#include <aws/neptune/model/DescribePendingMaintenanceActionsPaginationTraits.h>

namespace Aws {
namespace Neptune {

using DescribeDBClusterEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBClusterEndpointsRequest,
                                      Pagination::DescribeDBClusterEndpointsPaginationTraits<NeptuneClient>>;
using DescribeDBClusterParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBClusterParameterGroupsRequest,
                                      Pagination::DescribeDBClusterParameterGroupsPaginationTraits<NeptuneClient>>;
using DescribeDBClusterParametersPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBClusterParametersRequest,
                                      Pagination::DescribeDBClusterParametersPaginationTraits<NeptuneClient>>;
using DescribeDBClustersPaginator = Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBClustersRequest,
                                                                      Pagination::DescribeDBClustersPaginationTraits<NeptuneClient>>;
using DescribeDBClusterSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBClusterSnapshotsRequest,
                                      Pagination::DescribeDBClusterSnapshotsPaginationTraits<NeptuneClient>>;
using DescribeDBEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBEngineVersionsRequest,
                                      Pagination::DescribeDBEngineVersionsPaginationTraits<NeptuneClient>>;
using DescribeDBInstancesPaginator = Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBInstancesRequest,
                                                                       Pagination::DescribeDBInstancesPaginationTraits<NeptuneClient>>;
using DescribeDBParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBParameterGroupsRequest,
                                      Pagination::DescribeDBParameterGroupsPaginationTraits<NeptuneClient>>;
using DescribeDBParametersPaginator = Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBParametersRequest,
                                                                        Pagination::DescribeDBParametersPaginationTraits<NeptuneClient>>;
using DescribeDBSubnetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeDBSubnetGroupsRequest,
                                      Pagination::DescribeDBSubnetGroupsPaginationTraits<NeptuneClient>>;
using DescribeEngineDefaultParametersPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeEngineDefaultParametersRequest,
                                      Pagination::DescribeEngineDefaultParametersPaginationTraits<NeptuneClient>>;
using DescribeEventsPaginator = Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeEventsRequest,
                                                                  Pagination::DescribeEventsPaginationTraits<NeptuneClient>>;
using DescribeEventSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeEventSubscriptionsRequest,
                                      Pagination::DescribeEventSubscriptionsPaginationTraits<NeptuneClient>>;
using DescribeGlobalClustersPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeGlobalClustersRequest,
                                      Pagination::DescribeGlobalClustersPaginationTraits<NeptuneClient>>;
using DescribeOrderableDBInstanceOptionsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribeOrderableDBInstanceOptionsRequest,
                                      Pagination::DescribeOrderableDBInstanceOptionsPaginationTraits<NeptuneClient>>;
using DescribePendingMaintenanceActionsPaginator =
    Aws::Utils::Pagination::Paginator<NeptuneClient, Model::DescribePendingMaintenanceActionsRequest,
                                      Pagination::DescribePendingMaintenanceActionsPaginationTraits<NeptuneClient>>;

}  // namespace Neptune
}  // namespace Aws
