/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListAutonomousDatabaseRefreshableClonesRequest.h>
#include <aws/odb/model/ListAutonomousDatabaseRefreshableClonesResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListAutonomousDatabaseRefreshableClonesPaginationTraits {
  using RequestType = Model::ListAutonomousDatabaseRefreshableClonesRequest;
  using ResultType = Model::ListAutonomousDatabaseRefreshableClonesResult;
  using OutcomeType = Model::ListAutonomousDatabaseRefreshableClonesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutonomousDatabaseRefreshableClones(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
