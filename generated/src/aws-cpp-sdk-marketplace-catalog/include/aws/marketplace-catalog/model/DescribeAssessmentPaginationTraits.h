/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalogServiceClientModel.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/DescribeAssessmentRequest.h>
#include <aws/marketplace-catalog/model/DescribeAssessmentResult.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Pagination {

template <typename Client = MarketplaceCatalogClient>
struct DescribeAssessmentPaginationTraits {
  using RequestType = Model::DescribeAssessmentRequest;
  using ResultType = Model::DescribeAssessmentResult;
  using OutcomeType = Model::DescribeAssessmentOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeAssessment(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceCatalog
}  // namespace Aws
