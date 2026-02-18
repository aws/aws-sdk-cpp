/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalogServiceClientModel.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioRequest.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioResult.h>

namespace Aws {
namespace ServiceCatalog {
namespace Pagination {

template <typename Client = ServiceCatalogClient>
struct ListPrincipalsForPortfolioPaginationTraits {
  using RequestType = Model::ListPrincipalsForPortfolioRequest;
  using ResultType = Model::ListPrincipalsForPortfolioResult;
  using OutcomeType = Model::ListPrincipalsForPortfolioOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPrincipalsForPortfolio(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace ServiceCatalog
}  // namespace Aws
