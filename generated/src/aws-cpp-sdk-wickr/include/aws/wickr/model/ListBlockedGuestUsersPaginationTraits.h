/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/WickrServiceClientModel.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/ListBlockedGuestUsersRequest.h>
#include <aws/wickr/model/ListBlockedGuestUsersResult.h>

namespace Aws {
namespace Wickr {
namespace Pagination {

template <typename Client = WickrClient>
struct ListBlockedGuestUsersPaginationTraits {
  using RequestType = Model::ListBlockedGuestUsersRequest;
  using ResultType = Model::ListBlockedGuestUsersResult;
  using OutcomeType = Model::ListBlockedGuestUsersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBlockedGuestUsers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Wickr
}  // namespace Aws
