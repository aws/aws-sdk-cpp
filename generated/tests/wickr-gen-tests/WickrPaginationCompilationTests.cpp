/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Wickr pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/wickr/WickrClientPagination.h>
#include <aws/wickr/WickrPaginationBase.h>
#include <aws/wickr/model/ListNetworksPaginationTraits.h>
#include <aws/wickr/model/ListBotsPaginationTraits.h>
#include <aws/wickr/model/ListBlockedGuestUsersPaginationTraits.h>
#include <aws/wickr/model/ListSecurityGroupsPaginationTraits.h>
#include <aws/wickr/model/ListSecurityGroupUsersPaginationTraits.h>
#include <aws/wickr/model/ListDevicesForUserPaginationTraits.h>
#include <aws/wickr/model/ListUsersPaginationTraits.h>
#include <aws/wickr/model/ListGuestUsersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WickrPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WickrPaginationCompilationTest, WickrPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
