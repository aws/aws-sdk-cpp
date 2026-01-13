/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHubServiceClientModel.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ListResiliencyPoliciesRequest.h>
#include <aws/resiliencehub/model/ListResiliencyPoliciesResult.h>

namespace Aws {
namespace ResilienceHub {
namespace Pagination {

template <typename Client = ResilienceHubClient>
struct ListResiliencyPoliciesPaginationTraits {
  using RequestType = Model::ListResiliencyPoliciesRequest;
  using ResultType = Model::ListResiliencyPoliciesResult;
  using OutcomeType = Model::ListResiliencyPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResiliencyPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResilienceHub
}  // namespace Aws
