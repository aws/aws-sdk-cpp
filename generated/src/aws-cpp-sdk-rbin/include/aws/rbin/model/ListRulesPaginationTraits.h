/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBinServiceClientModel.h>
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/model/ListRulesRequest.h>
#include <aws/rbin/model/ListRulesResult.h>

namespace Aws {
namespace RecycleBin {
namespace Pagination {

template <typename Client = RecycleBinClient>
struct ListRulesPaginationTraits {
  using RequestType = Model::ListRulesRequest;
  using ResultType = Model::ListRulesResult;
  using OutcomeType = Model::ListRulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RecycleBin
}  // namespace Aws
