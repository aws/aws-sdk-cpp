/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFNServiceClientModel.h>
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/GetExecutionHistoryRequest.h>
#include <aws/states/model/GetExecutionHistoryResult.h>

namespace Aws {
namespace SFN {
namespace Pagination {

template <typename Client = SFNClient>
struct GetExecutionHistoryPaginationTraits {
  using RequestType = Model::GetExecutionHistoryRequest;
  using ResultType = Model::GetExecutionHistoryResult;
  using OutcomeType = Model::GetExecutionHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetExecutionHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SFN
}  // namespace Aws
