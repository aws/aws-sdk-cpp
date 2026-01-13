/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchServiceServiceClientModel.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ListVersionsRequest.h>
#include <aws/opensearch/model/ListVersionsResult.h>

namespace Aws {
namespace OpenSearchService {
namespace Pagination {

template <typename Client = OpenSearchServiceClient>
struct ListVersionsPaginationTraits {
  using RequestType = Model::ListVersionsRequest;
  using ResultType = Model::ListVersionsResult;
  using OutcomeType = Model::ListVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OpenSearchService
}  // namespace Aws
