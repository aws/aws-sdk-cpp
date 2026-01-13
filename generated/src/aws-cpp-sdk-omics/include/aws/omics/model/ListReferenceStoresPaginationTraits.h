/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/OmicsServiceClientModel.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ListReferenceStoresRequest.h>
#include <aws/omics/model/ListReferenceStoresResult.h>

namespace Aws {
namespace Omics {
namespace Pagination {

template <typename Client = OmicsClient>
struct ListReferenceStoresPaginationTraits {
  using RequestType = Model::ListReferenceStoresRequest;
  using ResultType = Model::ListReferenceStoresResult;
  using OutcomeType = Model::ListReferenceStoresOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReferenceStores(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Omics
}  // namespace Aws
