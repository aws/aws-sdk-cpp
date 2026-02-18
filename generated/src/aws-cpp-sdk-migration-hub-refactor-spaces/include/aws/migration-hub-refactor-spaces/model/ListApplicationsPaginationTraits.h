/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesServiceClientModel.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsResult.h>

namespace Aws {
namespace MigrationHubRefactorSpaces {
namespace Pagination {

template <typename Client = MigrationHubRefactorSpacesClient>
struct ListApplicationsPaginationTraits {
  using RequestType = Model::ListApplicationsRequest;
  using ResultType = Model::ListApplicationsResult;
  using OutcomeType = Model::ListApplicationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
