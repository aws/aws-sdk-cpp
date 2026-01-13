/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ARCRegionswitch pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/arc-region-switch/ARCRegionswitchClientPagination.h>
#include <aws/arc-region-switch/ARCRegionswitchPaginationBase.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksInRegionPaginationTraits.h>
#include <aws/arc-region-switch/model/GetPlanExecutionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlanExecutionEventsPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlanExecutionsPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlansInRegionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksPaginationTraits.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlansPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ARCRegionswitchPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ARCRegionswitchPaginationCompilationTest, ARCRegionswitchPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
