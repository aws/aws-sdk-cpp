/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIServiceServiceClientModel.h>
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/model/ListStatementsRequest.h>
#include <aws/redshift-data/model/ListStatementsResult.h>

namespace Aws {
namespace RedshiftDataAPIService {
namespace Pagination {

template <typename Client = RedshiftDataAPIServiceClient>
struct ListStatementsPaginationTraits {
  using RequestType = Model::ListStatementsRequest;
  using ResultType = Model::ListStatementsResult;
  using OutcomeType = Model::ListStatementsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStatements(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RedshiftDataAPIService
}  // namespace Aws
