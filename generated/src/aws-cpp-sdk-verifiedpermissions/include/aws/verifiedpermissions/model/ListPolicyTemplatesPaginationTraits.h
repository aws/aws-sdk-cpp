/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissionsServiceClientModel.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/ListPolicyTemplatesRequest.h>
#include <aws/verifiedpermissions/model/ListPolicyTemplatesResult.h>

namespace Aws {
namespace VerifiedPermissions {
namespace Pagination {

template <typename Client = VerifiedPermissionsClient>
struct ListPolicyTemplatesPaginationTraits {
  using RequestType = Model::ListPolicyTemplatesRequest;
  using ResultType = Model::ListPolicyTemplatesResult;
  using OutcomeType = Model::ListPolicyTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPolicyTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VerifiedPermissions
}  // namespace Aws
