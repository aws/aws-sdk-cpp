/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccountServiceClientModel.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsRequest.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsResult.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Pagination {

template <typename Client = PartnerCentralAccountClient>
struct ListConnectionInvitationsPaginationTraits {
  using RequestType = Model::ListConnectionInvitationsRequest;
  using ResultType = Model::ListConnectionInvitationsResult;
  using OutcomeType = Model::ListConnectionInvitationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConnectionInvitations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralAccount
}  // namespace Aws
