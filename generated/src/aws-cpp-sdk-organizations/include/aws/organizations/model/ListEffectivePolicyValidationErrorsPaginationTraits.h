/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/OrganizationsServiceClientModel.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ListEffectivePolicyValidationErrorsRequest.h>
#include <aws/organizations/model/ListEffectivePolicyValidationErrorsResult.h>

namespace Aws {
namespace Organizations {
namespace Pagination {

template <typename Client = OrganizationsClient>
struct ListEffectivePolicyValidationErrorsPaginationTraits {
  using RequestType = Model::ListEffectivePolicyValidationErrorsRequest;
  using ResultType = Model::ListEffectivePolicyValidationErrorsResult;
  using OutcomeType = Model::ListEffectivePolicyValidationErrorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEffectivePolicyValidationErrors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Organizations
}  // namespace Aws
