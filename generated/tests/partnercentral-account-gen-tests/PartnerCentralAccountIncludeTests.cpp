/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/partnercentral-account/PartnerCentralAccountClient.h>
#include <aws/partnercentral-account/PartnerCentralAccountEndpointProvider.h>
#include <aws/partnercentral-account/PartnerCentralAccountEndpointRules.h>
#include <aws/partnercentral-account/PartnerCentralAccountErrorMarshaller.h>
#include <aws/partnercentral-account/PartnerCentralAccountErrors.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccountServiceClientModel.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/AcceptConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/AcceptConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/AccessDeniedException.h>
#include <aws/partnercentral-account/model/AccessDeniedExceptionReason.h>
#include <aws/partnercentral-account/model/AccessType.h>
#include <aws/partnercentral-account/model/AccountSummary.h>
#include <aws/partnercentral-account/model/AllianceLeadContact.h>
#include <aws/partnercentral-account/model/AssociateAwsTrainingCertificationEmailDomainRequest.h>
#include <aws/partnercentral-account/model/AssociateAwsTrainingCertificationEmailDomainResult.h>
#include <aws/partnercentral-account/model/BusinessValidationCode.h>
#include <aws/partnercentral-account/model/BusinessValidationError.h>
#include <aws/partnercentral-account/model/CancelConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/CancelConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/CancelConnectionRequest.h>
#include <aws/partnercentral-account/model/CancelConnectionResult.h>
#include <aws/partnercentral-account/model/CancelProfileUpdateTaskRequest.h>
#include <aws/partnercentral-account/model/CancelProfileUpdateTaskResult.h>
#include <aws/partnercentral-account/model/ConflictException.h>
#include <aws/partnercentral-account/model/ConflictExceptionReason.h>
#include <aws/partnercentral-account/model/Connection.h>
#include <aws/partnercentral-account/model/ConnectionInvitationSummary.h>
#include <aws/partnercentral-account/model/ConnectionSummary.h>
#include <aws/partnercentral-account/model/ConnectionType.h>
#include <aws/partnercentral-account/model/ConnectionTypeDetail.h>
#include <aws/partnercentral-account/model/ConnectionTypeStatus.h>
#include <aws/partnercentral-account/model/ConnectionTypeSummary.h>
#include <aws/partnercentral-account/model/CreateConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/CreateConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/CreatePartnerRequest.h>
#include <aws/partnercentral-account/model/CreatePartnerResult.h>
#include <aws/partnercentral-account/model/DisassociateAwsTrainingCertificationEmailDomainRequest.h>
#include <aws/partnercentral-account/model/DisassociateAwsTrainingCertificationEmailDomainResult.h>
#include <aws/partnercentral-account/model/ErrorDetail.h>
#include <aws/partnercentral-account/model/FieldValidationCode.h>
#include <aws/partnercentral-account/model/FieldValidationError.h>
#include <aws/partnercentral-account/model/GetAllianceLeadContactRequest.h>
#include <aws/partnercentral-account/model/GetAllianceLeadContactResult.h>
#include <aws/partnercentral-account/model/GetConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/GetConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/GetConnectionPreferencesRequest.h>
#include <aws/partnercentral-account/model/GetConnectionPreferencesResult.h>
#include <aws/partnercentral-account/model/GetConnectionRequest.h>
#include <aws/partnercentral-account/model/GetConnectionResult.h>
#include <aws/partnercentral-account/model/GetPartnerRequest.h>
#include <aws/partnercentral-account/model/GetPartnerResult.h>
#include <aws/partnercentral-account/model/GetProfileUpdateTaskRequest.h>
#include <aws/partnercentral-account/model/GetProfileUpdateTaskResult.h>
#include <aws/partnercentral-account/model/GetProfileVisibilityRequest.h>
#include <aws/partnercentral-account/model/GetProfileVisibilityResult.h>
#include <aws/partnercentral-account/model/IndustrySegment.h>
#include <aws/partnercentral-account/model/InvitationStatus.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsRequest.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsResult.h>
#include <aws/partnercentral-account/model/ListConnectionsRequest.h>
#include <aws/partnercentral-account/model/ListConnectionsResult.h>
#include <aws/partnercentral-account/model/ListPartnersRequest.h>
#include <aws/partnercentral-account/model/ListPartnersResult.h>
#include <aws/partnercentral-account/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-account/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-account/model/LocalizedContent.h>
#include <aws/partnercentral-account/model/Participant.h>
#include <aws/partnercentral-account/model/ParticipantType.h>
#include <aws/partnercentral-account/model/PartnerDomain.h>
#include <aws/partnercentral-account/model/PartnerProfile.h>
#include <aws/partnercentral-account/model/PartnerProfileSummary.h>
#include <aws/partnercentral-account/model/PartnerSummary.h>
#include <aws/partnercentral-account/model/PrimarySolutionType.h>
#include <aws/partnercentral-account/model/ProfileTaskStatus.h>
#include <aws/partnercentral-account/model/ProfileValidationErrorReason.h>
#include <aws/partnercentral-account/model/ProfileVisibility.h>
#include <aws/partnercentral-account/model/PutAllianceLeadContactRequest.h>
#include <aws/partnercentral-account/model/PutAllianceLeadContactResult.h>
#include <aws/partnercentral-account/model/PutProfileVisibilityRequest.h>
#include <aws/partnercentral-account/model/PutProfileVisibilityResult.h>
#include <aws/partnercentral-account/model/RejectConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/RejectConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/ResourceNotFoundException.h>
#include <aws/partnercentral-account/model/ResourceNotFoundExceptionReason.h>
#include <aws/partnercentral-account/model/SellerProfileSummary.h>
#include <aws/partnercentral-account/model/SendEmailVerificationCodeRequest.h>
#include <aws/partnercentral-account/model/SendEmailVerificationCodeResult.h>
#include <aws/partnercentral-account/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-account/model/ServiceQuotaExceededExceptionReason.h>
#include <aws/partnercentral-account/model/StartProfileUpdateTaskRequest.h>
#include <aws/partnercentral-account/model/StartProfileUpdateTaskResult.h>
#include <aws/partnercentral-account/model/Tag.h>
#include <aws/partnercentral-account/model/TagResourceRequest.h>
#include <aws/partnercentral-account/model/TagResourceResult.h>
#include <aws/partnercentral-account/model/TaskDetails.h>
#include <aws/partnercentral-account/model/ThrottlingException.h>
#include <aws/partnercentral-account/model/UntagResourceRequest.h>
#include <aws/partnercentral-account/model/UntagResourceResult.h>
#include <aws/partnercentral-account/model/UpdateConnectionPreferencesRequest.h>
#include <aws/partnercentral-account/model/UpdateConnectionPreferencesResult.h>
#include <aws/partnercentral-account/model/ValidationError.h>
#include <aws/partnercentral-account/model/ValidationException.h>
#include <aws/partnercentral-account/model/ValidationExceptionReason.h>

using PartnerCentralAccountIncludeTest = ::testing::Test;

TEST_F(PartnerCentralAccountIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PartnerCentralAccount::PartnerCentralAccountClient>("PartnerCentralAccountIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
