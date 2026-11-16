/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListInferenceRoutersRequest.h>
#include <aws/sagemaker/model/ListInferenceRoutersResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListInferenceRoutersPaginationTraits {
  using RequestType = Model::ListInferenceRoutersRequest;
  using ResultType = Model::ListInferenceRoutersResult;
  using OutcomeType = Model::ListInferenceRoutersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInferenceRouters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
