/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/SchemasServiceClientModel.h>
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/model/ListSchemasRequest.h>
#include <aws/schemas/model/ListSchemasResult.h>

namespace Aws {
namespace Schemas {
namespace Pagination {

template <typename Client = SchemasClient>
struct ListSchemasPaginationTraits {
  using RequestType = Model::ListSchemasRequest;
  using ResultType = Model::ListSchemasResult;
  using OutcomeType = Model::ListSchemasOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSchemas(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Schemas
}  // namespace Aws
