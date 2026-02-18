/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLakeServiceClientModel.h>
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/ListLogSourcesRequest.h>
#include <aws/securitylake/model/ListLogSourcesResult.h>

namespace Aws {
namespace SecurityLake {
namespace Pagination {

template <typename Client = SecurityLakeClient>
struct ListLogSourcesPaginationTraits {
  using RequestType = Model::ListLogSourcesRequest;
  using ResultType = Model::ListLogSourcesResult;
  using OutcomeType = Model::ListLogSourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLogSources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityLake
}  // namespace Aws
