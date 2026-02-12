/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for chatbot pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/chatbot/ChatbotClientPagination.h>
#include <aws/chatbot/ChatbotPaginationBase.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsPaginationTraits.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesPaginationTraits.h>
#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesPaginationTraits.h>
#include <aws/chatbot/model/ListAssociationsPaginationTraits.h>
#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsPaginationTraits.h>
#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsPaginationTraits.h>
#include <aws/chatbot/model/DescribeSlackChannelConfigurationsPaginationTraits.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesPaginationTraits.h>
#include <aws/chatbot/model/ListCustomActionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class chatbotPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(chatbotPaginationCompilationTest, chatbotPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
