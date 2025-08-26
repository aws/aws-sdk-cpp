/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/connectparticipant/ConnectParticipantClient.h>
#include <aws/connectparticipant/ConnectParticipantEndpointProvider.h>
#include <aws/connectparticipant/ConnectParticipantEndpointRules.h>
#include <aws/connectparticipant/ConnectParticipantErrorMarshaller.h>
#include <aws/connectparticipant/ConnectParticipantErrors.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/connectparticipant/ConnectParticipantServiceClientModel.h>
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/ArtifactStatus.h>
#include <aws/connectparticipant/model/AttachmentItem.h>
#include <aws/connectparticipant/model/Attendee.h>
#include <aws/connectparticipant/model/AudioFeatures.h>
#include <aws/connectparticipant/model/CancelParticipantAuthenticationRequest.h>
#include <aws/connectparticipant/model/CancelParticipantAuthenticationResult.h>
#include <aws/connectparticipant/model/ChatItemType.h>
#include <aws/connectparticipant/model/CompleteAttachmentUploadRequest.h>
#include <aws/connectparticipant/model/CompleteAttachmentUploadResult.h>
#include <aws/connectparticipant/model/ConnectionCredentials.h>
#include <aws/connectparticipant/model/ConnectionType.h>
#include <aws/connectparticipant/model/CreateParticipantConnectionRequest.h>
#include <aws/connectparticipant/model/CreateParticipantConnectionResult.h>
#include <aws/connectparticipant/model/DescribeViewRequest.h>
#include <aws/connectparticipant/model/DescribeViewResult.h>
#include <aws/connectparticipant/model/DisconnectParticipantRequest.h>
#include <aws/connectparticipant/model/DisconnectParticipantResult.h>
#include <aws/connectparticipant/model/GetAttachmentRequest.h>
#include <aws/connectparticipant/model/GetAttachmentResult.h>
#include <aws/connectparticipant/model/GetAuthenticationUrlRequest.h>
#include <aws/connectparticipant/model/GetAuthenticationUrlResult.h>
#include <aws/connectparticipant/model/GetTranscriptRequest.h>
#include <aws/connectparticipant/model/GetTranscriptResult.h>
#include <aws/connectparticipant/model/Item.h>
#include <aws/connectparticipant/model/MeetingFeatureStatus.h>
#include <aws/connectparticipant/model/MeetingFeaturesConfiguration.h>
#include <aws/connectparticipant/model/MessageMetadata.h>
#include <aws/connectparticipant/model/ParticipantRole.h>
#include <aws/connectparticipant/model/Receipt.h>
#include <aws/connectparticipant/model/ResourceNotFoundException.h>
#include <aws/connectparticipant/model/ResourceType.h>
#include <aws/connectparticipant/model/ScanDirection.h>
#include <aws/connectparticipant/model/SendEventRequest.h>
#include <aws/connectparticipant/model/SendEventResult.h>
#include <aws/connectparticipant/model/SendMessageRequest.h>
#include <aws/connectparticipant/model/SendMessageResult.h>
#include <aws/connectparticipant/model/SortKey.h>
#include <aws/connectparticipant/model/StartAttachmentUploadRequest.h>
#include <aws/connectparticipant/model/StartAttachmentUploadResult.h>
#include <aws/connectparticipant/model/StartPosition.h>
#include <aws/connectparticipant/model/UploadMetadata.h>
#include <aws/connectparticipant/model/View.h>
#include <aws/connectparticipant/model/ViewContent.h>
#include <aws/connectparticipant/model/WebRTCConnection.h>
#include <aws/connectparticipant/model/WebRTCMediaPlacement.h>
#include <aws/connectparticipant/model/WebRTCMeeting.h>
#include <aws/connectparticipant/model/Websocket.h>

using ConnectParticipantIncludeTest = ::testing::Test;

TEST_F(ConnectParticipantIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ConnectParticipant::ConnectParticipantClient>("ConnectParticipantIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
