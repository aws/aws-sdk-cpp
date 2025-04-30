/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/chatbot/ChatbotClient.h>
#include <aws/chatbot/ChatbotEndpointProvider.h>
#include <aws/chatbot/ChatbotEndpointRules.h>
#include <aws/chatbot/ChatbotErrorMarshaller.h>
#include <aws/chatbot/ChatbotErrors.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/chatbot/ChatbotServiceClientModel.h>
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/AccountPreferences.h>
#include <aws/chatbot/model/AssociateToConfigurationRequest.h>
#include <aws/chatbot/model/AssociateToConfigurationResult.h>
#include <aws/chatbot/model/AssociationListing.h>
#include <aws/chatbot/model/ChimeWebhookConfiguration.h>
#include <aws/chatbot/model/ConfiguredTeam.h>
#include <aws/chatbot/model/CreateChimeWebhookConfigurationRequest.h>
#include <aws/chatbot/model/CreateChimeWebhookConfigurationResult.h>
#include <aws/chatbot/model/CreateCustomActionRequest.h>
#include <aws/chatbot/model/CreateCustomActionResult.h>
#include <aws/chatbot/model/CreateMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/CreateMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/CreateSlackChannelConfigurationRequest.h>
#include <aws/chatbot/model/CreateSlackChannelConfigurationResult.h>
#include <aws/chatbot/model/CustomAction.h>
#include <aws/chatbot/model/CustomActionAttachment.h>
#include <aws/chatbot/model/CustomActionAttachmentCriteria.h>
#include <aws/chatbot/model/CustomActionAttachmentCriteriaOperator.h>
#include <aws/chatbot/model/CustomActionDefinition.h>
#include <aws/chatbot/model/DeleteChimeWebhookConfigurationRequest.h>
#include <aws/chatbot/model/DeleteChimeWebhookConfigurationResult.h>
#include <aws/chatbot/model/DeleteCustomActionRequest.h>
#include <aws/chatbot/model/DeleteCustomActionResult.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsConfiguredTeamRequest.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsConfiguredTeamResult.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsUserIdentityRequest.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsUserIdentityResult.h>
#include <aws/chatbot/model/DeleteSlackChannelConfigurationRequest.h>
#include <aws/chatbot/model/DeleteSlackChannelConfigurationResult.h>
#include <aws/chatbot/model/DeleteSlackUserIdentityRequest.h>
#include <aws/chatbot/model/DeleteSlackUserIdentityResult.h>
#include <aws/chatbot/model/DeleteSlackWorkspaceAuthorizationRequest.h>
#include <aws/chatbot/model/DeleteSlackWorkspaceAuthorizationResult.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsRequest.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsResult.h>
#include <aws/chatbot/model/DescribeSlackChannelConfigurationsRequest.h>
#include <aws/chatbot/model/DescribeSlackChannelConfigurationsResult.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesRequest.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesResult.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesRequest.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesResult.h>
#include <aws/chatbot/model/DisassociateFromConfigurationRequest.h>
#include <aws/chatbot/model/DisassociateFromConfigurationResult.h>
#include <aws/chatbot/model/GetAccountPreferencesRequest.h>
#include <aws/chatbot/model/GetAccountPreferencesResult.h>
#include <aws/chatbot/model/GetCustomActionRequest.h>
#include <aws/chatbot/model/GetCustomActionResult.h>
#include <aws/chatbot/model/GetMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/GetMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/ListAssociationsRequest.h>
#include <aws/chatbot/model/ListAssociationsResult.h>
#include <aws/chatbot/model/ListCustomActionsRequest.h>
#include <aws/chatbot/model/ListCustomActionsResult.h>
#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsResult.h>
#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsResult.h>
#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesResult.h>
#include <aws/chatbot/model/ListTagsForResourceRequest.h>
#include <aws/chatbot/model/ListTagsForResourceResult.h>
#include <aws/chatbot/model/SlackChannelConfiguration.h>
#include <aws/chatbot/model/SlackUserIdentity.h>
#include <aws/chatbot/model/SlackWorkspace.h>
#include <aws/chatbot/model/Tag.h>
#include <aws/chatbot/model/TagResourceRequest.h>
#include <aws/chatbot/model/TagResourceResult.h>
#include <aws/chatbot/model/TeamsChannelConfiguration.h>
#include <aws/chatbot/model/TeamsUserIdentity.h>
#include <aws/chatbot/model/UntagResourceRequest.h>
#include <aws/chatbot/model/UntagResourceResult.h>
#include <aws/chatbot/model/UpdateAccountPreferencesRequest.h>
#include <aws/chatbot/model/UpdateAccountPreferencesResult.h>
#include <aws/chatbot/model/UpdateChimeWebhookConfigurationRequest.h>
#include <aws/chatbot/model/UpdateChimeWebhookConfigurationResult.h>
#include <aws/chatbot/model/UpdateCustomActionRequest.h>
#include <aws/chatbot/model/UpdateCustomActionResult.h>
#include <aws/chatbot/model/UpdateMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/UpdateMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/UpdateSlackChannelConfigurationRequest.h>
#include <aws/chatbot/model/UpdateSlackChannelConfigurationResult.h>

using ChatbotIncludeTest = ::testing::Test;

TEST_F(ChatbotIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::chatbot::ChatbotClient>("ChatbotIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
