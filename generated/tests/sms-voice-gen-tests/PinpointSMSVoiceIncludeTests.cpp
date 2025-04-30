/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sms-voice/PinpointSMSVoiceClient.h>
#include <aws/sms-voice/PinpointSMSVoiceEndpointProvider.h>
#include <aws/sms-voice/PinpointSMSVoiceEndpointRules.h>
#include <aws/sms-voice/PinpointSMSVoiceErrorMarshaller.h>
#include <aws/sms-voice/PinpointSMSVoiceErrors.h>
#include <aws/sms-voice/PinpointSMSVoiceRequest.h>
#include <aws/sms-voice/PinpointSMSVoiceServiceClientModel.h>
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/model/CallInstructionsMessageType.h>
#include <aws/sms-voice/model/CloudWatchLogsDestination.h>
#include <aws/sms-voice/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/sms-voice/model/CreateConfigurationSetEventDestinationResult.h>
#include <aws/sms-voice/model/CreateConfigurationSetRequest.h>
#include <aws/sms-voice/model/CreateConfigurationSetResult.h>
#include <aws/sms-voice/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/sms-voice/model/DeleteConfigurationSetEventDestinationResult.h>
#include <aws/sms-voice/model/DeleteConfigurationSetRequest.h>
#include <aws/sms-voice/model/DeleteConfigurationSetResult.h>
#include <aws/sms-voice/model/EventDestination.h>
#include <aws/sms-voice/model/EventDestinationDefinition.h>
#include <aws/sms-voice/model/EventType.h>
#include <aws/sms-voice/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/sms-voice/model/GetConfigurationSetEventDestinationsResult.h>
#include <aws/sms-voice/model/KinesisFirehoseDestination.h>
#include <aws/sms-voice/model/ListConfigurationSetsRequest.h>
#include <aws/sms-voice/model/ListConfigurationSetsResult.h>
#include <aws/sms-voice/model/PlainTextMessageType.h>
#include <aws/sms-voice/model/SSMLMessageType.h>
#include <aws/sms-voice/model/SendVoiceMessageRequest.h>
#include <aws/sms-voice/model/SendVoiceMessageResult.h>
#include <aws/sms-voice/model/SnsDestination.h>
#include <aws/sms-voice/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <aws/sms-voice/model/UpdateConfigurationSetEventDestinationResult.h>
#include <aws/sms-voice/model/VoiceMessageContent.h>

using PinpointSMSVoiceIncludeTest = ::testing::Test;

TEST_F(PinpointSMSVoiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PinpointSMSVoice::PinpointSMSVoiceClient>("PinpointSMSVoiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
