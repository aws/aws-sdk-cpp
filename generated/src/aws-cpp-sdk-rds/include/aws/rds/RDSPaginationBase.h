/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rds/model/DescribeBlueGreenDeploymentsPaginationTraits.h>
#include <aws/rds/model/DescribeCertificatesPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterAutomatedBackupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterBacktracksPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterEndpointsPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterParametersPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsPaginationTraits.h>
#include <aws/rds/model/DescribeDBClustersPaginationTraits.h>
#include <aws/rds/model/DescribeDBEngineVersionsPaginationTraits.h>
#include <aws/rds/model/DescribeDBInstanceAutomatedBackupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBInstancesPaginationTraits.h>
#include <aws/rds/model/DescribeDBLogFilesPaginationTraits.h>
#include <aws/rds/model/DescribeDBMajorEngineVersionsPaginationTraits.h>
#include <aws/rds/model/DescribeDBParameterGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBParametersPaginationTraits.h>
#include <aws/rds/model/DescribeDBProxiesPaginationTraits.h>
#include <aws/rds/model/DescribeDBProxyEndpointsPaginationTraits.h>
#include <aws/rds/model/DescribeDBProxyTargetGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBProxyTargetsPaginationTraits.h>
#include <aws/rds/model/DescribeDBRecommendationsPaginationTraits.h>
#include <aws/rds/model/DescribeDBSecurityGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBSnapshotTenantDatabasesPaginationTraits.h>
#include <aws/rds/model/DescribeDBSnapshotsPaginationTraits.h>
#include <aws/rds/model/DescribeDBSubnetGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersPaginationTraits.h>
#include <aws/rds/model/DescribeEngineDefaultParametersPaginationTraits.h>
#include <aws/rds/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/rds/model/DescribeEventsPaginationTraits.h>
#include <aws/rds/model/DescribeExportTasksPaginationTraits.h>
#include <aws/rds/model/DescribeGlobalClustersPaginationTraits.h>
#include <aws/rds/model/DescribeIntegrationsPaginationTraits.h>
#include <aws/rds/model/DescribeOptionGroupOptionsPaginationTraits.h>
#include <aws/rds/model/DescribeOptionGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsPaginationTraits.h>
#include <aws/rds/model/DescribePendingMaintenanceActionsPaginationTraits.h>
#include <aws/rds/model/DescribeReservedDBInstancesOfferingsPaginationTraits.h>
#include <aws/rds/model/DescribeReservedDBInstancesPaginationTraits.h>
#include <aws/rds/model/DescribeSourceRegionsPaginationTraits.h>
#include <aws/rds/model/DescribeTenantDatabasesPaginationTraits.h>
#include <aws/rds/model/DownloadDBLogFilePortionPaginationTraits.h>

#include <memory>

