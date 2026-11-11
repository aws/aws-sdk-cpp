/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalogServiceClientModel.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ListStackInstancesForProvisionedProductRequest.h>
#include <aws/servicecatalog/model/ListStackInstancesForProvisionedProductResult.h>

namespace Aws {
namespace ServiceCatalog {
namespace Pagination {

template <typename Client = ServiceCatalogClient>
struct ListStackInstancesForProvisionedProductPaginationTraits {
  using RequestType = Model::ListStackInstancesForProvisionedProductRequest;
  using ResultType = Model::ListStackInstancesForProvisionedProductResult;
  using OutcomeType = Model::ListStackInstancesForProvisionedProductOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStackInstancesForProvisionedProduct(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace ServiceCatalog
}  // namespace Aws
