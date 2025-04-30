/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/trustedadvisor/TrustedAdvisorClient.h>
#include <aws/trustedadvisor/TrustedAdvisorEndpointProvider.h>
#include <aws/trustedadvisor/TrustedAdvisorEndpointRules.h>
#include <aws/trustedadvisor/TrustedAdvisorErrorMarshaller.h>
#include <aws/trustedadvisor/TrustedAdvisorErrors.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/trustedadvisor/TrustedAdvisorServiceClientModel.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/AccountRecommendationLifecycleSummary.h>
#include <aws/trustedadvisor/model/BatchUpdateRecommendationResourceExclusionRequest.h>
#include <aws/trustedadvisor/model/BatchUpdateRecommendationResourceExclusionResult.h>
#include <aws/trustedadvisor/model/CheckSummary.h>
#include <aws/trustedadvisor/model/ExclusionStatus.h>
#include <aws/trustedadvisor/model/GetOrganizationRecommendationRequest.h>
#include <aws/trustedadvisor/model/GetOrganizationRecommendationResult.h>
#include <aws/trustedadvisor/model/GetRecommendationRequest.h>
#include <aws/trustedadvisor/model/GetRecommendationResult.h>
#include <aws/trustedadvisor/model/ListChecksRequest.h>
#include <aws/trustedadvisor/model/ListChecksResult.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsRequest.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsResult.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesRequest.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesResult.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationsRequest.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationsResult.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesRequest.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesResult.h>
#include <aws/trustedadvisor/model/ListRecommendationsRequest.h>
#include <aws/trustedadvisor/model/ListRecommendationsResult.h>
#include <aws/trustedadvisor/model/OrganizationRecommendation.h>
#include <aws/trustedadvisor/model/OrganizationRecommendationResourceSummary.h>
#include <aws/trustedadvisor/model/OrganizationRecommendationSummary.h>
#include <aws/trustedadvisor/model/Recommendation.h>
#include <aws/trustedadvisor/model/RecommendationCostOptimizingAggregates.h>
#include <aws/trustedadvisor/model/RecommendationLanguage.h>
#include <aws/trustedadvisor/model/RecommendationLifecycleStage.h>
#include <aws/trustedadvisor/model/RecommendationPillar.h>
#include <aws/trustedadvisor/model/RecommendationPillarSpecificAggregates.h>
#include <aws/trustedadvisor/model/RecommendationResourceExclusion.h>
#include <aws/trustedadvisor/model/RecommendationResourceSummary.h>
#include <aws/trustedadvisor/model/RecommendationResourcesAggregates.h>
#include <aws/trustedadvisor/model/RecommendationSource.h>
#include <aws/trustedadvisor/model/RecommendationStatus.h>
#include <aws/trustedadvisor/model/RecommendationSummary.h>
#include <aws/trustedadvisor/model/RecommendationType.h>
#include <aws/trustedadvisor/model/ResourceStatus.h>
#include <aws/trustedadvisor/model/UpdateOrganizationRecommendationLifecycleRequest.h>
#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleRequest.h>
#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleStage.h>
#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleStageReasonCode.h>
#include <aws/trustedadvisor/model/UpdateRecommendationResourceExclusionError.h>

using TrustedAdvisorIncludeTest = ::testing::Test;

TEST_F(TrustedAdvisorIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::TrustedAdvisor::TrustedAdvisorClient>("TrustedAdvisorIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
