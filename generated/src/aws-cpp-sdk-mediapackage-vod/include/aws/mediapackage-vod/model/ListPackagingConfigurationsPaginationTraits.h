/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVodServiceClientModel.h>
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsRequest.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsResult.h>

namespace Aws {
namespace MediaPackageVod {
namespace Pagination {

template <typename Client = MediaPackageVodClient>
struct ListPackagingConfigurationsPaginationTraits {
  using RequestType = Model::ListPackagingConfigurationsRequest;
  using ResultType = Model::ListPackagingConfigurationsResult;
  using OutcomeType = Model::ListPackagingConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPackagingConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaPackageVod
}  // namespace Aws
