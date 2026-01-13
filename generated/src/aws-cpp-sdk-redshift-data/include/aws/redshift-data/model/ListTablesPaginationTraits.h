/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIServiceServiceClientModel.h>
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/model/ListTablesRequest.h>
#include <aws/redshift-data/model/ListTablesResult.h>

namespace Aws {
namespace RedshiftDataAPIService {
namespace Pagination {

template <typename Client = RedshiftDataAPIServiceClient>
struct ListTablesPaginationTraits {
  using RequestType = Model::ListTablesRequest;
  using ResultType = Model::ListTablesResult;
  using OutcomeType = Model::ListTablesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTables(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RedshiftDataAPIService
}  // namespace Aws
