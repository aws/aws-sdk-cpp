/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWebServiceClientModel.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsResult.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Pagination {

template <typename Client = WorkSpacesWebClient>
struct ListUserAccessLoggingSettingsPaginationTraits {
  using RequestType = Model::ListUserAccessLoggingSettingsRequest;
  using ResultType = Model::ListUserAccessLoggingSettingsResult;
  using OutcomeType = Model::ListUserAccessLoggingSettingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUserAccessLoggingSettings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkSpacesWeb
}  // namespace Aws
