/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeServiceClientModel.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsRequest.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsResult.h>

namespace Aws {
namespace AugmentedAIRuntime {
namespace Pagination {

template <typename Client = AugmentedAIRuntimeClient>
struct ListHumanLoopsPaginationTraits {
  using RequestType = Model::ListHumanLoopsRequest;
  using ResultType = Model::ListHumanLoopsResult;
  using OutcomeType = Model::ListHumanLoopsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHumanLoops(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AugmentedAIRuntime
}  // namespace Aws
