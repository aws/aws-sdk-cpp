/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Pricing pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pricing/PricingClientPagination.h>
#include <aws/pricing/PricingPaginationBase.h>
#include <aws/pricing/model/ListPriceListsPaginationTraits.h>
#include <aws/pricing/model/GetAttributeValuesPaginationTraits.h>
#include <aws/pricing/model/DescribeServicesPaginationTraits.h>
#include <aws/pricing/model/GetProductsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PricingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PricingPaginationCompilationTest, PricingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
