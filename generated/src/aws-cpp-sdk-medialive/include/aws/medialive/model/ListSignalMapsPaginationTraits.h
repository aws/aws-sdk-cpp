/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLiveServiceClientModel.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ListSignalMapsRequest.h>
#include <aws/medialive/model/ListSignalMapsResult.h>

namespace Aws {
namespace MediaLive {
namespace Pagination {

template <typename Client = MediaLiveClient>
struct ListSignalMapsPaginationTraits {
  using RequestType = Model::ListSignalMapsRequest;
  using ResultType = Model::ListSignalMapsResult;
  using OutcomeType = Model::ListSignalMapsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSignalMaps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaLive
}  // namespace Aws
