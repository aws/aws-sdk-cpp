/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSightServiceClientModel.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsRequest.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsResult.h>

namespace Aws {
namespace QuickSight {
namespace Pagination {

template <typename Client = QuickSightClient>
struct DescribeFolderResolvedPermissionsPaginationTraits {
  using RequestType = Model::DescribeFolderResolvedPermissionsRequest;
  using ResultType = Model::DescribeFolderResolvedPermissionsResult;
  using OutcomeType = Model::DescribeFolderResolvedPermissionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFolderResolvedPermissions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QuickSight
}  // namespace Aws
