/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurkServiceClientModel.h>
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/ListWorkerBlocksRequest.h>
#include <aws/mturk-requester/model/ListWorkerBlocksResult.h>

namespace Aws {
namespace MTurk {
namespace Pagination {

template <typename Client = MTurkClient>
struct ListWorkerBlocksPaginationTraits {
  using RequestType = Model::ListWorkerBlocksRequest;
  using ResultType = Model::ListWorkerBlocksResult;
  using OutcomeType = Model::ListWorkerBlocksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkerBlocks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MTurk
}  // namespace Aws
