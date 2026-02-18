/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/OrganizationsServiceClientModel.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ListPoliciesRequest.h>
#include <aws/organizations/model/ListPoliciesResult.h>

namespace Aws {
namespace Organizations {
namespace Pagination {

template <typename Client = OrganizationsClient>
struct ListPoliciesPaginationTraits {
  using RequestType = Model::ListPoliciesRequest;
  using ResultType = Model::ListPoliciesResult;
  using OutcomeType = Model::ListPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Organizations
}  // namespace Aws
