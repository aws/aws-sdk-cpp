/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWebServiceClientModel.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/ListNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/ListNetworkSettingsResult.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Pagination {

template <typename Client = WorkSpacesWebClient>
struct ListNetworkSettingsPaginationTraits {
  using RequestType = Model::ListNetworkSettingsRequest;
  using ResultType = Model::ListNetworkSettingsResult;
  using OutcomeType = Model::ListNetworkSettingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListNetworkSettings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkSpacesWeb
}  // namespace Aws
