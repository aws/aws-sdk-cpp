/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/NotificationsServiceClientModel.h>
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/ListManagedNotificationChannelAssociationsRequest.h>
#include <aws/notifications/model/ListManagedNotificationChannelAssociationsResult.h>

namespace Aws {
namespace Notifications {
namespace Pagination {

template <typename Client = NotificationsClient>
struct ListManagedNotificationChannelAssociationsPaginationTraits {
  using RequestType = Model::ListManagedNotificationChannelAssociationsRequest;
  using ResultType = Model::ListManagedNotificationChannelAssociationsResult;
  using OutcomeType = Model::ListManagedNotificationChannelAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListManagedNotificationChannelAssociations(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Notifications
}  // namespace Aws
