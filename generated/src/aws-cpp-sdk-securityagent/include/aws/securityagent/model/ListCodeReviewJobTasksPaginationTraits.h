/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgentServiceClientModel.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ListCodeReviewJobTasksRequest.h>
#include <aws/securityagent/model/ListCodeReviewJobTasksResult.h>

namespace Aws {
namespace SecurityAgent {
namespace Pagination {

template <typename Client = SecurityAgentClient>
struct ListCodeReviewJobTasksPaginationTraits {
  using RequestType = Model::ListCodeReviewJobTasksRequest;
  using ResultType = Model::ListCodeReviewJobTasksResult;
  using OutcomeType = Model::ListCodeReviewJobTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCodeReviewJobTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityAgent
}  // namespace Aws
