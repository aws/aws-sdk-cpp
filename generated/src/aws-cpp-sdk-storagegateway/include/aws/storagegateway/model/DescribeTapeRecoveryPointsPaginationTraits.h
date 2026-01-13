/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGatewayServiceClientModel.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsRequest.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsResult.h>

namespace Aws {
namespace StorageGateway {
namespace Pagination {

template <typename Client = StorageGatewayClient>
struct DescribeTapeRecoveryPointsPaginationTraits {
  using RequestType = Model::DescribeTapeRecoveryPointsRequest;
  using ResultType = Model::DescribeTapeRecoveryPointsResult;
  using OutcomeType = Model::DescribeTapeRecoveryPointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTapeRecoveryPoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace StorageGateway
}  // namespace Aws
