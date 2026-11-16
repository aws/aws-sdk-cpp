/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemoryServiceClientModel.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/ListSpacesRequest.h>
#include <aws/opensearchmemory/model/ListSpacesResult.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Pagination {

template <typename Client = OpenSearchMemoryClient>
struct ListSpacesPaginationTraits {
  using RequestType = Model::ListSpacesRequest;
  using ResultType = Model::ListSpacesResult;
  using OutcomeType = Model::ListSpacesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSpaces(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OpenSearchMemory
}  // namespace Aws
