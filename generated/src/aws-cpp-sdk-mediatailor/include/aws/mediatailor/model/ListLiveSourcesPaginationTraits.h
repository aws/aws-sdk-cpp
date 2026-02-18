/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailorServiceClientModel.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ListLiveSourcesRequest.h>
#include <aws/mediatailor/model/ListLiveSourcesResult.h>

namespace Aws {
namespace MediaTailor {
namespace Pagination {

template <typename Client = MediaTailorClient>
struct ListLiveSourcesPaginationTraits {
  using RequestType = Model::ListLiveSourcesRequest;
  using ResultType = Model::ListLiveSourcesResult;
  using OutcomeType = Model::ListLiveSourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLiveSources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaTailor
}  // namespace Aws
