/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManagerServiceClientModel.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ListScopeSnapshotsRequest.h>
#include <aws/network-security-manager/model/ListScopeSnapshotsResult.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Pagination {

template <typename Client = NetworkSecurityManagerClient>
struct ListScopeSnapshotsPaginationTraits {
  using RequestType = Model::ListScopeSnapshotsRequest;
  using ResultType = Model::ListScopeSnapshotsResult;
  using OutcomeType = Model::ListScopeSnapshotsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListScopeSnapshots(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkSecurityManager
}  // namespace Aws
