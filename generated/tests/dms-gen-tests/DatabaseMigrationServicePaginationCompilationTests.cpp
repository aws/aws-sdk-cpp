/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DatabaseMigrationService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/dms/DatabaseMigrationServiceClientPagination.h>
#include <aws/dms/DatabaseMigrationServicePaginationBase.h>
#include <aws/dms/model/DescribePendingMaintenanceActionsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationInstancesPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationInstanceTaskLogsPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemasPaginationTraits.h>
#include <aws/dms/model/DescribeEndpointSettingsPaginationTraits.h>
#include <aws/dms/model/DescribeEndpointTypesPaginationTraits.h>
#include <aws/dms/model/DescribeTableStatisticsPaginationTraits.h>
#include <aws/dms/model/DescribeEngineVersionsPaginationTraits.h>
#include <aws/dms/model/DescribeDataMigrationsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTableStatisticsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorLsaAnalysisPaginationTraits.h>
#include <aws/dms/model/DescribeSchemasPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorDatabasesPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemaObjectSummaryPaginationTraits.h>
#include <aws/dms/model/DescribeMigrationProjectsPaginationTraits.h>
#include <aws/dms/model/DescribeConnectionsPaginationTraits.h>
#include <aws/dms/model/DescribeEventsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelExportsToTargetPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelAssessmentsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelConversionsPaginationTraits.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesPaginationTraits.h>
#include <aws/dms/model/DescribeDataProvidersPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelChildrenPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationsPaginationTraits.h>
#include <aws/dms/model/DescribeEndpointsPaginationTraits.h>
#include <aws/dms/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/dms/model/DescribeExtensionPackAssociationsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsPaginationTraits.h>
#include <aws/dms/model/DescribeRecommendationsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTaskIndividualAssessmentsPaginationTraits.h>
#include <aws/dms/model/DescribeApplicableIndividualAssessmentsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelCreationsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationConfigsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelImportsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTasksPaginationTraits.h>
#include <aws/dms/model/DescribeCertificatesPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorCollectorsPaginationTraits.h>
#include <aws/dms/model/DescribeInstanceProfilesPaginationTraits.h>
#include <aws/dms/model/DescribeRecommendationLimitationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DatabaseMigrationServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DatabaseMigrationServicePaginationCompilationTest, DatabaseMigrationServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
