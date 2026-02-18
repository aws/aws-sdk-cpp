/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConfigService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/config/ConfigServiceClientPagination.h>
#include <aws/config/ConfigServicePaginationBase.h>
#include <aws/config/model/DescribeComplianceByConfigRulePaginationTraits.h>
#include <aws/config/model/DescribeRemediationExecutionStatusPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConfigRuleStatusesPaginationTraits.h>
#include <aws/config/model/GetComplianceDetailsByResourcePaginationTraits.h>
#include <aws/config/model/DescribeConfigRulesPaginationTraits.h>
#include <aws/config/model/SelectResourceConfigPaginationTraits.h>
#include <aws/config/model/DescribeAggregateComplianceByConfigRulesPaginationTraits.h>
#include <aws/config/model/GetComplianceDetailsByConfigRulePaginationTraits.h>
#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusPaginationTraits.h>
#include <aws/config/model/DescribeConfigurationAggregatorsPaginationTraits.h>
#include <aws/config/model/DescribeComplianceByResourcePaginationTraits.h>
#include <aws/config/model/DescribeConformancePackCompliancePaginationTraits.h>
#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusPaginationTraits.h>
#include <aws/config/model/ListResourceEvaluationsPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConformancePackStatusesPaginationTraits.h>
#include <aws/config/model/DescribeRemediationExceptionsPaginationTraits.h>
#include <aws/config/model/GetResourceConfigHistoryPaginationTraits.h>
#include <aws/config/model/ListConformancePackComplianceScoresPaginationTraits.h>
#include <aws/config/model/ListStoredQueriesPaginationTraits.h>
#include <aws/config/model/GetAggregateDiscoveredResourceCountsPaginationTraits.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusPaginationTraits.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRulePaginationTraits.h>
#include <aws/config/model/SelectAggregateResourceConfigPaginationTraits.h>
#include <aws/config/model/DescribeConformancePacksPaginationTraits.h>
#include <aws/config/model/DescribeRetentionConfigurationsPaginationTraits.h>
#include <aws/config/model/GetOrganizationConformancePackDetailedStatusPaginationTraits.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesPaginationTraits.h>
#include <aws/config/model/ListTagsForResourcePaginationTraits.h>
#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryPaginationTraits.h>
#include <aws/config/model/DescribeAggregationAuthorizationsPaginationTraits.h>
#include <aws/config/model/ListConfigurationRecordersPaginationTraits.h>
#include <aws/config/model/DescribeAggregateComplianceByConformancePacksPaginationTraits.h>
#include <aws/config/model/GetAggregateConformancePackComplianceSummaryPaginationTraits.h>
#include <aws/config/model/GetDiscoveredResourceCountsPaginationTraits.h>
#include <aws/config/model/DescribeConformancePackStatusPaginationTraits.h>
#include <aws/config/model/GetConformancePackComplianceDetailsPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConfigRulesPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConformancePacksPaginationTraits.h>
#include <aws/config/model/ListDiscoveredResourcesPaginationTraits.h>
#include <aws/config/model/DescribePendingAggregationRequestsPaginationTraits.h>
#include <aws/config/model/GetConformancePackComplianceSummaryPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConfigServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConfigServicePaginationCompilationTest, ConfigServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
