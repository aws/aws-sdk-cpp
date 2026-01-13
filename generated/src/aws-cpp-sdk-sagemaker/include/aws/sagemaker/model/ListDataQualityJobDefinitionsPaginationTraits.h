/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListDataQualityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListDataQualityJobDefinitionsResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListDataQualityJobDefinitionsPaginationTraits {
  using RequestType = Model::ListDataQualityJobDefinitionsRequest;
  using ResultType = Model::ListDataQualityJobDefinitionsResult;
  using OutcomeType = Model::ListDataQualityJobDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataQualityJobDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
