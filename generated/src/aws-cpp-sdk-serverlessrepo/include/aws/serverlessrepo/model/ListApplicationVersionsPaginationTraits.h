/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepositoryServiceClientModel.h>
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsRequest.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsResult.h>

namespace Aws {
namespace ServerlessApplicationRepository {
namespace Pagination {

template <typename Client = ServerlessApplicationRepositoryClient>
struct ListApplicationVersionsPaginationTraits {
  using RequestType = Model::ListApplicationVersionsRequest;
  using ResultType = Model::ListApplicationVersionsResult;
  using OutcomeType = Model::ListApplicationVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ServerlessApplicationRepository
}  // namespace Aws
