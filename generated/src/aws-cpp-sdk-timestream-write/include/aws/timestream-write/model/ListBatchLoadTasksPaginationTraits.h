/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWriteServiceClientModel.h>
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/ListBatchLoadTasksRequest.h>
#include <aws/timestream-write/model/ListBatchLoadTasksResult.h>

namespace Aws {
namespace TimestreamWrite {
namespace Pagination {

template <typename Client = TimestreamWriteClient>
struct ListBatchLoadTasksPaginationTraits {
  using RequestType = Model::ListBatchLoadTasksRequest;
  using ResultType = Model::ListBatchLoadTasksResult;
  using OutcomeType = Model::ListBatchLoadTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBatchLoadTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TimestreamWrite
}  // namespace Aws
