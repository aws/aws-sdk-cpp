/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/connecthealth/ConnectHealthClient.h>
#include <aws/connecthealth/ConnectHealthEndpointProvider.h>
#include <aws/connecthealth/ConnectHealthEndpointRules.h>
#include <aws/connecthealth/ConnectHealthErrorMarshaller.h>
#include <aws/connecthealth/ConnectHealthErrors.h>
#include <aws/connecthealth/ConnectHealthRequest.h>
#include <aws/connecthealth/ConnectHealthServiceClientModel.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ActivateSubscriptionRequest.h>
#include <aws/connecthealth/model/ActivateSubscriptionResult.h>
#include <aws/connecthealth/model/ArtifactDetails.h>
#include <aws/connecthealth/model/ClinicalNoteGenerationResult.h>
#include <aws/connecthealth/model/ClinicalNoteGenerationSettings.h>
#include <aws/connecthealth/model/ClinicalNoteGenerationSettingsResponse.h>
#include <aws/connecthealth/model/CreateDomainRequest.h>
#include <aws/connecthealth/model/CreateDomainResult.h>
#include <aws/connecthealth/model/CreateSubscriptionRequest.h>
#include <aws/connecthealth/model/CreateSubscriptionResult.h>
#include <aws/connecthealth/model/CreateWebAppConfiguration.h>
#include <aws/connecthealth/model/CustomTemplate.h>
#include <aws/connecthealth/model/CustomTemplateBase.h>
#include <aws/connecthealth/model/CustomTemplateResponse.h>
#include <aws/connecthealth/model/DeactivateSubscriptionRequest.h>
#include <aws/connecthealth/model/DeactivateSubscriptionResult.h>
#include <aws/connecthealth/model/DeleteDomainRequest.h>
#include <aws/connecthealth/model/DeleteDomainResult.h>
#include <aws/connecthealth/model/DomainStatus.h>
#include <aws/connecthealth/model/DomainSummary.h>
#include <aws/connecthealth/model/EncounterContext.h>
#include <aws/connecthealth/model/EncryptionContext.h>
#include <aws/connecthealth/model/EncryptionType.h>
#include <aws/connecthealth/model/FHIRServer.h>
#include <aws/connecthealth/model/GetDomainRequest.h>
#include <aws/connecthealth/model/GetDomainResult.h>
#include <aws/connecthealth/model/GetMedicalScribeListeningSessionRequest.h>
#include <aws/connecthealth/model/GetMedicalScribeListeningSessionResult.h>
#include <aws/connecthealth/model/GetPatientInsightsJobRequest.h>
#include <aws/connecthealth/model/GetPatientInsightsJobResult.h>
#include <aws/connecthealth/model/GetSubscriptionRequest.h>
#include <aws/connecthealth/model/GetSubscriptionResult.h>
#include <aws/connecthealth/model/InputDataConfig.h>
#include <aws/connecthealth/model/InsightsContext.h>
#include <aws/connecthealth/model/InsightsOutput.h>
#include <aws/connecthealth/model/InsightsType.h>
#include <aws/connecthealth/model/JobStatus.h>
#include <aws/connecthealth/model/ListDomainsRequest.h>
#include <aws/connecthealth/model/ListDomainsResult.h>
#include <aws/connecthealth/model/ListSubscriptionsRequest.h>
#include <aws/connecthealth/model/ListSubscriptionsResult.h>
#include <aws/connecthealth/model/ListTagsForResourceRequest.h>
#include <aws/connecthealth/model/ListTagsForResourceResult.h>
#include <aws/connecthealth/model/ManagedNoteTemplate.h>
#include <aws/connecthealth/model/ManagedTemplate.h>
#include <aws/connecthealth/model/ManagedTemplateResponse.h>
#include <aws/connecthealth/model/MedicalScribeAudioEvent.h>
#include <aws/connecthealth/model/MedicalScribeChannelDefinition.h>
#include <aws/connecthealth/model/MedicalScribeConfigurationEvent.h>
#include <aws/connecthealth/model/MedicalScribeInputStream.h>
#include <aws/connecthealth/model/MedicalScribeLanguageCode.h>
#include <aws/connecthealth/model/MedicalScribeListeningSessionDetails.h>
#include <aws/connecthealth/model/MedicalScribeMediaEncoding.h>
#include <aws/connecthealth/model/MedicalScribeOutputStream.h>
#include <aws/connecthealth/model/MedicalScribeParticipantRole.h>
#include <aws/connecthealth/model/MedicalScribePostStreamActionSettings.h>
#include <aws/connecthealth/model/MedicalScribePostStreamActionSettingsResponse.h>
#include <aws/connecthealth/model/MedicalScribePostStreamActionsResult.h>
#include <aws/connecthealth/model/MedicalScribeSessionControlEvent.h>
#include <aws/connecthealth/model/MedicalScribeSessionControlEventType.h>
#include <aws/connecthealth/model/MedicalScribeStreamStatus.h>
#include <aws/connecthealth/model/MedicalScribeTranscriptEvent.h>
#include <aws/connecthealth/model/MedicalScribeTranscriptSegment.h>
#include <aws/connecthealth/model/NoteTemplateSettings.h>
#include <aws/connecthealth/model/NoteTemplateSettingsResponse.h>
#include <aws/connecthealth/model/OutputDataConfig.h>
#include <aws/connecthealth/model/PatientInsightsEncounterContext.h>
#include <aws/connecthealth/model/PatientInsightsPatientContext.h>
#include <aws/connecthealth/model/PostStreamArtifactGenerationStatus.h>
#include <aws/connecthealth/model/Pronouns.h>
#include <aws/connecthealth/model/ProviderRole.h>
#include <aws/connecthealth/model/S3Source.h>
#include <aws/connecthealth/model/Specialty.h>
#include <aws/connecthealth/model/StartMedicalScribeListeningSessionHandler.h>
#include <aws/connecthealth/model/StartMedicalScribeListeningSessionInitialResponse.h>
#include <aws/connecthealth/model/StartMedicalScribeListeningSessionRequest.h>
#include <aws/connecthealth/model/StartPatientInsightsJobRequest.h>
#include <aws/connecthealth/model/StartPatientInsightsJobResult.h>
#include <aws/connecthealth/model/SubscriptionDescription.h>
#include <aws/connecthealth/model/SubscriptionStatus.h>
#include <aws/connecthealth/model/TagResourceRequest.h>
#include <aws/connecthealth/model/TemplateSectionInstruction.h>
#include <aws/connecthealth/model/UntagResourceRequest.h>
#include <aws/connecthealth/model/UserContext.h>
#include <aws/connecthealth/model/WebAppConfiguration.h>

using ConnectHealthIncludeTest = ::testing::Test;

TEST_F(ConnectHealthIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ConnectHealth::ConnectHealthClient>("ConnectHealthIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
