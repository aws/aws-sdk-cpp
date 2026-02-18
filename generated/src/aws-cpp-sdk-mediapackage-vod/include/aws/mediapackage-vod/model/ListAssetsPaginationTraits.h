/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVodServiceClientModel.h>
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/ListAssetsRequest.h>
#include <aws/mediapackage-vod/model/ListAssetsResult.h>

namespace Aws {
namespace MediaPackageVod {
namespace Pagination {

template <typename Client = MediaPackageVodClient>
struct ListAssetsPaginationTraits {
  using RequestType = Model::ListAssetsRequest;
  using ResultType = Model::ListAssetsResult;
  using OutcomeType = Model::ListAssetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaPackageVod
}  // namespace Aws
