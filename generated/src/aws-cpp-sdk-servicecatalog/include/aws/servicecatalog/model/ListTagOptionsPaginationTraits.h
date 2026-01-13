/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalogServiceClientModel.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ListTagOptionsRequest.h>
#include <aws/servicecatalog/model/ListTagOptionsResult.h>

namespace Aws {
namespace ServiceCatalog {
namespace Pagination {

template <typename Client = ServiceCatalogClient>
struct ListTagOptionsPaginationTraits {
  using RequestType = Model::ListTagOptionsRequest;
  using ResultType = Model::ListTagOptionsResult;
  using OutcomeType = Model::ListTagOptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTagOptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPageToken(result.GetPageToken()); }
};

}  // namespace Pagination
}  // namespace ServiceCatalog
}  // namespace Aws
