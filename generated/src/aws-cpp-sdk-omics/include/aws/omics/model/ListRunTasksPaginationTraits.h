/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/OmicsServiceClientModel.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ListRunTasksRequest.h>
#include <aws/omics/model/ListRunTasksResult.h>

namespace Aws {
namespace Omics {
namespace Pagination {

template <typename Client = OmicsClient>
struct ListRunTasksPaginationTraits {
  using RequestType = Model::ListRunTasksRequest;
  using ResultType = Model::ListRunTasksResult;
  using OutcomeType = Model::ListRunTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRunTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetStartingToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Omics
}  // namespace Aws
