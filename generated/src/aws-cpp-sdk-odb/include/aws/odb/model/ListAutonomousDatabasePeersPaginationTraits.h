/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListAutonomousDatabasePeersRequest.h>
#include <aws/odb/model/ListAutonomousDatabasePeersResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListAutonomousDatabasePeersPaginationTraits {
  using RequestType = Model::ListAutonomousDatabasePeersRequest;
  using ResultType = Model::ListAutonomousDatabasePeersResult;
  using OutcomeType = Model::ListAutonomousDatabasePeersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutonomousDatabasePeers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
