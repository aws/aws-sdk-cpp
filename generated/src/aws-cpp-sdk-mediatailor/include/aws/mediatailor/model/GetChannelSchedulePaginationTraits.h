/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailorServiceClientModel.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/GetChannelScheduleRequest.h>
#include <aws/mediatailor/model/GetChannelScheduleResult.h>

namespace Aws {
namespace MediaTailor {
namespace Pagination {

template <typename Client = MediaTailorClient>
struct GetChannelSchedulePaginationTraits {
  using RequestType = Model::GetChannelScheduleRequest;
  using ResultType = Model::GetChannelScheduleResult;
  using OutcomeType = Model::GetChannelScheduleOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetChannelSchedule(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaTailor
}  // namespace Aws
