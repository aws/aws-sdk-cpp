/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContactsServiceClientModel.h>
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/notificationscontacts/model/ListEmailContactsRequest.h>
#include <aws/notificationscontacts/model/ListEmailContactsResult.h>

namespace Aws {
namespace NotificationsContacts {
namespace Pagination {

template <typename Client = NotificationsContactsClient>
struct ListEmailContactsPaginationTraits {
  using RequestType = Model::ListEmailContactsRequest;
  using ResultType = Model::ListEmailContactsResult;
  using OutcomeType = Model::ListEmailContactsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEmailContacts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NotificationsContacts
}  // namespace Aws
