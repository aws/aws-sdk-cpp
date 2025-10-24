﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/notifications/Notifications_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Notifications {
namespace Model {

/**
 */
class ListOrganizationalUnitsRequest : public NotificationsRequest {
 public:
  AWS_NOTIFICATIONS_API ListOrganizationalUnitsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListOrganizationalUnits"; }

  AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

  AWS_NOTIFICATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the notification configuration used to
   * filter the organizational units.</p>
   */
  inline const Aws::String& GetNotificationConfigurationArn() const { return m_notificationConfigurationArn; }
  inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
  template <typename NotificationConfigurationArnT = Aws::String>
  void SetNotificationConfigurationArn(NotificationConfigurationArnT&& value) {
    m_notificationConfigurationArnHasBeenSet = true;
    m_notificationConfigurationArn = std::forward<NotificationConfigurationArnT>(value);
  }
  template <typename NotificationConfigurationArnT = Aws::String>
  ListOrganizationalUnitsRequest& WithNotificationConfigurationArn(NotificationConfigurationArnT&& value) {
    SetNotificationConfigurationArn(std::forward<NotificationConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of organizational units to return in a single call. Valid
   * values are 1-100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListOrganizationalUnitsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results. Use the value returned in the
   * previous response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOrganizationalUnitsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notificationConfigurationArn;
  bool m_notificationConfigurationArnHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Notifications
}  // namespace Aws
