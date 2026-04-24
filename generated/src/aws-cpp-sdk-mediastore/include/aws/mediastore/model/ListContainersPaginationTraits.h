/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStoreServiceClientModel.h>
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/ListContainersRequest.h>
#include <aws/mediastore/model/ListContainersResult.h>

namespace Aws {
namespace MediaStore {
namespace Pagination {

template <typename Client = MediaStoreClient>
struct ListContainersPaginationTraits {
  using RequestType = Model::ListContainersRequest;
  using ResultType = Model::ListContainersResult;
  using OutcomeType = Model::ListContainersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContainers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaStore
}  // namespace Aws
