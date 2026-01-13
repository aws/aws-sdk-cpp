/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhereServiceClientModel.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/ListCrlsRequest.h>
#include <aws/rolesanywhere/model/ListCrlsResult.h>

namespace Aws {
namespace RolesAnywhere {
namespace Pagination {

template <typename Client = RolesAnywhereClient>
struct ListCrlsPaginationTraits {
  using RequestType = Model::ListCrlsRequest;
  using ResultType = Model::ListCrlsResult;
  using OutcomeType = Model::ListCrlsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCrls(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RolesAnywhere
}  // namespace Aws
