/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportAppServiceClientModel.h>
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsRequest.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsResult.h>

namespace Aws {
namespace SupportApp {
namespace Pagination {

template <typename Client = SupportAppClient>
struct ListSlackWorkspaceConfigurationsPaginationTraits {
  using RequestType = Model::ListSlackWorkspaceConfigurationsRequest;
  using ResultType = Model::ListSlackWorkspaceConfigurationsResult;
  using OutcomeType = Model::ListSlackWorkspaceConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSlackWorkspaceConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SupportApp
}  // namespace Aws
