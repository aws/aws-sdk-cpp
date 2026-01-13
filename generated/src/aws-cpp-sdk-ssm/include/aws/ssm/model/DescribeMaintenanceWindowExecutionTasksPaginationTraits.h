/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSMServiceClientModel.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksResult.h>

namespace Aws {
namespace SSM {
namespace Pagination {

template <typename Client = SSMClient>
struct DescribeMaintenanceWindowExecutionTasksPaginationTraits {
  using RequestType = Model::DescribeMaintenanceWindowExecutionTasksRequest;
  using ResultType = Model::DescribeMaintenanceWindowExecutionTasksResult;
  using OutcomeType = Model::DescribeMaintenanceWindowExecutionTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeMaintenanceWindowExecutionTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSM
}  // namespace Aws
