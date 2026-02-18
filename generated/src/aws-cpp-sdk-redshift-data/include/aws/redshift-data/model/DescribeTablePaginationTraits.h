/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIServiceServiceClientModel.h>
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/model/DescribeTableRequest.h>
#include <aws/redshift-data/model/DescribeTableResult.h>

namespace Aws {
namespace RedshiftDataAPIService {
namespace Pagination {

template <typename Client = RedshiftDataAPIServiceClient>
struct DescribeTablePaginationTraits {
  using RequestType = Model::DescribeTableRequest;
  using ResultType = Model::DescribeTableResult;
  using OutcomeType = Model::DescribeTableOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTable(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RedshiftDataAPIService
}  // namespace Aws
