/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mpa/MPAClient.h>
#include <aws/mpa/MPAEndpointProvider.h>
#include <aws/mpa/MPAEndpointRules.h>
#include <aws/mpa/MPAErrorMarshaller.h>
#include <aws/mpa/MPAErrors.h>
#include <aws/mpa/MPARequest.h>
#include <aws/mpa/MPAServiceClientModel.h>
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/ActionCompletionStrategy.h>
#include <aws/mpa/model/ApprovalStrategy.h>
#include <aws/mpa/model/ApprovalStrategyResponse.h>
#include <aws/mpa/model/ApprovalTeamRequestApprover.h>
#include <aws/mpa/model/ApprovalTeamStatus.h>
#include <aws/mpa/model/ApprovalTeamStatusCode.h>
#include <aws/mpa/model/CancelSessionRequest.h>
#include <aws/mpa/model/CancelSessionResult.h>
#include <aws/mpa/model/CreateApprovalTeamRequest.h>
#include <aws/mpa/model/CreateApprovalTeamResult.h>
#include <aws/mpa/model/CreateIdentitySourceRequest.h>
#include <aws/mpa/model/CreateIdentitySourceResult.h>
#include <aws/mpa/model/DeleteIdentitySourceRequest.h>
#include <aws/mpa/model/DeleteInactiveApprovalTeamVersionRequest.h>
#include <aws/mpa/model/DeleteInactiveApprovalTeamVersionResult.h>
#include <aws/mpa/model/Filter.h>
#include <aws/mpa/model/FilterField.h>
#include <aws/mpa/model/GetApprovalTeamRequest.h>
#include <aws/mpa/model/GetApprovalTeamResponseApprover.h>
#include <aws/mpa/model/GetApprovalTeamResult.h>
#include <aws/mpa/model/GetIdentitySourceRequest.h>
#include <aws/mpa/model/GetIdentitySourceResult.h>
#include <aws/mpa/model/GetPolicyVersionRequest.h>
#include <aws/mpa/model/GetPolicyVersionResult.h>
#include <aws/mpa/model/GetResourcePolicyRequest.h>
#include <aws/mpa/model/GetResourcePolicyResult.h>
#include <aws/mpa/model/GetSessionRequest.h>
#include <aws/mpa/model/GetSessionResponseApproverResponse.h>
#include <aws/mpa/model/GetSessionResult.h>
#include <aws/mpa/model/IamIdentityCenter.h>
#include <aws/mpa/model/IamIdentityCenterForGet.h>
#include <aws/mpa/model/IamIdentityCenterForList.h>
#include <aws/mpa/model/IdentitySourceForList.h>
#include <aws/mpa/model/IdentitySourceParameters.h>
#include <aws/mpa/model/IdentitySourceParametersForGet.h>
#include <aws/mpa/model/IdentitySourceParametersForList.h>
#include <aws/mpa/model/IdentitySourceStatus.h>
#include <aws/mpa/model/IdentitySourceStatusCode.h>
#include <aws/mpa/model/IdentitySourceType.h>
#include <aws/mpa/model/IdentityStatus.h>
#include <aws/mpa/model/ListApprovalTeamsRequest.h>
#include <aws/mpa/model/ListApprovalTeamsResponseApprovalTeam.h>
#include <aws/mpa/model/ListApprovalTeamsResult.h>
#include <aws/mpa/model/ListIdentitySourcesRequest.h>
#include <aws/mpa/model/ListIdentitySourcesResult.h>
#include <aws/mpa/model/ListPoliciesRequest.h>
#include <aws/mpa/model/ListPoliciesResult.h>
#include <aws/mpa/model/ListPolicyVersionsRequest.h>
#include <aws/mpa/model/ListPolicyVersionsResult.h>
#include <aws/mpa/model/ListResourcePoliciesRequest.h>
#include <aws/mpa/model/ListResourcePoliciesResponseResourcePolicy.h>
#include <aws/mpa/model/ListResourcePoliciesResult.h>
#include <aws/mpa/model/ListSessionsRequest.h>
#include <aws/mpa/model/ListSessionsResponseSession.h>
#include <aws/mpa/model/ListSessionsResult.h>
#include <aws/mpa/model/ListTagsForResourceRequest.h>
#include <aws/mpa/model/ListTagsForResourceResult.h>
#include <aws/mpa/model/MofNApprovalStrategy.h>
#include <aws/mpa/model/Operator.h>
#include <aws/mpa/model/PendingUpdate.h>
#include <aws/mpa/model/Policy.h>
#include <aws/mpa/model/PolicyReference.h>
#include <aws/mpa/model/PolicyStatus.h>
#include <aws/mpa/model/PolicyType.h>
#include <aws/mpa/model/PolicyVersion.h>
#include <aws/mpa/model/PolicyVersionSummary.h>
#include <aws/mpa/model/SessionExecutionStatus.h>
#include <aws/mpa/model/SessionResponse.h>
#include <aws/mpa/model/SessionStatus.h>
#include <aws/mpa/model/SessionStatusCode.h>
#include <aws/mpa/model/StartActiveApprovalTeamDeletionRequest.h>
#include <aws/mpa/model/StartActiveApprovalTeamDeletionResult.h>
#include <aws/mpa/model/TagResourceRequest.h>
#include <aws/mpa/model/TagResourceResult.h>
#include <aws/mpa/model/TooManyTagsException.h>
#include <aws/mpa/model/UntagResourceRequest.h>
#include <aws/mpa/model/UntagResourceResult.h>
#include <aws/mpa/model/UpdateApprovalTeamRequest.h>
#include <aws/mpa/model/UpdateApprovalTeamResult.h>

using MPAIncludeTest = ::testing::Test;

TEST_F(MPAIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MPA::MPAClient>("MPAIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
