/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PartnerCentralBenefits pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/partnercentral-benefits/PartnerCentralBenefitsClientPagination.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsPaginationBase.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsPaginationTraits.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsPaginationTraits.h>
#include <aws/partnercentral-benefits/model/ListBenefitsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PartnerCentralBenefitsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PartnerCentralBenefitsPaginationCompilationTest, PartnerCentralBenefitsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
