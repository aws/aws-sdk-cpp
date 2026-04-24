/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissionsServiceClientModel.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/ListPolicyStoreAliasesRequest.h>
#include <aws/verifiedpermissions/model/ListPolicyStoreAliasesResult.h>

namespace Aws {
namespace VerifiedPermissions {
namespace Pagination {

template <typename Client = VerifiedPermissionsClient>
struct ListPolicyStoreAliasesPaginationTraits {
  using RequestType = Model::ListPolicyStoreAliasesRequest;
  using ResultType = Model::ListPolicyStoreAliasesResult;
  using OutcomeType = Model::ListPolicyStoreAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPolicyStoreAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VerifiedPermissions
}  // namespace Aws
