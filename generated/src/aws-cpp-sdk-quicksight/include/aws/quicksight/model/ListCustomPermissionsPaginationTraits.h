/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSightServiceClientModel.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ListCustomPermissionsRequest.h>
#include <aws/quicksight/model/ListCustomPermissionsResult.h>

namespace Aws {
namespace QuickSight {
namespace Pagination {

template <typename Client = QuickSightClient>
struct ListCustomPermissionsPaginationTraits {
  using RequestType = Model::ListCustomPermissionsRequest;
  using ResultType = Model::ListCustomPermissionsResult;
  using OutcomeType = Model::ListCustomPermissionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCustomPermissions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QuickSight
}  // namespace Aws
