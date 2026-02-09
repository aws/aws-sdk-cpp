/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Notifications pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/notifications/NotificationsClientPagination.h>
#include <aws/notifications/NotificationsPaginationBase.h>
#include <aws/notifications/model/ListNotificationHubsPaginationTraits.h>
#include <aws/notifications/model/ListEventRulesPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationEventsPaginationTraits.h>
#include <aws/notifications/model/ListMemberAccountsPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationChildEventsPaginationTraits.h>
#include <aws/notifications/model/ListChannelsPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationChannelAssociationsPaginationTraits.h>
#include <aws/notifications/model/ListOrganizationalUnitsPaginationTraits.h>
#include <aws/notifications/model/ListNotificationEventsPaginationTraits.h>
#include <aws/notifications/model/ListManagedNotificationConfigurationsPaginationTraits.h>
#include <aws/notifications/model/ListNotificationConfigurationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NotificationsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NotificationsPaginationCompilationTest, NotificationsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
