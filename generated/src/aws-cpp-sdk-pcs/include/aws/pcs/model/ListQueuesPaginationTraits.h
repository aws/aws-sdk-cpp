/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCSServiceClientModel.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/ListQueuesRequest.h>
#include <aws/pcs/model/ListQueuesResult.h>

namespace Aws {
namespace PCS {
namespace Pagination {

template <typename Client = PCSClient>
struct ListQueuesPaginationTraits {
  using RequestType = Model::ListQueuesRequest;
  using ResultType = Model::ListQueuesResult;
  using OutcomeType = Model::ListQueuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListQueues(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PCS
}  // namespace Aws
