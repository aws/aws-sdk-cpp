/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeStarNotifications pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codestar-notifications/CodeStarNotificationsClientPagination.h>
#include <aws/codestar-notifications/CodeStarNotificationsPaginationBase.h>
#include <aws/codestar-notifications/model/ListNotificationRulesPaginationTraits.h>
#include <aws/codestar-notifications/model/ListEventTypesPaginationTraits.h>
#include <aws/codestar-notifications/model/ListTargetsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeStarNotificationsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeStarNotificationsPaginationCompilationTest, CodeStarNotificationsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
