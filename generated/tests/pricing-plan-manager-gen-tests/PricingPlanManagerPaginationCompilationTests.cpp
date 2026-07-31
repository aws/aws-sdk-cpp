/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PricingPlanManager pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pricing-plan-manager/PricingPlanManagerClientPagination.h>
#include <aws/pricing-plan-manager/PricingPlanManagerPaginationBase.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PricingPlanManagerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PricingPlanManagerPaginationCompilationTest, PricingPlanManagerPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
