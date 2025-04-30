/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kendra-ranking/KendraRankingClient.h>
#include <aws/kendra-ranking/KendraRankingEndpointProvider.h>
#include <aws/kendra-ranking/KendraRankingEndpointRules.h>
#include <aws/kendra-ranking/KendraRankingErrorMarshaller.h>
#include <aws/kendra-ranking/KendraRankingErrors.h>
#include <aws/kendra-ranking/KendraRankingRequest.h>
#include <aws/kendra-ranking/KendraRankingServiceClientModel.h>
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/kendra-ranking/model/CapacityUnitsConfiguration.h>
#include <aws/kendra-ranking/model/CreateRescoreExecutionPlanRequest.h>
#include <aws/kendra-ranking/model/CreateRescoreExecutionPlanResult.h>
#include <aws/kendra-ranking/model/DeleteRescoreExecutionPlanRequest.h>
#include <aws/kendra-ranking/model/DescribeRescoreExecutionPlanRequest.h>
#include <aws/kendra-ranking/model/DescribeRescoreExecutionPlanResult.h>
#include <aws/kendra-ranking/model/Document.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansRequest.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansResult.h>
#include <aws/kendra-ranking/model/ListTagsForResourceRequest.h>
#include <aws/kendra-ranking/model/ListTagsForResourceResult.h>
#include <aws/kendra-ranking/model/RescoreExecutionPlanStatus.h>
#include <aws/kendra-ranking/model/RescoreExecutionPlanSummary.h>
#include <aws/kendra-ranking/model/RescoreRequest.h>
#include <aws/kendra-ranking/model/RescoreResult.h>
#include <aws/kendra-ranking/model/RescoreResultItem.h>
#include <aws/kendra-ranking/model/Tag.h>
#include <aws/kendra-ranking/model/TagResourceRequest.h>
#include <aws/kendra-ranking/model/TagResourceResult.h>
#include <aws/kendra-ranking/model/UntagResourceRequest.h>
#include <aws/kendra-ranking/model/UntagResourceResult.h>
#include <aws/kendra-ranking/model/UpdateRescoreExecutionPlanRequest.h>

using KendraRankingIncludeTest = ::testing::Test;

TEST_F(KendraRankingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KendraRanking::KendraRankingClient>("KendraRankingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
