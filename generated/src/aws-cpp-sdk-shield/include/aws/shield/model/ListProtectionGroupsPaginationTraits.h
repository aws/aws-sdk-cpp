/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/ShieldServiceClientModel.h>
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ListProtectionGroupsRequest.h>
#include <aws/shield/model/ListProtectionGroupsResult.h>

namespace Aws {
namespace Shield {
namespace Pagination {

template <typename Client = ShieldClient>
struct ListProtectionGroupsPaginationTraits {
  using RequestType = Model::ListProtectionGroupsRequest;
  using ResultType = Model::ListProtectionGroupsResult;
  using OutcomeType = Model::ListProtectionGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProtectionGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Shield
}  // namespace Aws
