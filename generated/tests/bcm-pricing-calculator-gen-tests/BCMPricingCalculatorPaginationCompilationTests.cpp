/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BCMPricingCalculator pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bcm-pricing-calculator/BCMPricingCalculatorClientPagination.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorPaginationBase.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputCommitmentModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioCommitmentModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimatesPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioUsageModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateCommitmentsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateLineItemsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenariosPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputUsageModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimateUsagePaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BCMPricingCalculatorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BCMPricingCalculatorPaginationCompilationTest, BCMPricingCalculatorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
