/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVodServiceClientModel.h>
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsRequest.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsResult.h>

namespace Aws {
namespace MediaPackageVod {
namespace Pagination {

template <typename Client = MediaPackageVodClient>
struct ListPackagingGroupsPaginationTraits {
  using RequestType = Model::ListPackagingGroupsRequest;
  using ResultType = Model::ListPackagingGroupsResult;
  using OutcomeType = Model::ListPackagingGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPackagingGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaPackageVod
}  // namespace Aws
