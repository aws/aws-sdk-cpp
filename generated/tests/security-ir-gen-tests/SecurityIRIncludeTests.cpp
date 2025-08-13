/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/security-ir/SecurityIRClient.h>
#include <aws/security-ir/SecurityIREndpointProvider.h>
#include <aws/security-ir/SecurityIREndpointRules.h>
#include <aws/security-ir/SecurityIRErrorMarshaller.h>
#include <aws/security-ir/SecurityIRErrors.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/security-ir/SecurityIRServiceClientModel.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/AwsRegion.h>
#include <aws/security-ir/model/BatchGetMemberAccountDetailsRequest.h>
#include <aws/security-ir/model/BatchGetMemberAccountDetailsResult.h>
#include <aws/security-ir/model/CancelMembershipRequest.h>
#include <aws/security-ir/model/CancelMembershipResult.h>
#include <aws/security-ir/model/CaseAttachmentAttributes.h>
#include <aws/security-ir/model/CaseAttachmentStatus.h>
#include <aws/security-ir/model/CaseEditItem.h>
#include <aws/security-ir/model/CaseStatus.h>
#include <aws/security-ir/model/CloseCaseRequest.h>
#include <aws/security-ir/model/CloseCaseResult.h>
#include <aws/security-ir/model/ClosureCode.h>
#include <aws/security-ir/model/ConflictException.h>
#include <aws/security-ir/model/CreateCaseCommentRequest.h>
#include <aws/security-ir/model/CreateCaseCommentResult.h>
#include <aws/security-ir/model/CreateCaseRequest.h>
#include <aws/security-ir/model/CreateCaseResult.h>
#include <aws/security-ir/model/CreateMembershipRequest.h>
#include <aws/security-ir/model/CreateMembershipResult.h>
#include <aws/security-ir/model/CustomerType.h>
#include <aws/security-ir/model/EngagementType.h>
#include <aws/security-ir/model/GetCaseAttachmentDownloadUrlRequest.h>
#include <aws/security-ir/model/GetCaseAttachmentDownloadUrlResult.h>
#include <aws/security-ir/model/GetCaseAttachmentUploadUrlRequest.h>
#include <aws/security-ir/model/GetCaseAttachmentUploadUrlResult.h>
#include <aws/security-ir/model/GetCaseRequest.h>
#include <aws/security-ir/model/GetCaseResult.h>
#include <aws/security-ir/model/GetMembershipAccountDetailError.h>
#include <aws/security-ir/model/GetMembershipAccountDetailItem.h>
#include <aws/security-ir/model/GetMembershipRequest.h>
#include <aws/security-ir/model/GetMembershipResult.h>
#include <aws/security-ir/model/ImpactedAwsRegion.h>
#include <aws/security-ir/model/IncidentResponder.h>
#include <aws/security-ir/model/InternalServerException.h>
#include <aws/security-ir/model/ListCaseEditsRequest.h>
#include <aws/security-ir/model/ListCaseEditsResult.h>
#include <aws/security-ir/model/ListCasesItem.h>
#include <aws/security-ir/model/ListCasesRequest.h>
#include <aws/security-ir/model/ListCasesResult.h>
#include <aws/security-ir/model/ListCommentsItem.h>
#include <aws/security-ir/model/ListCommentsRequest.h>
#include <aws/security-ir/model/ListCommentsResult.h>
#include <aws/security-ir/model/ListMembershipItem.h>
#include <aws/security-ir/model/ListMembershipsRequest.h>
#include <aws/security-ir/model/ListMembershipsResult.h>
#include <aws/security-ir/model/ListTagsForResourceRequest.h>
#include <aws/security-ir/model/ListTagsForResourceResult.h>
#include <aws/security-ir/model/MembershipAccountRelationshipStatus.h>
#include <aws/security-ir/model/MembershipAccountRelationshipType.h>
#include <aws/security-ir/model/MembershipAccountsConfigurations.h>
#include <aws/security-ir/model/MembershipAccountsConfigurationsUpdate.h>
#include <aws/security-ir/model/MembershipStatus.h>
#include <aws/security-ir/model/OptInFeature.h>
#include <aws/security-ir/model/OptInFeatureName.h>
#include <aws/security-ir/model/PendingAction.h>
#include <aws/security-ir/model/ResolverType.h>
#include <aws/security-ir/model/SelfManagedCaseStatus.h>
#include <aws/security-ir/model/ServiceQuotaExceededException.h>
#include <aws/security-ir/model/TagResourceRequest.h>
#include <aws/security-ir/model/TagResourceResult.h>
#include <aws/security-ir/model/ThreatActorIp.h>
#include <aws/security-ir/model/ThrottlingException.h>
#include <aws/security-ir/model/UntagResourceRequest.h>
#include <aws/security-ir/model/UntagResourceResult.h>
#include <aws/security-ir/model/UpdateCaseCommentRequest.h>
#include <aws/security-ir/model/UpdateCaseCommentResult.h>
#include <aws/security-ir/model/UpdateCaseRequest.h>
#include <aws/security-ir/model/UpdateCaseResult.h>
#include <aws/security-ir/model/UpdateCaseStatusRequest.h>
#include <aws/security-ir/model/UpdateCaseStatusResult.h>
#include <aws/security-ir/model/UpdateMembershipRequest.h>
#include <aws/security-ir/model/UpdateMembershipResult.h>
#include <aws/security-ir/model/UpdateResolverTypeRequest.h>
#include <aws/security-ir/model/UpdateResolverTypeResult.h>
#include <aws/security-ir/model/ValidationException.h>
#include <aws/security-ir/model/ValidationExceptionField.h>
#include <aws/security-ir/model/ValidationExceptionReason.h>
#include <aws/security-ir/model/Watcher.h>

using SecurityIRIncludeTest = ::testing::Test;

TEST_F(SecurityIRIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SecurityIR::SecurityIRClient>("SecurityIRIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
