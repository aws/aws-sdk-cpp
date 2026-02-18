/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLiveServiceClientModel.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesRequest.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesResult.h>

namespace Aws {
namespace MediaLive {
namespace Pagination {

template <typename Client = MediaLiveClient>
struct ListCloudWatchAlarmTemplatesPaginationTraits {
  using RequestType = Model::ListCloudWatchAlarmTemplatesRequest;
  using ResultType = Model::ListCloudWatchAlarmTemplatesResult;
  using OutcomeType = Model::ListCloudWatchAlarmTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCloudWatchAlarmTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaLive
}  // namespace Aws
