/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhereServiceClientModel.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/ListProfilesRequest.h>
#include <aws/rolesanywhere/model/ListProfilesResult.h>

namespace Aws {
namespace RolesAnywhere {
namespace Pagination {

template <typename Client = RolesAnywhereClient>
struct ListProfilesPaginationTraits {
  using RequestType = Model::ListProfilesRequest;
  using ResultType = Model::ListProfilesResult;
  using OutcomeType = Model::ListProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RolesAnywhere
}  // namespace Aws