namespace Aws {
namespace RDS {

class RDSClient;

template <typename DerivedClient>
class RDSPaginationBase {
 public:
  /**
   * Create a paginator for DescribeBlueGreenDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBlueGreenDeploymentsRequest,
                                    Pagination::DescribeBlueGreenDeploymentsPaginationTraits<DerivedClient>>
  DescribeBlueGreenDeploymentsPaginator(const Model::DescribeBlueGreenDeploymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBlueGreenDeploymentsRequest,
                                             Pagination::DescribeBlueGreenDeploymentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCertificatesRequest,
                                    Pagination::DescribeCertificatesPaginationTraits<DerivedClient>>
  DescribeCertificatesPaginator(const Model::DescribeCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCertificatesRequest,
                                             Pagination::DescribeCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterAutomatedBackups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterAutomatedBackupsRequest,
                                    Pagination::DescribeDBClusterAutomatedBackupsPaginationTraits<DerivedClient>>
  DescribeDBClusterAutomatedBackupsPaginator(const Model::DescribeDBClusterAutomatedBackupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterAutomatedBackupsRequest,
                                             Pagination::DescribeDBClusterAutomatedBackupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterBacktracks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterBacktracksRequest,
                                    Pagination::DescribeDBClusterBacktracksPaginationTraits<DerivedClient>>
  DescribeDBClusterBacktracksPaginator(const Model::DescribeDBClusterBacktracksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterBacktracksRequest,
                                             Pagination::DescribeDBClusterBacktracksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

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
   * Create a paginator for DescribeDBInstanceAutomatedBackups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBInstanceAutomatedBackupsRequest,
                                    Pagination::DescribeDBInstanceAutomatedBackupsPaginationTraits<DerivedClient>>
  DescribeDBInstanceAutomatedBackupsPaginator(const Model::DescribeDBInstanceAutomatedBackupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBInstanceAutomatedBackupsRequest,
                                             Pagination::DescribeDBInstanceAutomatedBackupsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeDBLogFiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBLogFilesRequest,
                                    Pagination::DescribeDBLogFilesPaginationTraits<DerivedClient>>
  DescribeDBLogFilesPaginator(const Model::DescribeDBLogFilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBLogFilesRequest,
                                             Pagination::DescribeDBLogFilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBMajorEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBMajorEngineVersionsRequest,
                                    Pagination::DescribeDBMajorEngineVersionsPaginationTraits<DerivedClient>>
  DescribeDBMajorEngineVersionsPaginator(const Model::DescribeDBMajorEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBMajorEngineVersionsRequest,
                                             Pagination::DescribeDBMajorEngineVersionsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeDBProxies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxiesRequest,
                                    Pagination::DescribeDBProxiesPaginationTraits<DerivedClient>>
  DescribeDBProxiesPaginator(const Model::DescribeDBProxiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxiesRequest,
                                             Pagination::DescribeDBProxiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBProxyEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxyEndpointsRequest,
                                    Pagination::DescribeDBProxyEndpointsPaginationTraits<DerivedClient>>
  DescribeDBProxyEndpointsPaginator(const Model::DescribeDBProxyEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxyEndpointsRequest,
                                             Pagination::DescribeDBProxyEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBProxyTargetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxyTargetGroupsRequest,
                                    Pagination::DescribeDBProxyTargetGroupsPaginationTraits<DerivedClient>>
  DescribeDBProxyTargetGroupsPaginator(const Model::DescribeDBProxyTargetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxyTargetGroupsRequest,
                                             Pagination::DescribeDBProxyTargetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBProxyTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxyTargetsRequest,
                                    Pagination::DescribeDBProxyTargetsPaginationTraits<DerivedClient>>
  DescribeDBProxyTargetsPaginator(const Model::DescribeDBProxyTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBProxyTargetsRequest,
                                             Pagination::DescribeDBProxyTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBRecommendationsRequest,
                                    Pagination::DescribeDBRecommendationsPaginationTraits<DerivedClient>>
  DescribeDBRecommendationsPaginator(const Model::DescribeDBRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBRecommendationsRequest,
                                             Pagination::DescribeDBRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBSecurityGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSecurityGroupsRequest,
                                    Pagination::DescribeDBSecurityGroupsPaginationTraits<DerivedClient>>
  DescribeDBSecurityGroupsPaginator(const Model::DescribeDBSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSecurityGroupsRequest,
                                             Pagination::DescribeDBSecurityGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSnapshotsRequest,
                                    Pagination::DescribeDBSnapshotsPaginationTraits<DerivedClient>>
  DescribeDBSnapshotsPaginator(const Model::DescribeDBSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSnapshotsRequest,
                                             Pagination::DescribeDBSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBSnapshotTenantDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSnapshotTenantDatabasesRequest,
                                    Pagination::DescribeDBSnapshotTenantDatabasesPaginationTraits<DerivedClient>>
  DescribeDBSnapshotTenantDatabasesPaginator(const Model::DescribeDBSnapshotTenantDatabasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSnapshotTenantDatabasesRequest,
                                             Pagination::DescribeDBSnapshotTenantDatabasesPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeEngineDefaultClusterParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineDefaultClusterParametersRequest,
                                    Pagination::DescribeEngineDefaultClusterParametersPaginationTraits<DerivedClient>>
  DescribeEngineDefaultClusterParametersPaginator(const Model::DescribeEngineDefaultClusterParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineDefaultClusterParametersRequest,
                                             Pagination::DescribeEngineDefaultClusterParametersPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeExportTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExportTasksRequest,
                                    Pagination::DescribeExportTasksPaginationTraits<DerivedClient>>
  DescribeExportTasksPaginator(const Model::DescribeExportTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExportTasksRequest,
                                             Pagination::DescribeExportTasksPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIntegrationsRequest,
                                    Pagination::DescribeIntegrationsPaginationTraits<DerivedClient>>
  DescribeIntegrationsPaginator(const Model::DescribeIntegrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIntegrationsRequest,
                                             Pagination::DescribeIntegrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOptionGroupOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptionGroupOptionsRequest,
                                    Pagination::DescribeOptionGroupOptionsPaginationTraits<DerivedClient>>
  DescribeOptionGroupOptionsPaginator(const Model::DescribeOptionGroupOptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptionGroupOptionsRequest,
                                             Pagination::DescribeOptionGroupOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOptionGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptionGroupsRequest,
                                    Pagination::DescribeOptionGroupsPaginationTraits<DerivedClient>>
  DescribeOptionGroupsPaginator(const Model::DescribeOptionGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOptionGroupsRequest,
                                             Pagination::DescribeOptionGroupsPaginationTraits<DerivedClient>>{
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

  /**
   * Create a paginator for DescribeReservedDBInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedDBInstancesRequest,
                                    Pagination::DescribeReservedDBInstancesPaginationTraits<DerivedClient>>
  DescribeReservedDBInstancesPaginator(const Model::DescribeReservedDBInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedDBInstancesRequest,
                                             Pagination::DescribeReservedDBInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedDBInstancesOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedDBInstancesOfferingsRequest,
                                    Pagination::DescribeReservedDBInstancesOfferingsPaginationTraits<DerivedClient>>
  DescribeReservedDBInstancesOfferingsPaginator(const Model::DescribeReservedDBInstancesOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedDBInstancesOfferingsRequest,
                                             Pagination::DescribeReservedDBInstancesOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSourceRegions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceRegionsRequest,
                                    Pagination::DescribeSourceRegionsPaginationTraits<DerivedClient>>
  DescribeSourceRegionsPaginator(const Model::DescribeSourceRegionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceRegionsRequest,
                                             Pagination::DescribeSourceRegionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTenantDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTenantDatabasesRequest,
                                    Pagination::DescribeTenantDatabasesPaginationTraits<DerivedClient>>
  DescribeTenantDatabasesPaginator(const Model::DescribeTenantDatabasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTenantDatabasesRequest,
                                             Pagination::DescribeTenantDatabasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DownloadDBLogFilePortion operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DownloadDBLogFilePortionRequest,
                                    Pagination::DownloadDBLogFilePortionPaginationTraits<DerivedClient>>
  DownloadDBLogFilePortionPaginator(const Model::DownloadDBLogFilePortionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DownloadDBLogFilePortionRequest,
                                             Pagination::DownloadDBLogFilePortionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace RDS
}  // namespace Aws
