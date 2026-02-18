/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/OrganizationsServiceClientModel.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ListHandshakesForOrganizationRequest.h>
#include <aws/organizations/model/ListHandshakesForOrganizationResult.h>

namespace Aws {
namespace Organizations {
namespace Pagination {

template <typename Client = OrganizationsClient>
struct ListHandshakesForOrganizationPaginationTraits {
  using RequestType = Model::ListHandshakesForOrganizationRequest;
  using ResultType = Model::ListHandshakesForOrganizationResult;
  using OutcomeType = Model::ListHandshakesForOrganizationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHandshakesForOrganization(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Organizations
}  // namespace Aws
