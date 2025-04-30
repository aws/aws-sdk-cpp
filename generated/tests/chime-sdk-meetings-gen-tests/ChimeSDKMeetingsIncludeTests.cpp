/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClient.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointProvider.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointRules.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrorMarshaller.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrors.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsServiceClientModel.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/Attendee.h>
#include <aws/chime-sdk-meetings/model/AttendeeCapabilities.h>
#include <aws/chime-sdk-meetings/model/AttendeeFeatures.h>
#include <aws/chime-sdk-meetings/model/AttendeeIdItem.h>
#include <aws/chime-sdk-meetings/model/AudioFeatures.h>
#include <aws/chime-sdk-meetings/model/BadRequestException.h>
#include <aws/chime-sdk-meetings/model/BatchCreateAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/BatchCreateAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/BatchUpdateAttendeeCapabilitiesExceptRequest.h>
#include <aws/chime-sdk-meetings/model/ConflictException.h>
#include <aws/chime-sdk-meetings/model/ContentFeatures.h>
#include <aws/chime-sdk-meetings/model/ContentResolution.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeError.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeRequestItem.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingResult.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingWithAttendeesRequest.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingWithAttendeesResult.h>
#include <aws/chime-sdk-meetings/model/DeleteAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/DeleteMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/EngineTranscribeMedicalSettings.h>
#include <aws/chime-sdk-meetings/model/EngineTranscribeSettings.h>
#include <aws/chime-sdk-meetings/model/ForbiddenException.h>
#include <aws/chime-sdk-meetings/model/GetAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/GetAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/GetMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/GetMeetingResult.h>
#include <aws/chime-sdk-meetings/model/LimitExceededException.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesRequest.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesResult.h>
#include <aws/chime-sdk-meetings/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-meetings/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-meetings/model/MediaCapabilities.h>
#include <aws/chime-sdk-meetings/model/MediaPlacement.h>
#include <aws/chime-sdk-meetings/model/Meeting.h>
#include <aws/chime-sdk-meetings/model/MeetingFeatureStatus.h>
#include <aws/chime-sdk-meetings/model/MeetingFeaturesConfiguration.h>
#include <aws/chime-sdk-meetings/model/NotFoundException.h>
#include <aws/chime-sdk-meetings/model/NotificationsConfiguration.h>
#include <aws/chime-sdk-meetings/model/ResourceNotFoundException.h>
#include <aws/chime-sdk-meetings/model/ServiceFailureException.h>
#include <aws/chime-sdk-meetings/model/ServiceUnavailableException.h>
#include <aws/chime-sdk-meetings/model/StartMeetingTranscriptionRequest.h>
#include <aws/chime-sdk-meetings/model/StopMeetingTranscriptionRequest.h>
#include <aws/chime-sdk-meetings/model/Tag.h>
#include <aws/chime-sdk-meetings/model/TagResourceRequest.h>
#include <aws/chime-sdk-meetings/model/TagResourceResult.h>
#include <aws/chime-sdk-meetings/model/ThrottlingException.h>
#include <aws/chime-sdk-meetings/model/TooManyTagsException.h>
#include <aws/chime-sdk-meetings/model/TranscribeContentIdentificationType.h>
#include <aws/chime-sdk-meetings/model/TranscribeContentRedactionType.h>
#include <aws/chime-sdk-meetings/model/TranscribeLanguageCode.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalContentIdentificationType.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalLanguageCode.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalRegion.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalSpecialty.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalType.h>
#include <aws/chime-sdk-meetings/model/TranscribePartialResultsStability.h>
#include <aws/chime-sdk-meetings/model/TranscribeRegion.h>
#include <aws/chime-sdk-meetings/model/TranscribeVocabularyFilterMethod.h>
#include <aws/chime-sdk-meetings/model/TranscriptionConfiguration.h>
#include <aws/chime-sdk-meetings/model/UnauthorizedException.h>
#include <aws/chime-sdk-meetings/model/UnprocessableEntityException.h>
#include <aws/chime-sdk-meetings/model/UntagResourceRequest.h>
#include <aws/chime-sdk-meetings/model/UntagResourceResult.h>
#include <aws/chime-sdk-meetings/model/UpdateAttendeeCapabilitiesRequest.h>
#include <aws/chime-sdk-meetings/model/UpdateAttendeeCapabilitiesResult.h>
#include <aws/chime-sdk-meetings/model/VideoFeatures.h>
#include <aws/chime-sdk-meetings/model/VideoResolution.h>

using ChimeSDKMeetingsIncludeTest = ::testing::Test;

TEST_F(ChimeSDKMeetingsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ChimeSDKMeetings::ChimeSDKMeetingsClient>("ChimeSDKMeetingsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
