/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/polly/PollyClient.h>
#include <aws/polly/PollyEndpointProvider.h>
#include <aws/polly/PollyEndpointRules.h>
#include <aws/polly/PollyErrorMarshaller.h>
#include <aws/polly/PollyErrors.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/PollyServiceClientModel.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/DeleteLexiconRequest.h>
#include <aws/polly/model/DeleteLexiconResult.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/polly/model/DescribeVoicesResult.h>
#include <aws/polly/model/Engine.h>
#include <aws/polly/model/Gender.h>
#include <aws/polly/model/GetLexiconRequest.h>
#include <aws/polly/model/GetLexiconResult.h>
#include <aws/polly/model/GetSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/GetSpeechSynthesisTaskResult.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/polly/model/Lexicon.h>
#include <aws/polly/model/LexiconAttributes.h>
#include <aws/polly/model/LexiconDescription.h>
#include <aws/polly/model/ListLexiconsRequest.h>
#include <aws/polly/model/ListLexiconsResult.h>
#include <aws/polly/model/ListSpeechSynthesisTasksRequest.h>
#include <aws/polly/model/ListSpeechSynthesisTasksResult.h>
#include <aws/polly/model/OutputFormat.h>
#include <aws/polly/model/PutLexiconRequest.h>
#include <aws/polly/model/PutLexiconResult.h>
#include <aws/polly/model/SpeechMarkType.h>
#include <aws/polly/model/StartSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/StartSpeechSynthesisTaskResult.h>
#include <aws/polly/model/SynthesisTask.h>
#include <aws/polly/model/SynthesizeSpeechRequest.h>
#include <aws/polly/model/SynthesizeSpeechResult.h>
#include <aws/polly/model/TaskStatus.h>
#include <aws/polly/model/TextType.h>
#include <aws/polly/model/Voice.h>
#include <aws/polly/model/VoiceId.h>

using PollyIncludeTest = ::testing::Test;

TEST_F(PollyIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Polly::PollyClient>("PollyIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
