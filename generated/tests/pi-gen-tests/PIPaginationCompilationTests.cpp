/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PI pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pi/PIClientPagination.h>
#include <aws/pi/PIPaginationBase.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsPaginationTraits.h>
#include <aws/pi/model/DescribeDimensionKeysPaginationTraits.h>
#include <aws/pi/model/ListAvailableResourceMetricsPaginationTraits.h>
#include <aws/pi/model/GetResourceMetricsPaginationTraits.h>
#include <aws/pi/model/ListAvailableResourceDimensionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PIPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PIPaginationCompilationTest, PIPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
