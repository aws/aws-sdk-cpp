/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/SnowballServiceClientModel.h>
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ListPickupLocationsRequest.h>
#include <aws/snowball/model/ListPickupLocationsResult.h>

namespace Aws {
namespace Snowball {
namespace Pagination {

template <typename Client = SnowballClient>
struct ListPickupLocationsPaginationTraits {
  using RequestType = Model::ListPickupLocationsRequest;
  using ResultType = Model::ListPickupLocationsResult;
  using OutcomeType = Model::ListPickupLocationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPickupLocations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Snowball
}  // namespace Aws
