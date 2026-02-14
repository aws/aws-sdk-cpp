/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for XRay pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/xray/XRayClientPagination.h>
#include <aws/xray/XRayPaginationBase.h>
#include <aws/xray/model/GetTraceGraphPaginationTraits.h>
#include <aws/xray/model/GetGroupsPaginationTraits.h>
#include <aws/xray/model/GetInsightEventsPaginationTraits.h>
#include <aws/xray/model/BatchGetTracesPaginationTraits.h>
#include <aws/xray/model/GetServiceGraphPaginationTraits.h>
#include <aws/xray/model/GetTimeSeriesServiceStatisticsPaginationTraits.h>
#include <aws/xray/model/GetSamplingRulesPaginationTraits.h>
#include <aws/xray/model/ListTagsForResourcePaginationTraits.h>
#include <aws/xray/model/GetInsightSummariesPaginationTraits.h>
#include <aws/xray/model/GetSamplingStatisticSummariesPaginationTraits.h>
#include <aws/xray/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/xray/model/GetTraceSummariesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class XRayPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(XRayPaginationCompilationTest, XRayPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
