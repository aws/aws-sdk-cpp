/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdminServiceClientModel.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusResult.h>

namespace Aws {
namespace SSOAdmin {
namespace Pagination {

template <typename Client = SSOAdminClient>
struct ListPermissionSetProvisioningStatusPaginationTraits {
  using RequestType = Model::ListPermissionSetProvisioningStatusRequest;
  using ResultType = Model::ListPermissionSetProvisioningStatusResult;
  using OutcomeType = Model::ListPermissionSetProvisioningStatusOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPermissionSetProvisioningStatus(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSOAdmin
}  // namespace Aws
