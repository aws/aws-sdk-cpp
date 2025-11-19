/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/partnercentral-channel/PartnerCentralChannelClient.h>
#include <aws/partnercentral-channel/PartnerCentralChannelEndpointProvider.h>
#include <aws/partnercentral-channel/PartnerCentralChannelEndpointRules.h>
#include <aws/partnercentral-channel/PartnerCentralChannelErrorMarshaller.h>
#include <aws/partnercentral-channel/PartnerCentralChannelErrors.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannelServiceClientModel.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/AcceptChannelHandshakeDetail.h>
#include <aws/partnercentral-channel/model/AcceptChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/AcceptChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/AccessDeniedException.h>
#include <aws/partnercentral-channel/model/AssociationType.h>
#include <aws/partnercentral-channel/model/CancelChannelHandshakeDetail.h>
#include <aws/partnercentral-channel/model/CancelChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/CancelChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/ChannelHandshakePayload.h>
#include <aws/partnercentral-channel/model/ChannelHandshakeSummary.h>
#include <aws/partnercentral-channel/model/ConflictException.h>
#include <aws/partnercentral-channel/model/Coverage.h>
#include <aws/partnercentral-channel/model/CreateChannelHandshakeDetail.h>
#include <aws/partnercentral-channel/model/CreateChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/CreateChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/CreateProgramManagementAccountDetail.h>
#include <aws/partnercentral-channel/model/CreateProgramManagementAccountRequest.h>
#include <aws/partnercentral-channel/model/CreateProgramManagementAccountResult.h>
#include <aws/partnercentral-channel/model/CreateRelationshipDetail.h>
#include <aws/partnercentral-channel/model/CreateRelationshipRequest.h>
#include <aws/partnercentral-channel/model/CreateRelationshipResult.h>
#include <aws/partnercentral-channel/model/DeleteProgramManagementAccountRequest.h>
#include <aws/partnercentral-channel/model/DeleteProgramManagementAccountResult.h>
#include <aws/partnercentral-channel/model/DeleteRelationshipRequest.h>
#include <aws/partnercentral-channel/model/DeleteRelationshipResult.h>
#include <aws/partnercentral-channel/model/GetRelationshipRequest.h>
#include <aws/partnercentral-channel/model/GetRelationshipResult.h>
#include <aws/partnercentral-channel/model/HandshakeDetail.h>
#include <aws/partnercentral-channel/model/HandshakeStatus.h>
#include <aws/partnercentral-channel/model/HandshakeType.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesRequest.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesResult.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesTypeFilters.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesTypeSort.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsRequest.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsResult.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsSortBase.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsSortName.h>
#include <aws/partnercentral-channel/model/ListRelationshipsRequest.h>
#include <aws/partnercentral-channel/model/ListRelationshipsResult.h>
#include <aws/partnercentral-channel/model/ListRelationshipsSortBase.h>
#include <aws/partnercentral-channel/model/ListRelationshipsSortName.h>
#include <aws/partnercentral-channel/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-channel/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-channel/model/ParticipantType.h>
#include <aws/partnercentral-channel/model/PartnerLedSupport.h>
#include <aws/partnercentral-channel/model/Program.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountHandshakeDetail.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountStatus.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountSummary.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountTypeFilters.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountTypeSort.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountTypeSortName.h>
#include <aws/partnercentral-channel/model/Provider.h>
#include <aws/partnercentral-channel/model/RejectChannelHandshakeDetail.h>
#include <aws/partnercentral-channel/model/RejectChannelHandshakeRequest.h>
#include <aws/partnercentral-channel/model/RejectChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/RelationshipDetail.h>
#include <aws/partnercentral-channel/model/RelationshipSummary.h>
#include <aws/partnercentral-channel/model/ResaleAccountModel.h>
#include <aws/partnercentral-channel/model/ResoldBusiness.h>
#include <aws/partnercentral-channel/model/ResoldEnterprise.h>
#include <aws/partnercentral-channel/model/ResourceNotFoundException.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodHandshakeDetail.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodPayload.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodTypeFilters.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodTypeSort.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodTypeSortName.h>
#include <aws/partnercentral-channel/model/Sector.h>
#include <aws/partnercentral-channel/model/ServicePeriodType.h>
#include <aws/partnercentral-channel/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-channel/model/SortOrder.h>
#include <aws/partnercentral-channel/model/StartServicePeriodHandshakeDetail.h>
#include <aws/partnercentral-channel/model/StartServicePeriodPayload.h>
#include <aws/partnercentral-channel/model/StartServicePeriodTypeFilters.h>
#include <aws/partnercentral-channel/model/StartServicePeriodTypeSort.h>
#include <aws/partnercentral-channel/model/StartServicePeriodTypeSortName.h>
#include <aws/partnercentral-channel/model/SupportPlan.h>
#include <aws/partnercentral-channel/model/Tag.h>
#include <aws/partnercentral-channel/model/TagResourceRequest.h>
#include <aws/partnercentral-channel/model/TagResourceResult.h>
#include <aws/partnercentral-channel/model/ThrottlingException.h>
#include <aws/partnercentral-channel/model/UntagResourceRequest.h>
#include <aws/partnercentral-channel/model/UntagResourceResult.h>
#include <aws/partnercentral-channel/model/UpdateProgramManagementAccountDetail.h>
#include <aws/partnercentral-channel/model/UpdateProgramManagementAccountRequest.h>
#include <aws/partnercentral-channel/model/UpdateProgramManagementAccountResult.h>
#include <aws/partnercentral-channel/model/UpdateRelationshipDetail.h>
#include <aws/partnercentral-channel/model/UpdateRelationshipRequest.h>
#include <aws/partnercentral-channel/model/UpdateRelationshipResult.h>
#include <aws/partnercentral-channel/model/ValidationException.h>
#include <aws/partnercentral-channel/model/ValidationExceptionField.h>
#include <aws/partnercentral-channel/model/ValidationExceptionReason.h>

using PartnerCentralChannelIncludeTest = ::testing::Test;

TEST_F(PartnerCentralChannelIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PartnerCentralChannel::PartnerCentralChannelClient>("PartnerCentralChannelIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
