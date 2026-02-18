/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportAppServiceClientModel.h>
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsRequest.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsResult.h>

namespace Aws {
namespace SupportApp {
namespace Pagination {

template <typename Client = SupportAppClient>
struct ListSlackChannelConfigurationsPaginationTraits {
  using RequestType = Model::ListSlackChannelConfigurationsRequest;
  using ResultType = Model::ListSlackChannelConfigurationsResult;
  using OutcomeType = Model::ListSlackChannelConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSlackChannelConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SupportApp
}  // namespace Aws
