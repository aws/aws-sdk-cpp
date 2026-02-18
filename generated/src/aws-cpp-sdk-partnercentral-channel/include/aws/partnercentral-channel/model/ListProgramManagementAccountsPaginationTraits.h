/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannelServiceClientModel.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsRequest.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsResult.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Pagination {

template <typename Client = PartnerCentralChannelClient>
struct ListProgramManagementAccountsPaginationTraits {
  using RequestType = Model::ListProgramManagementAccountsRequest;
  using ResultType = Model::ListProgramManagementAccountsResult;
  using OutcomeType = Model::ListProgramManagementAccountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProgramManagementAccounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralChannel
}  // namespace Aws
