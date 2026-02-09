/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConnectCampaigns pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/connectcampaigns/ConnectCampaignsClientPagination.h>
#include <aws/connectcampaigns/ConnectCampaignsPaginationBase.h>
#include <aws/connectcampaigns/model/ListCampaignsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectCampaignsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectCampaignsPaginationCompilationTest, ConnectCampaignsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
