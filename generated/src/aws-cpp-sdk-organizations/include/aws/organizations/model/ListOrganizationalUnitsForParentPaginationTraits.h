/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/OrganizationsServiceClientModel.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ListOrganizationalUnitsForParentRequest.h>
#include <aws/organizations/model/ListOrganizationalUnitsForParentResult.h>

namespace Aws {
namespace Organizations {
namespace Pagination {

template <typename Client = OrganizationsClient>
struct ListOrganizationalUnitsForParentPaginationTraits {
  using RequestType = Model::ListOrganizationalUnitsForParentRequest;
  using ResultType = Model::ListOrganizationalUnitsForParentResult;
  using OutcomeType = Model::ListOrganizationalUnitsForParentOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOrganizationalUnitsForParent(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Organizations
}  // namespace Aws
