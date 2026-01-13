/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListModelExplainabilityJobDefinitionsPaginationTraits {
  using RequestType = Model::ListModelExplainabilityJobDefinitionsRequest;
  using ResultType = Model::ListModelExplainabilityJobDefinitionsResult;
  using OutcomeType = Model::ListModelExplainabilityJobDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListModelExplainabilityJobDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
