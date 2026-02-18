/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/NotificationsServiceClientModel.h>
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/ListMemberAccountsRequest.h>
#include <aws/notifications/model/ListMemberAccountsResult.h>

namespace Aws {
namespace Notifications {
namespace Pagination {

template <typename Client = NotificationsClient>
struct ListMemberAccountsPaginationTraits {
  using RequestType = Model::ListMemberAccountsRequest;
  using ResultType = Model::ListMemberAccountsResult;
  using OutcomeType = Model::ListMemberAccountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMemberAccounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Notifications
}  // namespace Aws
