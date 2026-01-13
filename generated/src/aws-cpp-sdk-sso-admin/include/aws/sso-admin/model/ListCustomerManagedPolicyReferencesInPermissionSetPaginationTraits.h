/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdminServiceClientModel.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetResult.h>

namespace Aws {
namespace SSOAdmin {
namespace Pagination {

template <typename Client = SSOAdminClient>
struct ListCustomerManagedPolicyReferencesInPermissionSetPaginationTraits {
  using RequestType = Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest;
  using ResultType = Model::ListCustomerManagedPolicyReferencesInPermissionSetResult;
  using OutcomeType = Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListCustomerManagedPolicyReferencesInPermissionSet(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSOAdmin
}  // namespace Aws
