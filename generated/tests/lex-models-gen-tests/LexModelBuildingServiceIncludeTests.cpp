/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lex-models/LexModelBuildingServiceClient.h>
#include <aws/lex-models/LexModelBuildingServiceEndpointProvider.h>
#include <aws/lex-models/LexModelBuildingServiceErrorMarshaller.h>
#include <aws/lex-models/LexModelBuildingServiceErrors.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/lex-models/LexModelBuildingServiceServiceClientModel.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/internal/LexModelBuildingServiceEndpointRules.h>
#include <aws/lex-models/model/BotAliasMetadata.h>
#include <aws/lex-models/model/BotChannelAssociation.h>
#include <aws/lex-models/model/BotMetadata.h>
#include <aws/lex-models/model/BuiltinIntentMetadata.h>
#include <aws/lex-models/model/BuiltinIntentSlot.h>
#include <aws/lex-models/model/BuiltinSlotTypeMetadata.h>
#include <aws/lex-models/model/ChannelStatus.h>
#include <aws/lex-models/model/ChannelType.h>
#include <aws/lex-models/model/CodeHook.h>
#include <aws/lex-models/model/ContentType.h>
#include <aws/lex-models/model/ConversationLogsRequest.h>
#include <aws/lex-models/model/ConversationLogsResponse.h>
#include <aws/lex-models/model/Destination.h>
#include <aws/lex-models/model/EnumerationValue.h>
#include <aws/lex-models/model/ExportStatus.h>
#include <aws/lex-models/model/ExportType.h>
#include <aws/lex-models/model/FollowUpPrompt.h>
#include <aws/lex-models/model/FulfillmentActivity.h>
#include <aws/lex-models/model/FulfillmentActivityType.h>
#include <aws/lex-models/model/ImportStatus.h>
#include <aws/lex-models/model/InputContext.h>
#include <aws/lex-models/model/Intent.h>
#include <aws/lex-models/model/IntentMetadata.h>
#include <aws/lex-models/model/KendraConfiguration.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/LogSettingsRequest.h>
#include <aws/lex-models/model/LogSettingsResponse.h>
#include <aws/lex-models/model/LogType.h>
#include <aws/lex-models/model/MergeStrategy.h>
#include <aws/lex-models/model/Message.h>
#include <aws/lex-models/model/MigrationAlert.h>
#include <aws/lex-models/model/MigrationAlertType.h>
#include <aws/lex-models/model/MigrationSortAttribute.h>
#include <aws/lex-models/model/MigrationStatus.h>
#include <aws/lex-models/model/MigrationStrategy.h>
#include <aws/lex-models/model/MigrationSummary.h>
#include <aws/lex-models/model/ObfuscationSetting.h>
#include <aws/lex-models/model/OutputContext.h>
#include <aws/lex-models/model/ProcessBehavior.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/lex-models/model/ReferenceType.h>
#include <aws/lex-models/model/ResourceReference.h>
#include <aws/lex-models/model/ResourceType.h>
#include <aws/lex-models/model/Slot.h>
#include <aws/lex-models/model/SlotConstraint.h>
#include <aws/lex-models/model/SlotDefaultValue.h>
#include <aws/lex-models/model/SlotDefaultValueSpec.h>
#include <aws/lex-models/model/SlotTypeConfiguration.h>
#include <aws/lex-models/model/SlotTypeMetadata.h>
#include <aws/lex-models/model/SlotTypeRegexConfiguration.h>
#include <aws/lex-models/model/SlotValueSelectionStrategy.h>
#include <aws/lex-models/model/SortOrder.h>
#include <aws/lex-models/model/Statement.h>
#include <aws/lex-models/model/Status.h>
#include <aws/lex-models/model/StatusType.h>
#include <aws/lex-models/model/Tag.h>
#include <aws/lex-models/model/UtteranceData.h>
#include <aws/lex-models/model/UtteranceList.h>

using LexModelBuildingServiceIncludeTest = ::testing::Test;

TEST_F(LexModelBuildingServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LexModelBuildingService::LexModelBuildingServiceClient>("LexModelBuildingServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
