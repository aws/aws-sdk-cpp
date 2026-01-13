/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchServiceServiceClientModel.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ListPackagesForDomainRequest.h>
#include <aws/opensearch/model/ListPackagesForDomainResult.h>

namespace Aws {
namespace OpenSearchService {
namespace Pagination {

template <typename Client = OpenSearchServiceClient>
struct ListPackagesForDomainPaginationTraits {
  using RequestType = Model::ListPackagesForDomainRequest;
  using ResultType = Model::ListPackagesForDomainResult;
  using OutcomeType = Model::ListPackagesForDomainOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPackagesForDomain(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OpenSearchService
}  // namespace Aws
