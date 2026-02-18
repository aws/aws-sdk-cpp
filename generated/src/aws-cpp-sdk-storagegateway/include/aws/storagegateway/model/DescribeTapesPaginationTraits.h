/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGatewayServiceClientModel.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/DescribeTapesRequest.h>
#include <aws/storagegateway/model/DescribeTapesResult.h>

namespace Aws {
namespace StorageGateway {
namespace Pagination {

template <typename Client = StorageGatewayClient>
struct DescribeTapesPaginationTraits {
  using RequestType = Model::DescribeTapesRequest;
  using ResultType = Model::DescribeTapesResult;
  using OutcomeType = Model::DescribeTapesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTapes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace StorageGateway
}  // namespace Aws
