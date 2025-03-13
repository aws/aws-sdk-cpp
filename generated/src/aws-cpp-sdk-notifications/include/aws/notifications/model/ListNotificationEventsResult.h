/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/NotificationEventOverview.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Notifications
{
namespace Model
{
  class ListNotificationEventsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListNotificationEventsResult() = default;
    AWS_NOTIFICATIONS_API ListNotificationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListNotificationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotificationEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of notification events.</p>
     */
    inline const Aws::Vector<NotificationEventOverview>& GetNotificationEvents() const { return m_notificationEvents; }
    template<typename NotificationEventsT = Aws::Vector<NotificationEventOverview>>
    void SetNotificationEvents(NotificationEventsT&& value) { m_notificationEventsHasBeenSet = true; m_notificationEvents = std::forward<NotificationEventsT>(value); }
    template<typename NotificationEventsT = Aws::Vector<NotificationEventOverview>>
    ListNotificationEventsResult& WithNotificationEvents(NotificationEventsT&& value) { SetNotificationEvents(std::forward<NotificationEventsT>(value)); return *this;}
    template<typename NotificationEventsT = NotificationEventOverview>
    ListNotificationEventsResult& AddNotificationEvents(NotificationEventsT&& value) { m_notificationEventsHasBeenSet = true; m_notificationEvents.emplace_back(std::forward<NotificationEventsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotificationEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NotificationEventOverview> m_notificationEvents;
    bool m_notificationEventsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
