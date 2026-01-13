/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansRequest.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListEdgeDeploymentPlansPaginationTraits {
  using RequestType = Model::ListEdgeDeploymentPlansRequest;
  using ResultType = Model::ListEdgeDeploymentPlansResult;
  using OutcomeType = Model::ListEdgeDeploymentPlansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEdgeDeploymentPlans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
