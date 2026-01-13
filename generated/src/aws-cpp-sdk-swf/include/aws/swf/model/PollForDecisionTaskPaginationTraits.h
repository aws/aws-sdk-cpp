/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWFServiceClientModel.h>
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/PollForDecisionTaskRequest.h>
#include <aws/swf/model/PollForDecisionTaskResult.h>

namespace Aws {
namespace SWF {
namespace Pagination {

template <typename Client = SWFClient>
struct PollForDecisionTaskPaginationTraits {
  using RequestType = Model::PollForDecisionTaskRequest;
  using ResultType = Model::PollForDecisionTaskResult;
  using OutcomeType = Model::PollForDecisionTaskOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->PollForDecisionTask(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace SWF
}  // namespace Aws
