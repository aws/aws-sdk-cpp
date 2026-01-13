/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLiveServiceClientModel.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ListReservationsRequest.h>
#include <aws/medialive/model/ListReservationsResult.h>

namespace Aws {
namespace MediaLive {
namespace Pagination {

template <typename Client = MediaLiveClient>
struct ListReservationsPaginationTraits {
  using RequestType = Model::ListReservationsRequest;
  using ResultType = Model::ListReservationsResult;
  using OutcomeType = Model::ListReservationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReservations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaLive
}  // namespace Aws
