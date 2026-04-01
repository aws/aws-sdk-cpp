/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Sustainability pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sustainability/SustainabilityClientPagination.h>
#include <aws/sustainability/SustainabilityPaginationBase.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SustainabilityPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SustainabilityPaginationCompilationTest, SustainabilityPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
