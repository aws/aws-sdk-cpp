/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHubServiceClientModel.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GetFindingsTrendsV2Request.h>
#include <aws/securityhub/model/GetFindingsTrendsV2Result.h>

namespace Aws {
namespace SecurityHub {
namespace Pagination {

template <typename Client = SecurityHubClient>
struct GetFindingsTrendsV2PaginationTraits {
  using RequestType = Model::GetFindingsTrendsV2Request;
  using ResultType = Model::GetFindingsTrendsV2Result;
  using OutcomeType = Model::GetFindingsTrendsV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetFindingsTrendsV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityHub
}  // namespace Aws
