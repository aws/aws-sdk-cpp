/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailorServiceClientModel.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ListSourceLocationsRequest.h>
#include <aws/mediatailor/model/ListSourceLocationsResult.h>

namespace Aws {
namespace MediaTailor {
namespace Pagination {

template <typename Client = MediaTailorClient>
struct ListSourceLocationsPaginationTraits {
  using RequestType = Model::ListSourceLocationsRequest;
  using ResultType = Model::ListSourceLocationsResult;
  using OutcomeType = Model::ListSourceLocationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSourceLocations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaTailor
}  // namespace Aws
