/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalogServiceClientModel.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/SearchProductsRequest.h>
#include <aws/servicecatalog/model/SearchProductsResult.h>

namespace Aws {
namespace ServiceCatalog {
namespace Pagination {

template <typename Client = ServiceCatalogClient>
struct SearchProductsPaginationTraits {
  using RequestType = Model::SearchProductsRequest;
  using ResultType = Model::SearchProductsResult;
  using OutcomeType = Model::SearchProductsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchProducts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace ServiceCatalog
}  // namespace Aws
