/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lexv2-runtime/LexRuntimeV2Client.h>
#include <aws/lexv2-runtime/LexRuntimeV2EndpointProvider.h>
#include <aws/lexv2-runtime/LexRuntimeV2EndpointRules.h>
#include <aws/lexv2-runtime/LexRuntimeV2ErrorMarshaller.h>
#include <aws/lexv2-runtime/LexRuntimeV2Errors.h>
#include <aws/lexv2-runtime/LexRuntimeV2Request.h>
#include <aws/lexv2-runtime/LexRuntimeV2ServiceClientModel.h>
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/ActiveContext.h>
#include <aws/lexv2-runtime/model/ActiveContextTimeToLive.h>
#include <aws/lexv2-runtime/model/AudioInputEvent.h>
#include <aws/lexv2-runtime/model/AudioResponseEvent.h>
#include <aws/lexv2-runtime/model/Button.h>
#include <aws/lexv2-runtime/model/ConfidenceScore.h>
#include <aws/lexv2-runtime/model/ConfigurationEvent.h>
#include <aws/lexv2-runtime/model/ConfirmationState.h>
#include <aws/lexv2-runtime/model/ConversationMode.h>
#include <aws/lexv2-runtime/model/DTMFInputEvent.h>
#include <aws/lexv2-runtime/model/DeleteSessionRequest.h>
#include <aws/lexv2-runtime/model/DeleteSessionResult.h>
#include <aws/lexv2-runtime/model/DialogAction.h>
#include <aws/lexv2-runtime/model/DialogActionType.h>
#include <aws/lexv2-runtime/model/DisconnectionEvent.h>
#include <aws/lexv2-runtime/model/ElicitSubSlot.h>
#include <aws/lexv2-runtime/model/GetSessionRequest.h>
#include <aws/lexv2-runtime/model/GetSessionResult.h>
#include <aws/lexv2-runtime/model/HeartbeatEvent.h>
#include <aws/lexv2-runtime/model/ImageResponseCard.h>
#include <aws/lexv2-runtime/model/InputMode.h>
#include <aws/lexv2-runtime/model/Intent.h>
#include <aws/lexv2-runtime/model/IntentResultEvent.h>
#include <aws/lexv2-runtime/model/IntentState.h>
#include <aws/lexv2-runtime/model/Interpretation.h>
#include <aws/lexv2-runtime/model/InterpretationSource.h>
#include <aws/lexv2-runtime/model/Message.h>
#include <aws/lexv2-runtime/model/MessageContentType.h>
#include <aws/lexv2-runtime/model/PlaybackCompletionEvent.h>
#include <aws/lexv2-runtime/model/PlaybackInterruptionEvent.h>
#include <aws/lexv2-runtime/model/PlaybackInterruptionReason.h>
#include <aws/lexv2-runtime/model/PutSessionRequest.h>
#include <aws/lexv2-runtime/model/PutSessionResult.h>
#include <aws/lexv2-runtime/model/RecognizeTextRequest.h>
#include <aws/lexv2-runtime/model/RecognizeTextResult.h>
#include <aws/lexv2-runtime/model/RecognizeUtteranceRequest.h>
#include <aws/lexv2-runtime/model/RecognizeUtteranceResult.h>
#include <aws/lexv2-runtime/model/RecognizedBotMember.h>
#include <aws/lexv2-runtime/model/RuntimeHintDetails.h>
#include <aws/lexv2-runtime/model/RuntimeHintValue.h>
#include <aws/lexv2-runtime/model/RuntimeHints.h>
#include <aws/lexv2-runtime/model/SentimentResponse.h>
#include <aws/lexv2-runtime/model/SentimentScore.h>
#include <aws/lexv2-runtime/model/SentimentType.h>
#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/lexv2-runtime/model/Shape.h>
#include <aws/lexv2-runtime/model/Slot.h>
#include <aws/lexv2-runtime/model/StartConversationHandler.h>
#include <aws/lexv2-runtime/model/StartConversationInitialResponse.h>
#include <aws/lexv2-runtime/model/StartConversationRequest.h>
#include <aws/lexv2-runtime/model/StartConversationRequestEventStream.h>
#include <aws/lexv2-runtime/model/StartConversationResponseEventStream.h>
#include <aws/lexv2-runtime/model/StyleType.h>
#include <aws/lexv2-runtime/model/TextInputEvent.h>
#include <aws/lexv2-runtime/model/TextResponseEvent.h>
#include <aws/lexv2-runtime/model/TranscriptEvent.h>
#include <aws/lexv2-runtime/model/Value.h>

using LexRuntimeV2IncludeTest = ::testing::Test;

TEST_F(LexRuntimeV2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LexRuntimeV2::LexRuntimeV2Client>("LexRuntimeV2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
