/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PartnerCentralChannel pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/partnercentral-channel/PartnerCentralChannelClientPagination.h>
#include <aws/partnercentral-channel/PartnerCentralChannelPaginationBase.h>
#include <aws/partnercentral-channel/model/ListRelationshipsPaginationTraits.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesPaginationTraits.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PartnerCentralChannelPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PartnerCentralChannelPaginationCompilationTest, PartnerCentralChannelPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
