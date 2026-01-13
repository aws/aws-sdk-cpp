/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BCMDashboards pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bcm-dashboards/BCMDashboardsClientPagination.h>
#include <aws/bcm-dashboards/BCMDashboardsPaginationBase.h>
#include <aws/bcm-dashboards/model/ListDashboardsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BCMDashboardsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BCMDashboardsPaginationCompilationTest, BCMDashboardsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
