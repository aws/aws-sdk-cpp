/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackageServiceClientModel.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackage/model/ListOriginEndpointsResult.h>

namespace Aws {
namespace MediaPackage {
namespace Pagination {

template <typename Client = MediaPackageClient>
struct ListOriginEndpointsPaginationTraits {
  using RequestType = Model::ListOriginEndpointsRequest;
  using ResultType = Model::ListOriginEndpointsResult;
  using OutcomeType = Model::ListOriginEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOriginEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaPackage
}  // namespace Aws
