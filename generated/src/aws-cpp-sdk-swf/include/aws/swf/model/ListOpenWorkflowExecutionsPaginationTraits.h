/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWFServiceClientModel.h>
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsRequest.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsResult.h>

namespace Aws {
namespace SWF {
namespace Pagination {

template <typename Client = SWFClient>
struct ListOpenWorkflowExecutionsPaginationTraits {
  using RequestType = Model::ListOpenWorkflowExecutionsRequest;
  using ResultType = Model::ListOpenWorkflowExecutionsResult;
  using OutcomeType = Model::ListOpenWorkflowExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOpenWorkflowExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace SWF
}  // namespace Aws
