/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGatewayServiceClientModel.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/ListVolumesRequest.h>
#include <aws/storagegateway/model/ListVolumesResult.h>

namespace Aws {
namespace StorageGateway {
namespace Pagination {

template <typename Client = StorageGatewayClient>
struct ListVolumesPaginationTraits {
  using RequestType = Model::ListVolumesRequest;
  using ResultType = Model::ListVolumesResult;
  using OutcomeType = Model::ListVolumesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVolumes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace StorageGateway
}  // namespace Aws
