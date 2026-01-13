/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsRequest.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListHyperParameterTuningJobsPaginationTraits {
  using RequestType = Model::ListHyperParameterTuningJobsRequest;
  using ResultType = Model::ListHyperParameterTuningJobsResult;
  using OutcomeType = Model::ListHyperParameterTuningJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHyperParameterTuningJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
