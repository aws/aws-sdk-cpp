/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa-serverless/MWAAServerlessServiceClientModel.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsResult.h>

namespace Aws {
namespace MWAAServerless {
namespace Pagination {

template <typename Client = MWAAServerlessClient>
struct ListWorkflowRunsPaginationTraits {
  using RequestType = Model::ListWorkflowRunsRequest;
  using ResultType = Model::ListWorkflowRunsResult;
  using OutcomeType = Model::ListWorkflowRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkflowRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MWAAServerless
}  // namespace Aws
