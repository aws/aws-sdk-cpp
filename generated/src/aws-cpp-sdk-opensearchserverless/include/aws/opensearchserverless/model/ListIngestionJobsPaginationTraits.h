/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerlessServiceClientModel.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/ListIngestionJobsRequest.h>
#include <aws/opensearchserverless/model/ListIngestionJobsResult.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Pagination {

template <typename Client = OpenSearchServerlessClient>
struct ListIngestionJobsPaginationTraits {
  using RequestType = Model::ListIngestionJobsRequest;
  using ResultType = Model::ListIngestionJobsResult;
  using OutcomeType = Model::ListIngestionJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIngestionJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OpenSearchServerless
}  // namespace Aws
