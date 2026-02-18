/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/TnbServiceClientModel.h>
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/ListSolNetworkInstancesRequest.h>
#include <aws/tnb/model/ListSolNetworkInstancesResult.h>

namespace Aws {
namespace tnb {
namespace Pagination {

template <typename Client = TnbClient>
struct ListSolNetworkInstancesPaginationTraits {
  using RequestType = Model::ListSolNetworkInstancesRequest;
  using ResultType = Model::ListSolNetworkInstancesResult;
  using OutcomeType = Model::ListSolNetworkInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSolNetworkInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace tnb
}  // namespace Aws
