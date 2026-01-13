/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/OmicsServiceClientModel.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ListRunsRequest.h>
#include <aws/omics/model/ListRunsResult.h>

namespace Aws {
namespace Omics {
namespace Pagination {

template <typename Client = OmicsClient>
struct ListRunsPaginationTraits {
  using RequestType = Model::ListRunsRequest;
  using ResultType = Model::ListRunsResult;
  using OutcomeType = Model::ListRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetStartingToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Omics
}  // namespace Aws
