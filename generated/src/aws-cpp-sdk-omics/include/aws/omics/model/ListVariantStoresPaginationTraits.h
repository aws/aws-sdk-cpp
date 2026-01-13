/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/OmicsServiceClientModel.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ListVariantStoresRequest.h>
#include <aws/omics/model/ListVariantStoresResult.h>

namespace Aws {
namespace Omics {
namespace Pagination {

template <typename Client = OmicsClient>
struct ListVariantStoresPaginationTraits {
  using RequestType = Model::ListVariantStoresRequest;
  using ResultType = Model::ListVariantStoresResult;
  using OutcomeType = Model::ListVariantStoresOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVariantStores(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Omics
}  // namespace Aws
