/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/ShieldServiceClientModel.h>
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ListResourcesInProtectionGroupRequest.h>
#include <aws/shield/model/ListResourcesInProtectionGroupResult.h>

namespace Aws {
namespace Shield {
namespace Pagination {

template <typename Client = ShieldClient>
struct ListResourcesInProtectionGroupPaginationTraits {
  using RequestType = Model::ListResourcesInProtectionGroupRequest;
  using ResultType = Model::ListResourcesInProtectionGroupResult;
  using OutcomeType = Model::ListResourcesInProtectionGroupOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourcesInProtectionGroup(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Shield
}  // namespace Aws
