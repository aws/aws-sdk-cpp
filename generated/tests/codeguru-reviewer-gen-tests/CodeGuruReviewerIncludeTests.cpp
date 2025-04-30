/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointProvider.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointRules.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrorMarshaller.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrors.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerServiceClientModel.h>
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/AnalysisType.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryResult.h>
#include <aws/codeguru-reviewer/model/BranchDiffSourceCodeType.h>
#include <aws/codeguru-reviewer/model/CodeArtifacts.h>
#include <aws/codeguru-reviewer/model/CodeCommitRepository.h>
#include <aws/codeguru-reviewer/model/CodeReview.h>
#include <aws/codeguru-reviewer/model/CodeReviewSummary.h>
#include <aws/codeguru-reviewer/model/CodeReviewType.h>
#include <aws/codeguru-reviewer/model/CommitDiffSourceCodeType.h>
#include <aws/codeguru-reviewer/model/ConfigFileState.h>
#include <aws/codeguru-reviewer/model/CreateCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/CreateCodeReviewResult.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewResult.h>
#include <aws/codeguru-reviewer/model/DescribeRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRecommendationFeedbackResult.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationResult.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryResult.h>
#include <aws/codeguru-reviewer/model/EncryptionOption.h>
#include <aws/codeguru-reviewer/model/EventInfo.h>
#include <aws/codeguru-reviewer/model/JobState.h>
#include <aws/codeguru-reviewer/model/KMSKeyDetails.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsRequest.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsResult.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackResult.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsResult.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsRequest.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsResult.h>
#include <aws/codeguru-reviewer/model/ListTagsForResourceRequest.h>
#include <aws/codeguru-reviewer/model/ListTagsForResourceResult.h>
#include <aws/codeguru-reviewer/model/Metrics.h>
#include <aws/codeguru-reviewer/model/MetricsSummary.h>
#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/codeguru-reviewer/model/PutRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/PutRecommendationFeedbackResult.h>
#include <aws/codeguru-reviewer/model/Reaction.h>
#include <aws/codeguru-reviewer/model/RecommendationCategory.h>
#include <aws/codeguru-reviewer/model/RecommendationFeedback.h>
#include <aws/codeguru-reviewer/model/RecommendationFeedbackSummary.h>
#include <aws/codeguru-reviewer/model/RecommendationSummary.h>
#include <aws/codeguru-reviewer/model/Repository.h>
#include <aws/codeguru-reviewer/model/RepositoryAnalysis.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociation.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociationState.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociationSummary.h>
#include <aws/codeguru-reviewer/model/RepositoryHeadSourceCodeType.h>
#include <aws/codeguru-reviewer/model/RequestMetadata.h>
#include <aws/codeguru-reviewer/model/RuleMetadata.h>
#include <aws/codeguru-reviewer/model/S3BucketRepository.h>
#include <aws/codeguru-reviewer/model/S3Repository.h>
#include <aws/codeguru-reviewer/model/S3RepositoryDetails.h>
#include <aws/codeguru-reviewer/model/Severity.h>
#include <aws/codeguru-reviewer/model/SourceCodeType.h>
#include <aws/codeguru-reviewer/model/TagResourceRequest.h>
#include <aws/codeguru-reviewer/model/TagResourceResult.h>
#include <aws/codeguru-reviewer/model/ThirdPartySourceRepository.h>
#include <aws/codeguru-reviewer/model/Type.h>
#include <aws/codeguru-reviewer/model/UntagResourceRequest.h>
#include <aws/codeguru-reviewer/model/UntagResourceResult.h>
#include <aws/codeguru-reviewer/model/VendorName.h>

using CodeGuruReviewerIncludeTest = ::testing::Test;

TEST_F(CodeGuruReviewerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeGuruReviewer::CodeGuruReviewerClient>("CodeGuruReviewerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
