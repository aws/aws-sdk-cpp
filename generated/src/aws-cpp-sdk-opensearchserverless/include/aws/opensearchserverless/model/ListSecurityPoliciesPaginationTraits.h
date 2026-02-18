/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerlessServiceClientModel.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesRequest.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesResult.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Pagination {

template <typename Client = OpenSearchServerlessClient>
struct ListSecurityPoliciesPaginationTraits {
  using RequestType = Model::ListSecurityPoliciesRequest;
  using ResultType = Model::ListSecurityPoliciesResult;
  using OutcomeType = Model::ListSecurityPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSecurityPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OpenSearchServerless
}  // namespace Aws
