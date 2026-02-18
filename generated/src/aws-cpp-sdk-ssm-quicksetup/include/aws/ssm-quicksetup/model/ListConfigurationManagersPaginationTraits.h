/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetupServiceClientModel.h>
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersResult.h>

namespace Aws {
namespace SSMQuickSetup {
namespace Pagination {

template <typename Client = SSMQuickSetupClient>
struct ListConfigurationManagersPaginationTraits {
  using RequestType = Model::ListConfigurationManagersRequest;
  using ResultType = Model::ListConfigurationManagersResult;
  using OutcomeType = Model::ListConfigurationManagersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConfigurationManagers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetStartingToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSMQuickSetup
}  // namespace Aws
