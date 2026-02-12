/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Glue pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/glue/GlueClientPagination.h>
#include <aws/glue/GluePaginationBase.h>
#include <aws/glue/model/ListWorkflowsPaginationTraits.h>
#include <aws/glue/model/ListDataQualityRuleRecommendationRunsPaginationTraits.h>
#include <aws/glue/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/glue/model/GetTableVersionsPaginationTraits.h>
#include <aws/glue/model/ListDataQualityRulesetsPaginationTraits.h>
#include <aws/glue/model/GetMLTransformsPaginationTraits.h>
#include <aws/glue/model/ListDataQualityRulesetEvaluationRunsPaginationTraits.h>
#include <aws/glue/model/ListSessionsPaginationTraits.h>
#include <aws/glue/model/GetUserDefinedFunctionsPaginationTraits.h>
#include <aws/glue/model/ListEntitiesPaginationTraits.h>
#include <aws/glue/model/GetBlueprintRunsPaginationTraits.h>
#include <aws/glue/model/ListConnectionTypesPaginationTraits.h>
#include <aws/glue/model/GetUnfilteredPartitionsMetadataPaginationTraits.h>
#include <aws/glue/model/ListMLTransformsPaginationTraits.h>
#include <aws/glue/model/ListTableOptimizerRunsPaginationTraits.h>
#include <aws/glue/model/GetCrawlerMetricsPaginationTraits.h>
#include <aws/glue/model/GetColumnStatisticsTaskRunsPaginationTraits.h>
#include <aws/glue/model/GetDevEndpointsPaginationTraits.h>
#include <aws/glue/model/ListTriggersPaginationTraits.h>
#include <aws/glue/model/GetSecurityConfigurationsPaginationTraits.h>
#include <aws/glue/model/SearchTablesPaginationTraits.h>
#include <aws/glue/model/GetTriggersPaginationTraits.h>
#include <aws/glue/model/DescribeEntityPaginationTraits.h>
#include <aws/glue/model/GetJobRunsPaginationTraits.h>
#include <aws/glue/model/GetMLTaskRunsPaginationTraits.h>
#include <aws/glue/model/GetPartitionIndexesPaginationTraits.h>
#include <aws/glue/model/GetPartitionsPaginationTraits.h>
#include <aws/glue/model/GetWorkflowRunsPaginationTraits.h>
#include <aws/glue/model/GetConnectionsPaginationTraits.h>
#include <aws/glue/model/ListRegistriesPaginationTraits.h>
#include <aws/glue/model/ListColumnStatisticsTaskRunsPaginationTraits.h>
#include <aws/glue/model/ListSchemasPaginationTraits.h>
#include <aws/glue/model/ListCustomEntityTypesPaginationTraits.h>
#include <aws/glue/model/ListSchemaVersionsPaginationTraits.h>
#include <aws/glue/model/GetDatabasesPaginationTraits.h>
#include <aws/glue/model/ListBlueprintsPaginationTraits.h>
#include <aws/glue/model/GetJobsPaginationTraits.h>
#include <aws/glue/model/ListDevEndpointsPaginationTraits.h>
#include <aws/glue/model/ListCrawlersPaginationTraits.h>
#include <aws/glue/model/ListDataQualityResultsPaginationTraits.h>
#include <aws/glue/model/ListMaterializedViewRefreshTaskRunsPaginationTraits.h>
#include <aws/glue/model/ListUsageProfilesPaginationTraits.h>
#include <aws/glue/model/GetTablesPaginationTraits.h>
#include <aws/glue/model/GetClassifiersPaginationTraits.h>
#include <aws/glue/model/GetCrawlersPaginationTraits.h>
#include <aws/glue/model/ListJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GluePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GluePaginationCompilationTest, GluePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
