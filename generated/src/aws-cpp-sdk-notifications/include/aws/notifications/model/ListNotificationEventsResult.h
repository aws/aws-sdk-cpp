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
    AWS_NOTIFICATIONS_API ListNotificationEventsResult();
    AWS_NOTIFICATIONS_API ListNotificationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListNotificationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNotificationEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of notification events.</p>
     */
    inline const Aws::Vector<NotificationEventOverview>& GetNotificationEvents() const{ return m_notificationEvents; }
    inline void SetNotificationEvents(const Aws::Vector<NotificationEventOverview>& value) { m_notificationEvents = value; }
    inline void SetNotificationEvents(Aws::Vector<NotificationEventOverview>&& value) { m_notificationEvents = std::move(value); }
    inline ListNotificationEventsResult& WithNotificationEvents(const Aws::Vector<NotificationEventOverview>& value) { SetNotificationEvents(value); return *this;}
    inline ListNotificationEventsResult& WithNotificationEvents(Aws::Vector<NotificationEventOverview>&& value) { SetNotificationEvents(std::move(value)); return *this;}
    inline ListNotificationEventsResult& AddNotificationEvents(const NotificationEventOverview& value) { m_notificationEvents.push_back(value); return *this; }
    inline ListNotificationEventsResult& AddNotificationEvents(NotificationEventOverview&& value) { m_notificationEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNotificationEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNotificationEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNotificationEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<NotificationEventOverview> m_notificationEvents;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
