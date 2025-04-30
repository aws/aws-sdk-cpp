/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lex/LexRuntimeServiceClient.h>
#include <aws/lex/LexRuntimeServiceEndpointProvider.h>
#include <aws/lex/LexRuntimeServiceEndpointRules.h>
#include <aws/lex/LexRuntimeServiceErrorMarshaller.h>
#include <aws/lex/LexRuntimeServiceErrors.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/lex/LexRuntimeServiceServiceClientModel.h>
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/model/ActiveContext.h>
#include <aws/lex/model/ActiveContextTimeToLive.h>
#include <aws/lex/model/Button.h>
#include <aws/lex/model/ConfirmationStatus.h>
#include <aws/lex/model/ContentType.h>
#include <aws/lex/model/DeleteSessionRequest.h>
#include <aws/lex/model/DeleteSessionResult.h>
#include <aws/lex/model/DialogAction.h>
#include <aws/lex/model/DialogActionType.h>
#include <aws/lex/model/DialogState.h>
#include <aws/lex/model/FulfillmentState.h>
#include <aws/lex/model/GenericAttachment.h>
#include <aws/lex/model/GetSessionRequest.h>
#include <aws/lex/model/GetSessionResult.h>
#include <aws/lex/model/IntentConfidence.h>
#include <aws/lex/model/IntentSummary.h>
#include <aws/lex/model/LimitExceededException.h>
#include <aws/lex/model/MessageFormatType.h>
#include <aws/lex/model/PostContentRequest.h>
#include <aws/lex/model/PostContentResult.h>
#include <aws/lex/model/PostTextRequest.h>
#include <aws/lex/model/PostTextResult.h>
#include <aws/lex/model/PredictedIntent.h>
#include <aws/lex/model/PutSessionRequest.h>
#include <aws/lex/model/PutSessionResult.h>
#include <aws/lex/model/ResponseCard.h>
#include <aws/lex/model/SentimentResponse.h>

using LexRuntimeServiceIncludeTest = ::testing::Test;

TEST_F(LexRuntimeServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LexRuntimeService::LexRuntimeServiceClient>("LexRuntimeServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
