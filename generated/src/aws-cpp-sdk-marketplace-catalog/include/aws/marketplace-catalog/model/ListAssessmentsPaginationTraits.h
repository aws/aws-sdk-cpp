/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalogServiceClientModel.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ListAssessmentsRequest.h>
#include <aws/marketplace-catalog/model/ListAssessmentsResult.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Pagination {

template <typename Client = MarketplaceCatalogClient>
struct ListAssessmentsPaginationTraits {
  using RequestType = Model::ListAssessmentsRequest;
  using ResultType = Model::ListAssessmentsResult;
  using OutcomeType = Model::ListAssessmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssessments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceCatalog
}  // namespace Aws
