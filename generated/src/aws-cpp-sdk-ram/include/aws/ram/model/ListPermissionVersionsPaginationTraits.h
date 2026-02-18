/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAMServiceClientModel.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ListPermissionVersionsRequest.h>
#include <aws/ram/model/ListPermissionVersionsResult.h>

namespace Aws {
namespace RAM {
namespace Pagination {

template <typename Client = RAMClient>
struct ListPermissionVersionsPaginationTraits {
  using RequestType = Model::ListPermissionVersionsRequest;
  using ResultType = Model::ListPermissionVersionsResult;
  using OutcomeType = Model::ListPermissionVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPermissionVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RAM
}  // namespace Aws
