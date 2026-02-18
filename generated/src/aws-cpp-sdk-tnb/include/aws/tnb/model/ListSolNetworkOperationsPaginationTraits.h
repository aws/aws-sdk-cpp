/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/TnbServiceClientModel.h>
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/ListSolNetworkOperationsRequest.h>
#include <aws/tnb/model/ListSolNetworkOperationsResult.h>

namespace Aws {
namespace tnb {
namespace Pagination {

template <typename Client = TnbClient>
struct ListSolNetworkOperationsPaginationTraits {
  using RequestType = Model::ListSolNetworkOperationsRequest;
  using ResultType = Model::ListSolNetworkOperationsResult;
  using OutcomeType = Model::ListSolNetworkOperationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSolNetworkOperations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace tnb
}  // namespace Aws
