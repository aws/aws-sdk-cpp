/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ListNetworkMigrationDeployedStacksRequest.h>
#include <aws/mgn/model/ListNetworkMigrationDeployedStacksResult.h>

namespace Aws {
namespace mgn {
namespace Pagination {

template <typename Client = MgnClient>
struct ListNetworkMigrationDeployedStacksPaginationTraits {
  using RequestType = Model::ListNetworkMigrationDeployedStacksRequest;
  using ResultType = Model::ListNetworkMigrationDeployedStacksResult;
  using OutcomeType = Model::ListNetworkMigrationDeployedStacksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListNetworkMigrationDeployedStacks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace mgn
}  // namespace Aws
