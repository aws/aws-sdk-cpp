/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackageServiceClientModel.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/ListChannelsRequest.h>
#include <aws/mediapackage/model/ListChannelsResult.h>

namespace Aws {
namespace MediaPackage {
namespace Pagination {

template <typename Client = MediaPackageClient>
struct ListChannelsPaginationTraits {
  using RequestType = Model::ListChannelsRequest;
  using ResultType = Model::ListChannelsResult;
  using OutcomeType = Model::ListChannelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListChannels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaPackage
}  // namespace Aws
