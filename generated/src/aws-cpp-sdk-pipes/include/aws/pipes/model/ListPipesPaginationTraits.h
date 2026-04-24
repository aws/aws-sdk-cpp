/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/PipesServiceClientModel.h>
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/ListPipesRequest.h>
#include <aws/pipes/model/ListPipesResult.h>

namespace Aws {
namespace Pipes {
namespace Pagination {

template <typename Client = PipesClient>
struct ListPipesPaginationTraits {
  using RequestType = Model::ListPipesRequest;
  using ResultType = Model::ListPipesResult;
  using OutcomeType = Model::ListPipesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPipes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Pipes
}  // namespace Aws
