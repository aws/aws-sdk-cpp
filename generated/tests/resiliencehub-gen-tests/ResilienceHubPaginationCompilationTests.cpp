/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ResilienceHub pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/resiliencehub/ResilienceHubClientPagination.h>
#include <aws/resiliencehub/ResilienceHubPaginationBase.h>
#include <aws/resiliencehub/model/ListAppComponentCompliancesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionAppComponentsPaginationTraits.h>
#include <aws/resiliencehub/model/ListResiliencyPoliciesPaginationTraits.h>
#include <aws/resiliencehub/model/ListResourceGroupingRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListMetricsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionResourcesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppAssessmentsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionResourceMappingsPaginationTraits.h>
#include <aws/resiliencehub/model/ListRecommendationTemplatesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppInputSourcesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppAssessmentResourceDriftsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppAssessmentComplianceDriftsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAlarmRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListSuggestedResiliencyPoliciesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppComponentRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListUnsupportedAppVersionResourcesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppsPaginationTraits.h>
#include <aws/resiliencehub/model/ListTestRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListSopRecommendationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ResilienceHubPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ResilienceHubPaginationCompilationTest, ResilienceHubPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
