/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccountServiceClientModel.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ListConnectionsRequest.h>
#include <aws/partnercentral-account/model/ListConnectionsResult.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Pagination {

template <typename Client = PartnerCentralAccountClient>
struct ListConnectionsPaginationTraits {
  using RequestType = Model::ListConnectionsRequest;
  using ResultType = Model::ListConnectionsResult;
  using OutcomeType = Model::ListConnectionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConnections(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralAccount
}  // namespace Aws
