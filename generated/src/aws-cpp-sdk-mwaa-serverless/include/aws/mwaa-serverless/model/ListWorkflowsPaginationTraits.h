/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa-serverless/MWAAServerlessServiceClientModel.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/ListWorkflowsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowsResult.h>

namespace Aws {
namespace MWAAServerless {
namespace Pagination {

template <typename Client = MWAAServerlessClient>
struct ListWorkflowsPaginationTraits {
  using RequestType = Model::ListWorkflowsRequest;
  using ResultType = Model::ListWorkflowsResult;
  using OutcomeType = Model::ListWorkflowsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkflows(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MWAAServerless
}  // namespace Aws
