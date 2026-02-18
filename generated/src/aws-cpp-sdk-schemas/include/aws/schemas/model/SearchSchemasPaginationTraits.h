/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/SchemasServiceClientModel.h>
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/model/SearchSchemasRequest.h>
#include <aws/schemas/model/SearchSchemasResult.h>

namespace Aws {
namespace Schemas {
namespace Pagination {

template <typename Client = SchemasClient>
struct SearchSchemasPaginationTraits {
  using RequestType = Model::SearchSchemasRequest;
  using ResultType = Model::SearchSchemasResult;
  using OutcomeType = Model::SearchSchemasOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchSchemas(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Schemas
}  // namespace Aws
