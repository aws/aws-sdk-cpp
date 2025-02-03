/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationHubOverview.h>
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
  class ListNotificationHubsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListNotificationHubsResult();
    AWS_NOTIFICATIONS_API ListNotificationHubsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListNotificationHubsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>NotificationHubs</code> in the account.</p>
     */
    inline const Aws::Vector<NotificationHubOverview>& GetNotificationHubs() const{ return m_notificationHubs; }
    inline void SetNotificationHubs(const Aws::Vector<NotificationHubOverview>& value) { m_notificationHubs = value; }
    inline void SetNotificationHubs(Aws::Vector<NotificationHubOverview>&& value) { m_notificationHubs = std::move(value); }
    inline ListNotificationHubsResult& WithNotificationHubs(const Aws::Vector<NotificationHubOverview>& value) { SetNotificationHubs(value); return *this;}
    inline ListNotificationHubsResult& WithNotificationHubs(Aws::Vector<NotificationHubOverview>&& value) { SetNotificationHubs(std::move(value)); return *this;}
    inline ListNotificationHubsResult& AddNotificationHubs(const NotificationHubOverview& value) { m_notificationHubs.push_back(value); return *this; }
    inline ListNotificationHubsResult& AddNotificationHubs(NotificationHubOverview&& value) { m_notificationHubs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNotificationHubsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationHubsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationHubsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNotificationHubsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNotificationHubsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNotificationHubsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationHubOverview> m_notificationHubs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
