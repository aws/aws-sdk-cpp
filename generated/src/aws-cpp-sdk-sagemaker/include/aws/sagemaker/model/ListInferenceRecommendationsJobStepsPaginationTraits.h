/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListInferenceRecommendationsJobStepsPaginationTraits {
  using RequestType = Model::ListInferenceRecommendationsJobStepsRequest;
  using ResultType = Model::ListInferenceRecommendationsJobStepsResult;
  using OutcomeType = Model::ListInferenceRecommendationsJobStepsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInferenceRecommendationsJobSteps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
