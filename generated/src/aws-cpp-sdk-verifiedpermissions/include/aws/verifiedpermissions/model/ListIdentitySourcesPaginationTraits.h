/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissionsServiceClientModel.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/ListIdentitySourcesRequest.h>
#include <aws/verifiedpermissions/model/ListIdentitySourcesResult.h>

namespace Aws {
namespace VerifiedPermissions {
namespace Pagination {

template <typename Client = VerifiedPermissionsClient>
struct ListIdentitySourcesPaginationTraits {
  using RequestType = Model::ListIdentitySourcesRequest;
  using ResultType = Model::ListIdentitySourcesResult;
  using OutcomeType = Model::ListIdentitySourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIdentitySources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VerifiedPermissions
}  // namespace Aws
