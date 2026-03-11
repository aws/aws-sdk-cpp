/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DescribeTrainingPlanExtensionHistoryRequest.h>
#include <aws/sagemaker/model/DescribeTrainingPlanExtensionHistoryResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct DescribeTrainingPlanExtensionHistoryPaginationTraits {
  using RequestType = Model::DescribeTrainingPlanExtensionHistoryRequest;
  using ResultType = Model::DescribeTrainingPlanExtensionHistoryResult;
  using OutcomeType = Model::DescribeTrainingPlanExtensionHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTrainingPlanExtensionHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
