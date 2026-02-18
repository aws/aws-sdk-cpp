/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSOServiceClientModel.h>
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/model/ListAccountRolesRequest.h>
#include <aws/sso/model/ListAccountRolesResult.h>

namespace Aws {
namespace SSO {
namespace Pagination {

template <typename Client = SSOClient>
struct ListAccountRolesPaginationTraits {
  using RequestType = Model::ListAccountRolesRequest;
  using ResultType = Model::ListAccountRolesResult;
  using OutcomeType = Model::ListAccountRolesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccountRoles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSO
}  // namespace Aws
