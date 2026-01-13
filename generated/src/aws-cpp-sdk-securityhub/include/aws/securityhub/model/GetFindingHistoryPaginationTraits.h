/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHubServiceClientModel.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GetFindingHistoryRequest.h>
#include <aws/securityhub/model/GetFindingHistoryResult.h>

namespace Aws {
namespace SecurityHub {
namespace Pagination {

template <typename Client = SecurityHubClient>
struct GetFindingHistoryPaginationTraits {
  using RequestType = Model::GetFindingHistoryRequest;
  using ResultType = Model::GetFindingHistoryResult;
  using OutcomeType = Model::GetFindingHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetFindingHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityHub
}  // namespace Aws
