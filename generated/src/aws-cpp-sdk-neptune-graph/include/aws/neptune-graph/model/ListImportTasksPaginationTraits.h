/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraphServiceClientModel.h>
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/model/ListImportTasksRequest.h>
#include <aws/neptune-graph/model/ListImportTasksResult.h>

namespace Aws {
namespace NeptuneGraph {
namespace Pagination {

template <typename Client = NeptuneGraphClient>
struct ListImportTasksPaginationTraits {
  using RequestType = Model::ListImportTasksRequest;
  using ResultType = Model::ListImportTasksResult;
  using OutcomeType = Model::ListImportTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListImportTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NeptuneGraph
}  // namespace Aws
