/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConnectCampaignsV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/connectcampaignsv2/ConnectCampaignsV2ClientPagination.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2PaginationBase.h>
#include <aws/connectcampaignsv2/model/ListCampaignsPaginationTraits.h>
#include <aws/connectcampaignsv2/model/ListConnectInstanceIntegrationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectCampaignsV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectCampaignsV2PaginationCompilationTest, ConnectCampaignsV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
