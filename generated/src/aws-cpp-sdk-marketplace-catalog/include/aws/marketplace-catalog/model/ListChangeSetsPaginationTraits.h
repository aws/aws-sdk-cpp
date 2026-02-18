/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalogServiceClientModel.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ListChangeSetsRequest.h>
#include <aws/marketplace-catalog/model/ListChangeSetsResult.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Pagination {

template <typename Client = MarketplaceCatalogClient>
struct ListChangeSetsPaginationTraits {
  using RequestType = Model::ListChangeSetsRequest;
  using ResultType = Model::ListChangeSetsResult;
  using OutcomeType = Model::ListChangeSetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListChangeSets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceCatalog
}  // namespace Aws
