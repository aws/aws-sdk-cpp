/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PartnerCentralAccount pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/partnercentral-account/PartnerCentralAccountClientPagination.h>
#include <aws/partnercentral-account/PartnerCentralAccountPaginationBase.h>
#include <aws/partnercentral-account/model/ListConnectionsPaginationTraits.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsPaginationTraits.h>
#include <aws/partnercentral-account/model/ListPartnersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PartnerCentralAccountPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PartnerCentralAccountPaginationCompilationTest, PartnerCentralAccountPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
