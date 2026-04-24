/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/SchemasServiceClientModel.h>
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/model/ListDiscoverersRequest.h>
#include <aws/schemas/model/ListDiscoverersResult.h>

namespace Aws {
namespace Schemas {
namespace Pagination {

template <typename Client = SchemasClient>
struct ListDiscoverersPaginationTraits {
  using RequestType = Model::ListDiscoverersRequest;
  using ResultType = Model::ListDiscoverersResult;
  using OutcomeType = Model::ListDiscoverersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDiscoverers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Schemas
}  // namespace Aws
