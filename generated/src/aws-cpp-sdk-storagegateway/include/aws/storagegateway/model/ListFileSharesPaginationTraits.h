/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGatewayServiceClientModel.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/ListFileSharesRequest.h>
#include <aws/storagegateway/model/ListFileSharesResult.h>

namespace Aws {
namespace StorageGateway {
namespace Pagination {

template <typename Client = StorageGatewayClient>
struct ListFileSharesPaginationTraits {
  using RequestType = Model::ListFileSharesRequest;
  using ResultType = Model::ListFileSharesResult;
  using OutcomeType = Model::ListFileSharesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFileShares(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace StorageGateway
}  // namespace Aws
