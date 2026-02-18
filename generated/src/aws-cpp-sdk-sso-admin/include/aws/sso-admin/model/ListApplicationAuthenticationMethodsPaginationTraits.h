/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdminServiceClientModel.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/ListApplicationAuthenticationMethodsRequest.h>
#include <aws/sso-admin/model/ListApplicationAuthenticationMethodsResult.h>

namespace Aws {
namespace SSOAdmin {
namespace Pagination {

template <typename Client = SSOAdminClient>
struct ListApplicationAuthenticationMethodsPaginationTraits {
  using RequestType = Model::ListApplicationAuthenticationMethodsRequest;
  using ResultType = Model::ListApplicationAuthenticationMethodsResult;
  using OutcomeType = Model::ListApplicationAuthenticationMethodsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationAuthenticationMethods(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSOAdmin
}  // namespace Aws
