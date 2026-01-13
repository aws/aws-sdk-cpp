/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHubServiceClientModel.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GetResourcesTrendsV2Request.h>
#include <aws/securityhub/model/GetResourcesTrendsV2Result.h>

namespace Aws {
namespace SecurityHub {
namespace Pagination {

template <typename Client = SecurityHubClient>
struct GetResourcesTrendsV2PaginationTraits {
  using RequestType = Model::GetResourcesTrendsV2Request;
  using ResultType = Model::GetResourcesTrendsV2Result;
  using OutcomeType = Model::GetResourcesTrendsV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetResourcesTrendsV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityHub
}  // namespace Aws
