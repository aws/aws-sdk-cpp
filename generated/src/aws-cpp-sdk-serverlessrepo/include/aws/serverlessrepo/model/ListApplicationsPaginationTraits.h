/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepositoryServiceClientModel.h>
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/model/ListApplicationsRequest.h>
#include <aws/serverlessrepo/model/ListApplicationsResult.h>

namespace Aws {
namespace ServerlessApplicationRepository {
namespace Pagination {

template <typename Client = ServerlessApplicationRepositoryClient>
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
}  // namespace ServerlessApplicationRepository
}  // namespace Aws
