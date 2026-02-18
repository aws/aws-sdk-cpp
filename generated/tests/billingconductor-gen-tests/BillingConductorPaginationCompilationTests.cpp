/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BillingConductor pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/billingconductor/BillingConductorClientPagination.h>
#include <aws/billingconductor/BillingConductorPaginationBase.h>
#include <aws/billingconductor/model/ListCustomLineItemsPaginationTraits.h>
#include <aws/billingconductor/model/GetBillingGroupCostReportPaginationTraits.h>
#include <aws/billingconductor/model/ListBillingGroupCostReportsPaginationTraits.h>
#include <aws/billingconductor/model/ListCustomLineItemVersionsPaginationTraits.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemPaginationTraits.h>
#include <aws/billingconductor/model/ListPricingRulesPaginationTraits.h>
#include <aws/billingconductor/model/ListAccountAssociationsPaginationTraits.h>
#include <aws/billingconductor/model/ListBillingGroupsPaginationTraits.h>
#include <aws/billingconductor/model/ListPricingPlansAssociatedWithPricingRulePaginationTraits.h>
#include <aws/billingconductor/model/ListPricingPlansPaginationTraits.h>
#include <aws/billingconductor/model/ListPricingRulesAssociatedToPricingPlanPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BillingConductorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BillingConductorPaginationCompilationTest, BillingConductorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
