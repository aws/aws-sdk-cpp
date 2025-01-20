/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/ManagedNotificationEventOverview.h>
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
  class ListManagedNotificationEventsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListManagedNotificationEventsResult();
    AWS_NOTIFICATIONS_API ListManagedNotificationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedNotificationEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedNotificationEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedNotificationEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Managed Notification Events matching the request criteria.</p>
     */
    inline const Aws::Vector<ManagedNotificationEventOverview>& GetManagedNotificationEvents() const{ return m_managedNotificationEvents; }
    inline void SetManagedNotificationEvents(const Aws::Vector<ManagedNotificationEventOverview>& value) { m_managedNotificationEvents = value; }
    inline void SetManagedNotificationEvents(Aws::Vector<ManagedNotificationEventOverview>&& value) { m_managedNotificationEvents = std::move(value); }
    inline ListManagedNotificationEventsResult& WithManagedNotificationEvents(const Aws::Vector<ManagedNotificationEventOverview>& value) { SetManagedNotificationEvents(value); return *this;}
    inline ListManagedNotificationEventsResult& WithManagedNotificationEvents(Aws::Vector<ManagedNotificationEventOverview>&& value) { SetManagedNotificationEvents(std::move(value)); return *this;}
    inline ListManagedNotificationEventsResult& AddManagedNotificationEvents(const ManagedNotificationEventOverview& value) { m_managedNotificationEvents.push_back(value); return *this; }
    inline ListManagedNotificationEventsResult& AddManagedNotificationEvents(ManagedNotificationEventOverview&& value) { m_managedNotificationEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedNotificationEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedNotificationEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedNotificationEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ManagedNotificationEventOverview> m_managedNotificationEvents;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
