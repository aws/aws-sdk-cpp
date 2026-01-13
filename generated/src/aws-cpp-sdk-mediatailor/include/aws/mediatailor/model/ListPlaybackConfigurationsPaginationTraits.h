/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailorServiceClientModel.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsRequest.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsResult.h>

namespace Aws {
namespace MediaTailor {
namespace Pagination {

template <typename Client = MediaTailorClient>
struct ListPlaybackConfigurationsPaginationTraits {
  using RequestType = Model::ListPlaybackConfigurationsRequest;
  using ResultType = Model::ListPlaybackConfigurationsResult;
  using OutcomeType = Model::ListPlaybackConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPlaybackConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaTailor
}  // namespace Aws
