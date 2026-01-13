/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAMServiceClientModel.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ListReplacePermissionAssociationsWorkRequest.h>
#include <aws/ram/model/ListReplacePermissionAssociationsWorkResult.h>

namespace Aws {
namespace RAM {
namespace Pagination {

template <typename Client = RAMClient>
struct ListReplacePermissionAssociationsWorkPaginationTraits {
  using RequestType = Model::ListReplacePermissionAssociationsWorkRequest;
  using ResultType = Model::ListReplacePermissionAssociationsWorkResult;
  using OutcomeType = Model::ListReplacePermissionAssociationsWorkOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReplacePermissionAssociationsWork(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RAM
}  // namespace Aws
