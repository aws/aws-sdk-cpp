/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/OrganizationsServiceClientModel.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ListPoliciesForTargetRequest.h>
#include <aws/organizations/model/ListPoliciesForTargetResult.h>

namespace Aws {
namespace Organizations {
namespace Pagination {

template <typename Client = OrganizationsClient>
struct ListPoliciesForTargetPaginationTraits {
  using RequestType = Model::ListPoliciesForTargetRequest;
  using ResultType = Model::ListPoliciesForTargetResult;
  using OutcomeType = Model::ListPoliciesForTargetOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPoliciesForTarget(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Organizations
}  // namespace Aws
