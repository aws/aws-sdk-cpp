/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagementServiceClientModel.h>
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/model/ListDeviceResourcesRequest.h>
#include <aws/snow-device-management/model/ListDeviceResourcesResult.h>

namespace Aws {
namespace SnowDeviceManagement {
namespace Pagination {

template <typename Client = SnowDeviceManagementClient>
struct ListDeviceResourcesPaginationTraits {
  using RequestType = Model::ListDeviceResourcesRequest;
  using ResultType = Model::ListDeviceResourcesResult;
  using OutcomeType = Model::ListDeviceResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeviceResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SnowDeviceManagement
}  // namespace Aws
