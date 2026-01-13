/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PIServiceClientModel.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/ListAvailableResourceDimensionsRequest.h>
#include <aws/pi/model/ListAvailableResourceDimensionsResult.h>

namespace Aws {
namespace PI {
namespace Pagination {

template <typename Client = PIClient>
struct ListAvailableResourceDimensionsPaginationTraits {
  using RequestType = Model::ListAvailableResourceDimensionsRequest;
  using ResultType = Model::ListAvailableResourceDimensionsResult;
  using OutcomeType = Model::ListAvailableResourceDimensionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAvailableResourceDimensions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PI
}  // namespace Aws
