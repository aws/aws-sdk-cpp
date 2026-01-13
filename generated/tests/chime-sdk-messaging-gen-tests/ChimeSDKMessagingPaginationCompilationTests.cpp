/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ChimeSDKMessaging pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/chime-sdk-messaging/ChimeSDKMessagingClientPagination.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingPaginationBase.h>
#include <aws/chime-sdk-messaging/model/ListChannelMessagesPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsForAppInstanceUserPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelModeratorsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListSubChannelsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelBansPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/SearchChannelsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelsModeratedByAppInstanceUserPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelFlowsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ChimeSDKMessagingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ChimeSDKMessagingPaginationCompilationTest, ChimeSDKMessagingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
