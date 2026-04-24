/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLakeServiceClientModel.h>
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/ListDataLakeExceptionsRequest.h>
#include <aws/securitylake/model/ListDataLakeExceptionsResult.h>

namespace Aws {
namespace SecurityLake {
namespace Pagination {

template <typename Client = SecurityLakeClient>
struct ListDataLakeExceptionsPaginationTraits {
  using RequestType = Model::ListDataLakeExceptionsRequest;
  using ResultType = Model::ListDataLakeExceptionsResult;
  using OutcomeType = Model::ListDataLakeExceptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataLakeExceptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityLake
}  // namespace Aws
