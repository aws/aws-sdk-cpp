/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListAutonomousDatabasesRequest.h>
#include <aws/odb/model/ListAutonomousDatabasesResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListAutonomousDatabasesPaginationTraits {
  using RequestType = Model::ListAutonomousDatabasesRequest;
  using ResultType = Model::ListAutonomousDatabasesResult;
  using OutcomeType = Model::ListAutonomousDatabasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutonomousDatabases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
