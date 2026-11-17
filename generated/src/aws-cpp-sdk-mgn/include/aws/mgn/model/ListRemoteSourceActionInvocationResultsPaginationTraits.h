/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ListRemoteSourceActionInvocationResultsRequest.h>
#include <aws/mgn/model/ListRemoteSourceActionInvocationResultsResult.h>

namespace Aws {
namespace mgn {
namespace Pagination {

template <typename Client = MgnClient>
struct ListRemoteSourceActionInvocationResultsPaginationTraits {
  using RequestType = Model::ListRemoteSourceActionInvocationResultsRequest;
  using ResultType = Model::ListRemoteSourceActionInvocationResultsResult;
  using OutcomeType = Model::ListRemoteSourceActionInvocationResultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRemoteSourceActionInvocationResults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace mgn
}  // namespace Aws
