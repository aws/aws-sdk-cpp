/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/detective/DetectiveClient.h>
#include <aws/detective/DetectiveEndpointProvider.h>
#include <aws/detective/DetectiveEndpointRules.h>
#include <aws/detective/DetectiveErrorMarshaller.h>
#include <aws/detective/DetectiveErrors.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/detective/DetectiveServiceClientModel.h>
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/model/AcceptInvitationRequest.h>
#include <aws/detective/model/AccessDeniedException.h>
#include <aws/detective/model/Account.h>
#include <aws/detective/model/Administrator.h>
#include <aws/detective/model/BatchGetGraphMemberDatasourcesRequest.h>
#include <aws/detective/model/BatchGetGraphMemberDatasourcesResult.h>
#include <aws/detective/model/BatchGetMembershipDatasourcesRequest.h>
#include <aws/detective/model/BatchGetMembershipDatasourcesResult.h>
#include <aws/detective/model/CreateGraphRequest.h>
#include <aws/detective/model/CreateGraphResult.h>
#include <aws/detective/model/CreateMembersRequest.h>
#include <aws/detective/model/CreateMembersResult.h>
#include <aws/detective/model/DatasourcePackage.h>
#include <aws/detective/model/DatasourcePackageIngestDetail.h>
#include <aws/detective/model/DatasourcePackageIngestState.h>
#include <aws/detective/model/DatasourcePackageUsageInfo.h>
#include <aws/detective/model/DateFilter.h>
#include <aws/detective/model/DeleteGraphRequest.h>
#include <aws/detective/model/DeleteMembersRequest.h>
#include <aws/detective/model/DeleteMembersResult.h>
#include <aws/detective/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/detective/model/DescribeOrganizationConfigurationResult.h>
#include <aws/detective/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/detective/model/DisassociateMembershipRequest.h>
#include <aws/detective/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/detective/model/EntityType.h>
#include <aws/detective/model/ErrorCode.h>
#include <aws/detective/model/Field.h>
#include <aws/detective/model/FilterCriteria.h>
#include <aws/detective/model/FlaggedIpAddressDetail.h>
#include <aws/detective/model/GetInvestigationRequest.h>
#include <aws/detective/model/GetInvestigationResult.h>
#include <aws/detective/model/GetMembersRequest.h>
#include <aws/detective/model/GetMembersResult.h>
#include <aws/detective/model/Graph.h>
#include <aws/detective/model/ImpossibleTravelDetail.h>
#include <aws/detective/model/Indicator.h>
#include <aws/detective/model/IndicatorDetail.h>
#include <aws/detective/model/IndicatorType.h>
#include <aws/detective/model/InvestigationDetail.h>
#include <aws/detective/model/InvitationType.h>
#include <aws/detective/model/ListDatasourcePackagesRequest.h>
#include <aws/detective/model/ListDatasourcePackagesResult.h>
#include <aws/detective/model/ListGraphsRequest.h>
#include <aws/detective/model/ListGraphsResult.h>
#include <aws/detective/model/ListIndicatorsRequest.h>
#include <aws/detective/model/ListIndicatorsResult.h>
#include <aws/detective/model/ListInvestigationsRequest.h>
#include <aws/detective/model/ListInvestigationsResult.h>
#include <aws/detective/model/ListInvitationsRequest.h>
#include <aws/detective/model/ListInvitationsResult.h>
#include <aws/detective/model/ListMembersRequest.h>
#include <aws/detective/model/ListMembersResult.h>
#include <aws/detective/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/detective/model/ListOrganizationAdminAccountsResult.h>
#include <aws/detective/model/ListTagsForResourceRequest.h>
#include <aws/detective/model/ListTagsForResourceResult.h>
#include <aws/detective/model/MemberDetail.h>
#include <aws/detective/model/MemberDisabledReason.h>
#include <aws/detective/model/MemberStatus.h>
#include <aws/detective/model/MembershipDatasources.h>
#include <aws/detective/model/NewAsoDetail.h>
#include <aws/detective/model/NewGeolocationDetail.h>
#include <aws/detective/model/NewUserAgentDetail.h>
#include <aws/detective/model/Reason.h>
#include <aws/detective/model/RejectInvitationRequest.h>
#include <aws/detective/model/RelatedFindingDetail.h>
#include <aws/detective/model/RelatedFindingGroupDetail.h>
#include <aws/detective/model/ServiceQuotaExceededException.h>
#include <aws/detective/model/Severity.h>
#include <aws/detective/model/SortCriteria.h>
#include <aws/detective/model/SortOrder.h>
#include <aws/detective/model/StartInvestigationRequest.h>
#include <aws/detective/model/StartInvestigationResult.h>
#include <aws/detective/model/StartMonitoringMemberRequest.h>
#include <aws/detective/model/State.h>
#include <aws/detective/model/Status.h>
#include <aws/detective/model/StringFilter.h>
#include <aws/detective/model/TTPsObservedDetail.h>
#include <aws/detective/model/TagResourceRequest.h>
#include <aws/detective/model/TagResourceResult.h>
#include <aws/detective/model/TimestampForCollection.h>
#include <aws/detective/model/UnprocessedAccount.h>
#include <aws/detective/model/UnprocessedGraph.h>
#include <aws/detective/model/UntagResourceRequest.h>
#include <aws/detective/model/UntagResourceResult.h>
#include <aws/detective/model/UpdateDatasourcePackagesRequest.h>
#include <aws/detective/model/UpdateInvestigationStateRequest.h>
#include <aws/detective/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/detective/model/ValidationException.h>

using DetectiveIncludeTest = ::testing::Test;

TEST_F(DetectiveIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Detective::DetectiveClient>("DetectiveIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
