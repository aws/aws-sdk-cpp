/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/RepostspaceServiceClientModel.h>
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/model/ListChannelsRequest.h>
#include <aws/repostspace/model/ListChannelsResult.h>

namespace Aws {
namespace repostspace {
namespace Pagination {

template <typename Client = RepostspaceClient>
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
}  // namespace repostspace
}  // namespace Aws
