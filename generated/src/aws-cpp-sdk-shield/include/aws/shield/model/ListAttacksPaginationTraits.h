/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/ShieldServiceClientModel.h>
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ListAttacksRequest.h>
#include <aws/shield/model/ListAttacksResult.h>

namespace Aws {
namespace Shield {
namespace Pagination {

template <typename Client = ShieldClient>
struct ListAttacksPaginationTraits {
  using RequestType = Model::ListAttacksRequest;
  using ResultType = Model::ListAttacksResult;
  using OutcomeType = Model::ListAttacksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAttacks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Shield
}  // namespace Aws
