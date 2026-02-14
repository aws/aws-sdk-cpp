/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rds/RDSClient.h>
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

namespace Aws {
namespace RDS {

using DescribeBlueGreenDeploymentsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeBlueGreenDeploymentsRequest,
                                      Pagination::DescribeBlueGreenDeploymentsPaginationTraits<RDSClient>>;
using DescribeCertificatesPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeCertificatesRequest,
                                                                        Pagination::DescribeCertificatesPaginationTraits<RDSClient>>;
using DescribeDBClusterAutomatedBackupsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBClusterAutomatedBackupsRequest,
                                      Pagination::DescribeDBClusterAutomatedBackupsPaginationTraits<RDSClient>>;
using DescribeDBClusterBacktracksPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBClusterBacktracksRequest,
                                      Pagination::DescribeDBClusterBacktracksPaginationTraits<RDSClient>>;
using DescribeDBClusterEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBClusterEndpointsRequest,
                                      Pagination::DescribeDBClusterEndpointsPaginationTraits<RDSClient>>;
using DescribeDBClusterParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBClusterParameterGroupsRequest,
                                      Pagination::DescribeDBClusterParameterGroupsPaginationTraits<RDSClient>>;
using DescribeDBClusterParametersPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBClusterParametersRequest,
                                      Pagination::DescribeDBClusterParametersPaginationTraits<RDSClient>>;
using DescribeDBClustersPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBClustersRequest,
                                                                      Pagination::DescribeDBClustersPaginationTraits<RDSClient>>;
using DescribeDBClusterSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBClusterSnapshotsRequest,
                                      Pagination::DescribeDBClusterSnapshotsPaginationTraits<RDSClient>>;
using DescribeDBEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBEngineVersionsRequest,
                                      Pagination::DescribeDBEngineVersionsPaginationTraits<RDSClient>>;
using DescribeDBInstanceAutomatedBackupsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBInstanceAutomatedBackupsRequest,
                                      Pagination::DescribeDBInstanceAutomatedBackupsPaginationTraits<RDSClient>>;
using DescribeDBInstancesPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBInstancesRequest,
                                                                       Pagination::DescribeDBInstancesPaginationTraits<RDSClient>>;
using DescribeDBLogFilesPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBLogFilesRequest,
                                                                      Pagination::DescribeDBLogFilesPaginationTraits<RDSClient>>;
using DescribeDBMajorEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBMajorEngineVersionsRequest,
                                      Pagination::DescribeDBMajorEngineVersionsPaginationTraits<RDSClient>>;
using DescribeDBParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBParameterGroupsRequest,
                                      Pagination::DescribeDBParameterGroupsPaginationTraits<RDSClient>>;
using DescribeDBParametersPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBParametersRequest,
                                                                        Pagination::DescribeDBParametersPaginationTraits<RDSClient>>;
using DescribeDBProxiesPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBProxiesRequest, Pagination::DescribeDBProxiesPaginationTraits<RDSClient>>;
using DescribeDBProxyEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBProxyEndpointsRequest,
                                      Pagination::DescribeDBProxyEndpointsPaginationTraits<RDSClient>>;
using DescribeDBProxyTargetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBProxyTargetGroupsRequest,
                                      Pagination::DescribeDBProxyTargetGroupsPaginationTraits<RDSClient>>;
using DescribeDBProxyTargetsPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBProxyTargetsRequest,
                                                                          Pagination::DescribeDBProxyTargetsPaginationTraits<RDSClient>>;
using DescribeDBRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBRecommendationsRequest,
                                      Pagination::DescribeDBRecommendationsPaginationTraits<RDSClient>>;
using DescribeDBSecurityGroupsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBSecurityGroupsRequest,
                                      Pagination::DescribeDBSecurityGroupsPaginationTraits<RDSClient>>;
using DescribeDBSnapshotsPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBSnapshotsRequest,
                                                                       Pagination::DescribeDBSnapshotsPaginationTraits<RDSClient>>;
using DescribeDBSnapshotTenantDatabasesPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBSnapshotTenantDatabasesRequest,
                                      Pagination::DescribeDBSnapshotTenantDatabasesPaginationTraits<RDSClient>>;
using DescribeDBSubnetGroupsPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeDBSubnetGroupsRequest,
                                                                          Pagination::DescribeDBSubnetGroupsPaginationTraits<RDSClient>>;
using DescribeEngineDefaultClusterParametersPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeEngineDefaultClusterParametersRequest,
                                      Pagination::DescribeEngineDefaultClusterParametersPaginationTraits<RDSClient>>;
using DescribeEngineDefaultParametersPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeEngineDefaultParametersRequest,
                                      Pagination::DescribeEngineDefaultParametersPaginationTraits<RDSClient>>;
using DescribeEventsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<RDSClient>>;
using DescribeEventSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeEventSubscriptionsRequest,
                                      Pagination::DescribeEventSubscriptionsPaginationTraits<RDSClient>>;
using DescribeExportTasksPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeExportTasksRequest,
                                                                       Pagination::DescribeExportTasksPaginationTraits<RDSClient>>;
using DescribeGlobalClustersPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeGlobalClustersRequest,
                                                                          Pagination::DescribeGlobalClustersPaginationTraits<RDSClient>>;
using DescribeIntegrationsPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeIntegrationsRequest,
                                                                        Pagination::DescribeIntegrationsPaginationTraits<RDSClient>>;
using DescribeOptionGroupOptionsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeOptionGroupOptionsRequest,
                                      Pagination::DescribeOptionGroupOptionsPaginationTraits<RDSClient>>;
using DescribeOptionGroupsPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeOptionGroupsRequest,
                                                                        Pagination::DescribeOptionGroupsPaginationTraits<RDSClient>>;
using DescribeOrderableDBInstanceOptionsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeOrderableDBInstanceOptionsRequest,
                                      Pagination::DescribeOrderableDBInstanceOptionsPaginationTraits<RDSClient>>;
using DescribePendingMaintenanceActionsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribePendingMaintenanceActionsRequest,
                                      Pagination::DescribePendingMaintenanceActionsPaginationTraits<RDSClient>>;
using DescribeReservedDBInstancesPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeReservedDBInstancesRequest,
                                      Pagination::DescribeReservedDBInstancesPaginationTraits<RDSClient>>;
using DescribeReservedDBInstancesOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeReservedDBInstancesOfferingsRequest,
                                      Pagination::DescribeReservedDBInstancesOfferingsPaginationTraits<RDSClient>>;
using DescribeSourceRegionsPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeSourceRegionsRequest,
                                                                         Pagination::DescribeSourceRegionsPaginationTraits<RDSClient>>;
using DescribeTenantDatabasesPaginator = Aws::Utils::Pagination::Paginator<RDSClient, Model::DescribeTenantDatabasesRequest,
                                                                           Pagination::DescribeTenantDatabasesPaginationTraits<RDSClient>>;
using DownloadDBLogFilePortionPaginator =
    Aws::Utils::Pagination::Paginator<RDSClient, Model::DownloadDBLogFilePortionRequest,
                                      Pagination::DownloadDBLogFilePortionPaginationTraits<RDSClient>>;

}  // namespace RDS
}  // namespace Aws
