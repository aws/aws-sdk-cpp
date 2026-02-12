/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Billing pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/billing/BillingClientPagination.h>
#include <aws/billing/BillingPaginationBase.h>
#include <aws/billing/model/ListBillingViewsPaginationTraits.h>
#include <aws/billing/model/ListSourceViewsForBillingViewPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BillingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BillingPaginationCompilationTest, BillingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
