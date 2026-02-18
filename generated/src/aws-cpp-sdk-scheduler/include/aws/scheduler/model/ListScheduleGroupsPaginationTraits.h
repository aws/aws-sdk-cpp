/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/SchedulerServiceClientModel.h>
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/model/ListScheduleGroupsRequest.h>
#include <aws/scheduler/model/ListScheduleGroupsResult.h>

namespace Aws {
namespace Scheduler {
namespace Pagination {

template <typename Client = SchedulerClient>
struct ListScheduleGroupsPaginationTraits {
  using RequestType = Model::ListScheduleGroupsRequest;
  using ResultType = Model::ListScheduleGroupsResult;
  using OutcomeType = Model::ListScheduleGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListScheduleGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Scheduler
}  // namespace Aws
