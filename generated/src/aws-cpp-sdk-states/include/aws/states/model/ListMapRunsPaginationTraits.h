/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFNServiceClientModel.h>
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/ListMapRunsRequest.h>
#include <aws/states/model/ListMapRunsResult.h>

namespace Aws {
namespace SFN {
namespace Pagination {

template <typename Client = SFNClient>
struct ListMapRunsPaginationTraits {
  using RequestType = Model::ListMapRunsRequest;
  using ResultType = Model::ListMapRunsResult;
  using OutcomeType = Model::ListMapRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMapRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SFN
}  // namespace Aws
