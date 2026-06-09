/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListAutonomousDatabaseClonesRequest.h>
#include <aws/odb/model/ListAutonomousDatabaseClonesResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListAutonomousDatabaseClonesPaginationTraits {
  using RequestType = Model::ListAutonomousDatabaseClonesRequest;
  using ResultType = Model::ListAutonomousDatabaseClonesResult;
  using OutcomeType = Model::ListAutonomousDatabaseClonesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutonomousDatabaseClones(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
