/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAMServiceClientModel.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ListResourceSharePermissionsRequest.h>
#include <aws/ram/model/ListResourceSharePermissionsResult.h>

namespace Aws {
namespace RAM {
namespace Pagination {

template <typename Client = RAMClient>
struct ListResourceSharePermissionsPaginationTraits {
  using RequestType = Model::ListResourceSharePermissionsRequest;
  using ResultType = Model::ListResourceSharePermissionsResult;
  using OutcomeType = Model::ListResourceSharePermissionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourceSharePermissions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RAM
}  // namespace Aws
