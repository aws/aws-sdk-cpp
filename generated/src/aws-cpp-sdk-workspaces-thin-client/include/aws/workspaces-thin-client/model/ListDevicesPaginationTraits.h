/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClientServiceClientModel.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/model/ListDevicesRequest.h>
#include <aws/workspaces-thin-client/model/ListDevicesResult.h>

namespace Aws {
namespace WorkSpacesThinClient {
namespace Pagination {

template <typename Client = WorkSpacesThinClientClient>
struct ListDevicesPaginationTraits {
  using RequestType = Model::ListDevicesRequest;
  using ResultType = Model::ListDevicesResult;
  using OutcomeType = Model::ListDevicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDevices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkSpacesThinClient
}  // namespace Aws
