/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreDataServiceClientModel.h>
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/model/ListItemsRequest.h>
#include <aws/mediastore-data/model/ListItemsResult.h>

namespace Aws {
namespace MediaStoreData {
namespace Pagination {

template <typename Client = MediaStoreDataClient>
struct ListItemsPaginationTraits {
  using RequestType = Model::ListItemsRequest;
  using ResultType = Model::ListItemsResult;
  using OutcomeType = Model::ListItemsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListItems(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaStoreData
}  // namespace Aws
