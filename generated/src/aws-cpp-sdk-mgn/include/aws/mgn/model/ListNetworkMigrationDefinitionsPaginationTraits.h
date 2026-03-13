/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ListNetworkMigrationDefinitionsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationDefinitionsResult.h>

namespace Aws {
namespace mgn {
namespace Pagination {

template <typename Client = MgnClient>
struct ListNetworkMigrationDefinitionsPaginationTraits {
  using RequestType = Model::ListNetworkMigrationDefinitionsRequest;
  using ResultType = Model::ListNetworkMigrationDefinitionsResult;
  using OutcomeType = Model::ListNetworkMigrationDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListNetworkMigrationDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace mgn
}  // namespace Aws
