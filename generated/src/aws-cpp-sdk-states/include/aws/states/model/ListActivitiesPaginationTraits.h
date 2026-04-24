/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFNServiceClientModel.h>
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/ListActivitiesRequest.h>
#include <aws/states/model/ListActivitiesResult.h>

namespace Aws {
namespace SFN {
namespace Pagination {

template <typename Client = SFNClient>
struct ListActivitiesPaginationTraits {
  using RequestType = Model::ListActivitiesRequest;
  using ResultType = Model::ListActivitiesResult;
  using OutcomeType = Model::ListActivitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListActivities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SFN
}  // namespace Aws
