/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for RDS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/rds/RDSClientPagination.h>
#include <aws/rds/RDSPaginationBase.h>
#include <aws/rds/model/DescribeDBProxyEndpointsPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBEngineVersionsPaginationTraits.h>
#include <aws/rds/model/DescribeDBParameterGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersPaginationTraits.h>
#include <aws/rds/model/DescribeTenantDatabasesPaginationTraits.h>
#include <aws/rds/model/DownloadDBLogFilePortionPaginationTraits.h>
#include <aws/rds/model/DescribeExportTasksPaginationTraits.h>
#include <aws/rds/model/DescribeDBClustersPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsPaginationTraits.h>
#include <aws/rds/model/DescribeDBProxyTargetGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBProxyTargetsPaginationTraits.h>
#include <aws/rds/model/DescribePendingMaintenanceActionsPaginationTraits.h>
#include <aws/rds/model/DescribeDBInstanceAutomatedBackupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBSnapshotsPaginationTraits.h>
#include <aws/rds/model/DescribeReservedDBInstancesPaginationTraits.h>
#include <aws/rds/model/DescribeDBProxiesPaginationTraits.h>
#include <aws/rds/model/DescribeDBParametersPaginationTraits.h>
#include <aws/rds/model/DescribeDBRecommendationsPaginationTraits.h>
#include <aws/rds/model/DescribeReservedDBInstancesOfferingsPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterBacktracksPaginationTraits.h>
#include <aws/rds/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/rds/model/DescribeGlobalClustersPaginationTraits.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsPaginationTraits.h>
#include <aws/rds/model/DescribeDBInstancesPaginationTraits.h>
#include <aws/rds/model/DescribeOptionGroupOptionsPaginationTraits.h>
#include <aws/rds/model/DescribeCertificatesPaginationTraits.h>
#include <aws/rds/model/DescribeEventsPaginationTraits.h>
#include <aws/rds/model/DescribeDBSubnetGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBLogFilesPaginationTraits.h>
#include <aws/rds/model/DescribeDBMajorEngineVersionsPaginationTraits.h>
#include <aws/rds/model/DescribeIntegrationsPaginationTraits.h>
#include <aws/rds/model/DescribeOptionGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBSecurityGroupsPaginationTraits.h>
#include <aws/rds/model/DescribeEngineDefaultParametersPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterAutomatedBackupsPaginationTraits.h>
#include <aws/rds/model/DescribeDBSnapshotTenantDatabasesPaginationTraits.h>
#include <aws/rds/model/DescribeBlueGreenDeploymentsPaginationTraits.h>
#include <aws/rds/model/DescribeSourceRegionsPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterParametersPaginationTraits.h>
#include <aws/rds/model/DescribeDBClusterEndpointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RDSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RDSPaginationCompilationTest, RDSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
