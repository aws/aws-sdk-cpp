/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/voice-id/VoiceIDClient.h>
#include <aws/voice-id/VoiceIDEndpointProvider.h>
#include <aws/voice-id/VoiceIDEndpointRules.h>
#include <aws/voice-id/VoiceIDErrorMarshaller.h>
#include <aws/voice-id/VoiceIDErrors.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/voice-id/VoiceIDServiceClientModel.h>
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/AssociateFraudsterRequest.h>
#include <aws/voice-id/model/AssociateFraudsterResult.h>
#include <aws/voice-id/model/AuthenticationConfiguration.h>
#include <aws/voice-id/model/AuthenticationDecision.h>
#include <aws/voice-id/model/AuthenticationResult.h>
#include <aws/voice-id/model/ConflictException.h>
#include <aws/voice-id/model/ConflictType.h>
#include <aws/voice-id/model/CreateDomainRequest.h>
#include <aws/voice-id/model/CreateDomainResult.h>
#include <aws/voice-id/model/CreateWatchlistRequest.h>
#include <aws/voice-id/model/CreateWatchlistResult.h>
#include <aws/voice-id/model/DeleteDomainRequest.h>
#include <aws/voice-id/model/DeleteFraudsterRequest.h>
#include <aws/voice-id/model/DeleteSpeakerRequest.h>
#include <aws/voice-id/model/DeleteWatchlistRequest.h>
#include <aws/voice-id/model/DescribeDomainRequest.h>
#include <aws/voice-id/model/DescribeDomainResult.h>
#include <aws/voice-id/model/DescribeFraudsterRegistrationJobRequest.h>
#include <aws/voice-id/model/DescribeFraudsterRegistrationJobResult.h>
#include <aws/voice-id/model/DescribeFraudsterRequest.h>
#include <aws/voice-id/model/DescribeFraudsterResult.h>
#include <aws/voice-id/model/DescribeSpeakerEnrollmentJobRequest.h>
#include <aws/voice-id/model/DescribeSpeakerEnrollmentJobResult.h>
#include <aws/voice-id/model/DescribeSpeakerRequest.h>
#include <aws/voice-id/model/DescribeSpeakerResult.h>
#include <aws/voice-id/model/DescribeWatchlistRequest.h>
#include <aws/voice-id/model/DescribeWatchlistResult.h>
#include <aws/voice-id/model/DisassociateFraudsterRequest.h>
#include <aws/voice-id/model/DisassociateFraudsterResult.h>
#include <aws/voice-id/model/Domain.h>
#include <aws/voice-id/model/DomainStatus.h>
#include <aws/voice-id/model/DomainSummary.h>
#include <aws/voice-id/model/DuplicateRegistrationAction.h>
#include <aws/voice-id/model/EnrollmentConfig.h>
#include <aws/voice-id/model/EnrollmentJobFraudDetectionConfig.h>
#include <aws/voice-id/model/EvaluateSessionRequest.h>
#include <aws/voice-id/model/EvaluateSessionResult.h>
#include <aws/voice-id/model/ExistingEnrollmentAction.h>
#include <aws/voice-id/model/FailureDetails.h>
#include <aws/voice-id/model/FraudDetectionAction.h>
#include <aws/voice-id/model/FraudDetectionConfiguration.h>
#include <aws/voice-id/model/FraudDetectionDecision.h>
#include <aws/voice-id/model/FraudDetectionReason.h>
#include <aws/voice-id/model/FraudDetectionResult.h>
#include <aws/voice-id/model/FraudRiskDetails.h>
#include <aws/voice-id/model/Fraudster.h>
#include <aws/voice-id/model/FraudsterRegistrationJob.h>
#include <aws/voice-id/model/FraudsterRegistrationJobStatus.h>
#include <aws/voice-id/model/FraudsterRegistrationJobSummary.h>
#include <aws/voice-id/model/FraudsterSummary.h>
#include <aws/voice-id/model/InputDataConfig.h>
#include <aws/voice-id/model/JobProgress.h>
#include <aws/voice-id/model/KnownFraudsterRisk.h>
#include <aws/voice-id/model/ListDomainsRequest.h>
#include <aws/voice-id/model/ListDomainsResult.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsRequest.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsResult.h>
#include <aws/voice-id/model/ListFraudstersRequest.h>
#include <aws/voice-id/model/ListFraudstersResult.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsRequest.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsResult.h>
#include <aws/voice-id/model/ListSpeakersRequest.h>
#include <aws/voice-id/model/ListSpeakersResult.h>
#include <aws/voice-id/model/ListTagsForResourceRequest.h>
#include <aws/voice-id/model/ListTagsForResourceResult.h>
#include <aws/voice-id/model/ListWatchlistsRequest.h>
#include <aws/voice-id/model/ListWatchlistsResult.h>
#include <aws/voice-id/model/OptOutSpeakerRequest.h>
#include <aws/voice-id/model/OptOutSpeakerResult.h>
#include <aws/voice-id/model/OutputDataConfig.h>
#include <aws/voice-id/model/RegistrationConfig.h>
#include <aws/voice-id/model/ResourceNotFoundException.h>
#include <aws/voice-id/model/ResourceType.h>
#include <aws/voice-id/model/ServerSideEncryptionConfiguration.h>
#include <aws/voice-id/model/ServerSideEncryptionUpdateDetails.h>
#include <aws/voice-id/model/ServerSideEncryptionUpdateStatus.h>
#include <aws/voice-id/model/Speaker.h>
#include <aws/voice-id/model/SpeakerEnrollmentJob.h>
#include <aws/voice-id/model/SpeakerEnrollmentJobStatus.h>
#include <aws/voice-id/model/SpeakerEnrollmentJobSummary.h>
#include <aws/voice-id/model/SpeakerStatus.h>
#include <aws/voice-id/model/SpeakerSummary.h>
#include <aws/voice-id/model/StartFraudsterRegistrationJobRequest.h>
#include <aws/voice-id/model/StartFraudsterRegistrationJobResult.h>
#include <aws/voice-id/model/StartSpeakerEnrollmentJobRequest.h>
#include <aws/voice-id/model/StartSpeakerEnrollmentJobResult.h>
#include <aws/voice-id/model/StreamingStatus.h>
#include <aws/voice-id/model/Tag.h>
#include <aws/voice-id/model/TagResourceRequest.h>
#include <aws/voice-id/model/TagResourceResult.h>
#include <aws/voice-id/model/UntagResourceRequest.h>
#include <aws/voice-id/model/UntagResourceResult.h>
#include <aws/voice-id/model/UpdateDomainRequest.h>
#include <aws/voice-id/model/UpdateDomainResult.h>
#include <aws/voice-id/model/UpdateWatchlistRequest.h>
#include <aws/voice-id/model/UpdateWatchlistResult.h>
#include <aws/voice-id/model/VoiceSpoofingRisk.h>
#include <aws/voice-id/model/Watchlist.h>
#include <aws/voice-id/model/WatchlistDetails.h>
#include <aws/voice-id/model/WatchlistSummary.h>

using VoiceIDIncludeTest = ::testing::Test;

TEST_F(VoiceIDIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::VoiceID::VoiceIDClient>("VoiceIDIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
