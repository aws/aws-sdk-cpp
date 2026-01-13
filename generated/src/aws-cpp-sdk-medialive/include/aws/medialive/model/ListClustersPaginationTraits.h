/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLiveServiceClientModel.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ListClustersRequest.h>
#include <aws/medialive/model/ListClustersSdkResult.h>

namespace Aws {
namespace MediaLive {
namespace Pagination {

template <typename Client = MediaLiveClient>
struct ListClustersPaginationTraits {
  using RequestType = Model::ListClustersRequest;
  using ResultType = Model::ListClustersSdkResult;
  using OutcomeType = Model::ListClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaLive
}  // namespace Aws
