/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/transcribestreaming/TranscribeStreamingServiceClient.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointProvider.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointRules.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrorMarshaller.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceRequest.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceServiceClientModel.h>
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/Alternative.h>
#include <aws/transcribestreaming/model/AudioEvent.h>
#include <aws/transcribestreaming/model/AudioStream.h>
#include <aws/transcribestreaming/model/CallAnalyticsEntity.h>
#include <aws/transcribestreaming/model/CallAnalyticsItem.h>
#include <aws/transcribestreaming/model/CallAnalyticsLanguageCode.h>
#include <aws/transcribestreaming/model/CallAnalyticsLanguageWithScore.h>
#include <aws/transcribestreaming/model/CallAnalyticsTranscriptResultStream.h>
#include <aws/transcribestreaming/model/CategoryEvent.h>
#include <aws/transcribestreaming/model/ChannelDefinition.h>
#include <aws/transcribestreaming/model/CharacterOffsets.h>
#include <aws/transcribestreaming/model/ClinicalNoteGenerationResult.h>
#include <aws/transcribestreaming/model/ClinicalNoteGenerationSettings.h>
#include <aws/transcribestreaming/model/ClinicalNoteGenerationStatus.h>
#include <aws/transcribestreaming/model/ConfigurationEvent.h>
#include <aws/transcribestreaming/model/ContentIdentificationType.h>
#include <aws/transcribestreaming/model/ContentRedactionOutput.h>
#include <aws/transcribestreaming/model/ContentRedactionType.h>
#include <aws/transcribestreaming/model/Entity.h>
#include <aws/transcribestreaming/model/GetMedicalScribeStreamRequest.h>
#include <aws/transcribestreaming/model/GetMedicalScribeStreamResult.h>
#include <aws/transcribestreaming/model/IssueDetected.h>
#include <aws/transcribestreaming/model/Item.h>
#include <aws/transcribestreaming/model/ItemType.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/LanguageWithScore.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/transcribestreaming/model/MedicalAlternative.h>
#include <aws/transcribestreaming/model/MedicalContentIdentificationType.h>
#include <aws/transcribestreaming/model/MedicalEntity.h>
#include <aws/transcribestreaming/model/MedicalItem.h>
#include <aws/transcribestreaming/model/MedicalResult.h>
#include <aws/transcribestreaming/model/MedicalScribeAudioEvent.h>
#include <aws/transcribestreaming/model/MedicalScribeChannelDefinition.h>
#include <aws/transcribestreaming/model/MedicalScribeConfigurationEvent.h>
#include <aws/transcribestreaming/model/MedicalScribeContext.h>
#include <aws/transcribestreaming/model/MedicalScribeEncryptionSettings.h>
#include <aws/transcribestreaming/model/MedicalScribeInputStream.h>
#include <aws/transcribestreaming/model/MedicalScribeLanguageCode.h>
#include <aws/transcribestreaming/model/MedicalScribeMediaEncoding.h>
#include <aws/transcribestreaming/model/MedicalScribeNoteTemplate.h>
#include <aws/transcribestreaming/model/MedicalScribeParticipantRole.h>
#include <aws/transcribestreaming/model/MedicalScribePatientContext.h>
#include <aws/transcribestreaming/model/MedicalScribePostStreamAnalyticsResult.h>
#include <aws/transcribestreaming/model/MedicalScribePostStreamAnalyticsSettings.h>
#include <aws/transcribestreaming/model/MedicalScribeResultStream.h>
#include <aws/transcribestreaming/model/MedicalScribeSessionControlEvent.h>
#include <aws/transcribestreaming/model/MedicalScribeSessionControlEventType.h>
#include <aws/transcribestreaming/model/MedicalScribeStreamDetails.h>
#include <aws/transcribestreaming/model/MedicalScribeStreamStatus.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptEvent.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptItem.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptItemType.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptSegment.h>
#include <aws/transcribestreaming/model/MedicalScribeVocabularyFilterMethod.h>
#include <aws/transcribestreaming/model/MedicalTranscript.h>
#include <aws/transcribestreaming/model/MedicalTranscriptEvent.h>
#include <aws/transcribestreaming/model/MedicalTranscriptResultStream.h>
#include <aws/transcribestreaming/model/PartialResultsStability.h>
#include <aws/transcribestreaming/model/ParticipantRole.h>
#include <aws/transcribestreaming/model/PointsOfInterest.h>
#include <aws/transcribestreaming/model/PostCallAnalyticsSettings.h>
#include <aws/transcribestreaming/model/Pronouns.h>
#include <aws/transcribestreaming/model/Result.h>
#include <aws/transcribestreaming/model/Sentiment.h>
#include <aws/transcribestreaming/model/Specialty.h>
#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionHandler.h>
#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionInitialResponse.h>
#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartMedicalScribeStreamHandler.h>
#include <aws/transcribestreaming/model/StartMedicalScribeStreamInitialResponse.h>
#include <aws/transcribestreaming/model/StartMedicalScribeStreamRequest.h>
#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionHandler.h>
#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionInitialResponse.h>
#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionHandler.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionInitialResponse.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/TimestampRange.h>
#include <aws/transcribestreaming/model/Transcript.h>
#include <aws/transcribestreaming/model/TranscriptEvent.h>
#include <aws/transcribestreaming/model/TranscriptResultStream.h>
#include <aws/transcribestreaming/model/Type.h>
#include <aws/transcribestreaming/model/UtteranceEvent.h>
#include <aws/transcribestreaming/model/VocabularyFilterMethod.h>

using TranscribeStreamingServiceIncludeTest = ::testing::Test;

TEST_F(TranscribeStreamingServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::TranscribeStreamingService::TranscribeStreamingServiceClient>("TranscribeStreamingServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
