/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NotificationsContacts pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/notificationscontacts/NotificationsContactsClientPagination.h>
#include <aws/notificationscontacts/NotificationsContactsPaginationBase.h>
#include <aws/notificationscontacts/model/ListEmailContactsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NotificationsContactsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NotificationsContactsPaginationCompilationTest, NotificationsContactsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
