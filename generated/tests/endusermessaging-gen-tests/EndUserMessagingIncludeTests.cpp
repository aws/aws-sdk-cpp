/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/endusermessaging/EndUserMessagingClient.h>
#include <aws/endusermessaging/EndUserMessagingClientPagination.h>
#include <aws/endusermessaging/EndUserMessagingEndpointProvider.h>
#include <aws/endusermessaging/EndUserMessagingErrorMarshaller.h>
#include <aws/endusermessaging/EndUserMessagingErrors.h>
#include <aws/endusermessaging/EndUserMessagingPaginationBase.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessagingServiceClientModel.h>
#include <aws/endusermessaging/EndUserMessagingWaiter.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/internal/EndUserMessagingEndpointRules.h>
#include <aws/endusermessaging/model/BrandProfileAttributeInput.h>
#include <aws/endusermessaging/model/BrandProfileAttributeOutput.h>
#include <aws/endusermessaging/model/BrandProfileAttributeSummary.h>
#include <aws/endusermessaging/model/BrandProfileAttributeType.h>
#include <aws/endusermessaging/model/BrandProfileInfo.h>
#include <aws/endusermessaging/model/ChannelParameters.h>
#include <aws/endusermessaging/model/CodeConfigurationParameters.h>
#include <aws/endusermessaging/model/CodeType.h>
#include <aws/endusermessaging/model/ConflictException.h>
#include <aws/endusermessaging/model/CreateBrandProfileAttributesRequest.h>
#include <aws/endusermessaging/model/CreateBrandProfileAttributesResult.h>
#include <aws/endusermessaging/model/CreateBrandProfileFromRegistrationRequest.h>
#include <aws/endusermessaging/model/CreateBrandProfileFromRegistrationResult.h>
#include <aws/endusermessaging/model/CreateBrandProfileRequest.h>
#include <aws/endusermessaging/model/CreateBrandProfileResult.h>
#include <aws/endusermessaging/model/CreateNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/CreateNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/CreateRegistrationsFromBrandProfileRequest.h>
#include <aws/endusermessaging/model/CreateRegistrationsFromBrandProfileResult.h>
#include <aws/endusermessaging/model/DeleteBrandProfileAttributeRequest.h>
#include <aws/endusermessaging/model/DeleteBrandProfileAttributeResult.h>
#include <aws/endusermessaging/model/DeleteBrandProfileRequest.h>
#include <aws/endusermessaging/model/DeleteBrandProfileResult.h>
#include <aws/endusermessaging/model/DeleteNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/DeleteNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/GetBrandProfileAttributeRequest.h>
#include <aws/endusermessaging/model/GetBrandProfileAttributeResult.h>
#include <aws/endusermessaging/model/GetBrandProfileRequest.h>
#include <aws/endusermessaging/model/GetBrandProfileResult.h>
#include <aws/endusermessaging/model/GetJobRequest.h>
#include <aws/endusermessaging/model/GetJobResult.h>
#include <aws/endusermessaging/model/GetNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/GetNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/JobResource.h>
#include <aws/endusermessaging/model/JobResourceType.h>
#include <aws/endusermessaging/model/JobResult.h>
#include <aws/endusermessaging/model/JobStatus.h>
#include <aws/endusermessaging/model/JobSummary.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesPaginationTraits.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesRequest.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesResult.h>
#include <aws/endusermessaging/model/ListBrandProfilesPaginationTraits.h>
#include <aws/endusermessaging/model/ListBrandProfilesRequest.h>
#include <aws/endusermessaging/model/ListBrandProfilesResult.h>
#include <aws/endusermessaging/model/ListJobsPaginationTraits.h>
#include <aws/endusermessaging/model/ListJobsRequest.h>
#include <aws/endusermessaging/model/ListJobsResult.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsPaginationTraits.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsRequest.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsResult.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfilePaginationTraits.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfileRequest.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfileResult.h>
#include <aws/endusermessaging/model/ListTagsForResourceRequest.h>
#include <aws/endusermessaging/model/ListTagsForResourceResult.h>
#include <aws/endusermessaging/model/NotifyChannel.h>
#include <aws/endusermessaging/model/NotifyCodeConfiguration.h>
#include <aws/endusermessaging/model/NotifyParameters.h>
#include <aws/endusermessaging/model/OnAttributeConflict.h>
#include <aws/endusermessaging/model/RegistrationAssociationSummary.h>
#include <aws/endusermessaging/model/ResourceNotFoundException.h>
#include <aws/endusermessaging/model/SendNotifyCodeVerificationRequest.h>
#include <aws/endusermessaging/model/SendNotifyCodeVerificationResult.h>
#include <aws/endusermessaging/model/Status.h>
#include <aws/endusermessaging/model/Tag.h>
#include <aws/endusermessaging/model/TagResourceRequest.h>
#include <aws/endusermessaging/model/TagResourceResult.h>
#include <aws/endusermessaging/model/TextParameters.h>
#include <aws/endusermessaging/model/UntagResourceRequest.h>
#include <aws/endusermessaging/model/UntagResourceResult.h>
#include <aws/endusermessaging/model/UpdateBrandProfileAttributeRequest.h>
#include <aws/endusermessaging/model/UpdateBrandProfileAttributeResult.h>
#include <aws/endusermessaging/model/UpdateBrandProfileFromRegistrationRequest.h>
#include <aws/endusermessaging/model/UpdateBrandProfileFromRegistrationResult.h>
#include <aws/endusermessaging/model/UpdateBrandProfileRequest.h>
#include <aws/endusermessaging/model/UpdateBrandProfileResult.h>
#include <aws/endusermessaging/model/UpdateChannelParameters.h>
#include <aws/endusermessaging/model/UpdateCodeConfigurationParameters.h>
#include <aws/endusermessaging/model/UpdateNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/UpdateNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/UpdateNotifyParameters.h>
#include <aws/endusermessaging/model/UpdateRegistrationsFromBrandProfileRequest.h>
#include <aws/endusermessaging/model/UpdateRegistrationsFromBrandProfileResult.h>
#include <aws/endusermessaging/model/UpdateTextParameters.h>
#include <aws/endusermessaging/model/UpdateVoiceParameters.h>
#include <aws/endusermessaging/model/UpdateWhatsAppParameters.h>
#include <aws/endusermessaging/model/ValidateNotifyCodeVerificationRequest.h>
#include <aws/endusermessaging/model/ValidateNotifyCodeVerificationResult.h>
#include <aws/endusermessaging/model/ValidationException.h>
#include <aws/endusermessaging/model/ValidationExceptionField.h>
#include <aws/endusermessaging/model/VerificationStatus.h>
#include <aws/endusermessaging/model/VoiceMessageBodyTextType.h>
#include <aws/endusermessaging/model/VoiceParameters.h>
#include <aws/endusermessaging/model/WhatsAppParameters.h>

using EndUserMessagingIncludeTest = ::testing::Test;

TEST_F(EndUserMessagingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EndUserMessaging::EndUserMessagingClient>("EndUserMessagingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
