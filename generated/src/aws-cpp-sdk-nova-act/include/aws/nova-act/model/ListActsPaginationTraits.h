/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nova-act/NovaActServiceClientModel.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ListActsRequest.h>
#include <aws/nova-act/model/ListActsResult.h>

namespace Aws {
namespace NovaAct {
namespace Pagination {

template <typename Client = NovaActClient>
struct ListActsPaginationTraits {
  using RequestType = Model::ListActsRequest;
  using ResultType = Model::ListActsResult;
  using OutcomeType = Model::ListActsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListActs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NovaAct
}  // namespace Aws
