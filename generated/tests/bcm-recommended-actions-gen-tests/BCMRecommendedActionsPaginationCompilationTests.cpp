/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BCMRecommendedActions pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bcm-recommended-actions/BCMRecommendedActionsClientPagination.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsPaginationBase.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BCMRecommendedActionsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BCMRecommendedActionsPaginationCompilationTest, BCMRecommendedActionsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
