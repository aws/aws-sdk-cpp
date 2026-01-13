/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Neptune {

class NeptuneClient;

template <typename DerivedClient>
class NeptunePaginationBase {
 public:
  /**
   * Create a paginator for DescribeDBClusterEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterEndpointsRequest,
                                    Pagination::DescribeDBClusterEndpointsPaginationTraits<DerivedClient>>
  DescribeDBClusterEndpointsPaginator(const Model::DescribeDBClusterEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterEndpointsRequest,
                                             Pagination::DescribeDBClusterEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterParameterGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParameterGroupsRequest,
                                    Pagination::DescribeDBClusterParameterGroupsPaginationTraits<DerivedClient>>
  DescribeDBClusterParameterGroupsPaginator(const Model::DescribeDBClusterParameterGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParameterGroupsRequest,
                                             Pagination::DescribeDBClusterParameterGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParametersRequest,
                                    Pagination::DescribeDBClusterParametersPaginationTraits<DerivedClient>>
  DescribeDBClusterParametersPaginator(const Model::DescribeDBClusterParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParametersRequest,
                                             Pagination::DescribeDBClusterParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClustersRequest,
                                    Pagination::DescribeDBClustersPaginationTraits<DerivedClient>>
  DescribeDBClustersPaginator(const Model::DescribeDBClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClustersRequest,
                                             Pagination::DescribeDBClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterSnapshotsRequest,
                                    Pagination::DescribeDBClusterSnapshotsPaginationTraits<DerivedClient>>
  DescribeDBClusterSnapshotsPaginator(const Model::DescribeDBClusterSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterSnapshotsRequest,
                                             Pagination::DescribeDBClusterSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBEngineVersionsRequest,
                                    Pagination::DescribeDBEngineVersionsPaginationTraits<DerivedClient>>
  DescribeDBEngineVersionsPaginator(const Model::DescribeDBEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBEngineVersionsRequest,
                                             Pagination::DescribeDBEngineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBInstancesRequest,
                                    Pagination::DescribeDBInstancesPaginationTraits<DerivedClient>>
  DescribeDBInstancesPaginator(const Model::DescribeDBInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBInstancesRequest,
                                             Pagination::DescribeDBInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBParameterGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBParameterGroupsRequest,
                                    Pagination::DescribeDBParameterGroupsPaginationTraits<DerivedClient>>
  DescribeDBParameterGroupsPaginator(const Model::DescribeDBParameterGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBParameterGroupsRequest,
                                             Pagination::DescribeDBParameterGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBParametersRequest,
                                    Pagination::DescribeDBParametersPaginationTraits<DerivedClient>>
  DescribeDBParametersPaginator(const Model::DescribeDBParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBParametersRequest,
                                             Pagination::DescribeDBParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBSubnetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSubnetGroupsRequest,
                                    Pagination::DescribeDBSubnetGroupsPaginationTraits<DerivedClient>>
  DescribeDBSubnetGroupsPaginator(const Model::DescribeDBSubnetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSubnetGroupsRequest,
                                             Pagination::DescribeDBSubnetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEngineDefaultParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineDefaultParametersRequest,
                                    Pagination::DescribeEngineDefaultParametersPaginationTraits<DerivedClient>>
  DescribeEngineDefaultParametersPaginator(const Model::DescribeEngineDefaultParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineDefaultParametersRequest,
                                             Pagination::DescribeEngineDefaultParametersPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeEventSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                    Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>
  DescribeEventSubscriptionsPaginator(const Model::DescribeEventSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                             Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeGlobalClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalClustersRequest,
                                    Pagination::DescribeGlobalClustersPaginationTraits<DerivedClient>>
  DescribeGlobalClustersPaginator(const Model::DescribeGlobalClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalClustersRequest,
                                             Pagination::DescribeGlobalClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrderableDBInstanceOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableDBInstanceOptionsRequest,
                                    Pagination::DescribeOrderableDBInstanceOptionsPaginationTraits<DerivedClient>>
  DescribeOrderableDBInstanceOptionsPaginator(const Model::DescribeOrderableDBInstanceOptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableDBInstanceOptionsRequest,
                                             Pagination::DescribeOrderableDBInstanceOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePendingMaintenanceActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingMaintenanceActionsRequest,
                                    Pagination::DescribePendingMaintenanceActionsPaginationTraits<DerivedClient>>
  DescribePendingMaintenanceActionsPaginator(const Model::DescribePendingMaintenanceActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingMaintenanceActionsRequest,
                                             Pagination::DescribePendingMaintenanceActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Neptune
}  // namespace Aws
