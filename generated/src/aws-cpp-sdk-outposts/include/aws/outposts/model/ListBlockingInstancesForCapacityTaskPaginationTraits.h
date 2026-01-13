/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/OutpostsServiceClientModel.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskRequest.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskResult.h>

namespace Aws {
namespace Outposts {
namespace Pagination {

template <typename Client = OutpostsClient>
struct ListBlockingInstancesForCapacityTaskPaginationTraits {
  using RequestType = Model::ListBlockingInstancesForCapacityTaskRequest;
  using ResultType = Model::ListBlockingInstancesForCapacityTaskResult;
  using OutcomeType = Model::ListBlockingInstancesForCapacityTaskOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBlockingInstancesForCapacityTask(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Outposts
}  // namespace Aws
