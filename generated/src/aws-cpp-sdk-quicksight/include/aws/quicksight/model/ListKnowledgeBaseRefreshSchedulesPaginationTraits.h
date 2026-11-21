/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSightServiceClientModel.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ListKnowledgeBaseRefreshSchedulesRequest.h>
#include <aws/quicksight/model/ListKnowledgeBaseRefreshSchedulesResult.h>

namespace Aws {
namespace QuickSight {
namespace Pagination {

template <typename Client = QuickSightClient>
struct ListKnowledgeBaseRefreshSchedulesPaginationTraits {
  using RequestType = Model::ListKnowledgeBaseRefreshSchedulesRequest;
  using ResultType = Model::ListKnowledgeBaseRefreshSchedulesResult;
  using OutcomeType = Model::ListKnowledgeBaseRefreshSchedulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKnowledgeBaseRefreshSchedules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QuickSight
}  // namespace Aws
