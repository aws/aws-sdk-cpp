/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClient.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointProvider.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointRules.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrorMarshaller.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrors.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessServiceClientModel.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/model/CellOutput.h>
#include <aws/route53-recovery-readiness/model/CreateCellRequest.h>
#include <aws/route53-recovery-readiness/model/CreateCellResult.h>
#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationResult.h>
#include <aws/route53-recovery-readiness/model/CreateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/CreateReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/CreateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/CreateRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/CreateResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/CreateResourceSetResult.h>
#include <aws/route53-recovery-readiness/model/DNSTargetResource.h>
#include <aws/route53-recovery-readiness/model/DeleteCellRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCrossAccountAuthorizationResult.h>
#include <aws/route53-recovery-readiness/model/DeleteReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsRequest.h>
#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsResult.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryResult.h>
#include <aws/route53-recovery-readiness/model/GetCellRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusResult.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryResult.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/GetResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/GetResourceSetResult.h>
#include <aws/route53-recovery-readiness/model/ListCellsRequest.h>
#include <aws/route53-recovery-readiness/model/ListCellsResult.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsRequest.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsResult.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksRequest.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksResult.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsRequest.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsResult.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsRequest.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsResult.h>
#include <aws/route53-recovery-readiness/model/ListRulesOutput.h>
#include <aws/route53-recovery-readiness/model/ListRulesRequest.h>
#include <aws/route53-recovery-readiness/model/ListRulesResult.h>
#include <aws/route53-recovery-readiness/model/ListTagsForResourcesRequest.h>
#include <aws/route53-recovery-readiness/model/ListTagsForResourcesResult.h>
#include <aws/route53-recovery-readiness/model/Message.h>
#include <aws/route53-recovery-readiness/model/NLBResource.h>
#include <aws/route53-recovery-readiness/model/R53ResourceRecord.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/route53-recovery-readiness/model/ReadinessCheckOutput.h>
#include <aws/route53-recovery-readiness/model/ReadinessCheckSummary.h>
#include <aws/route53-recovery-readiness/model/Recommendation.h>
#include <aws/route53-recovery-readiness/model/RecoveryGroupOutput.h>
#include <aws/route53-recovery-readiness/model/Resource.h>
#include <aws/route53-recovery-readiness/model/ResourceResult.h>
#include <aws/route53-recovery-readiness/model/ResourceSetOutput.h>
#include <aws/route53-recovery-readiness/model/RuleResult.h>
#include <aws/route53-recovery-readiness/model/TagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/TagResourceResult.h>
#include <aws/route53-recovery-readiness/model/TargetResource.h>
#include <aws/route53-recovery-readiness/model/UntagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateCellRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateCellResult.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/UpdateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/UpdateResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateResourceSetResult.h>

using Route53RecoveryReadinessIncludeTest = ::testing::Test;

TEST_F(Route53RecoveryReadinessIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClient>("Route53RecoveryReadinessIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
