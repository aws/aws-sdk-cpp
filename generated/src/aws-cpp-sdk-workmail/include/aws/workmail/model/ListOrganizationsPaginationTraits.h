/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMailServiceClientModel.h>
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/ListOrganizationsRequest.h>
#include <aws/workmail/model/ListOrganizationsResult.h>

namespace Aws {
namespace WorkMail {
namespace Pagination {

template <typename Client = WorkMailClient>
struct ListOrganizationsPaginationTraits {
  using RequestType = Model::ListOrganizationsRequest;
  using ResultType = Model::ListOrganizationsResult;
  using OutcomeType = Model::ListOrganizationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOrganizations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkMail
}  // namespace Aws
