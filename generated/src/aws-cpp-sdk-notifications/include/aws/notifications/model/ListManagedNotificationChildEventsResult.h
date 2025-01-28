/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/ManagedNotificationChildEventOverview.h>
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
  class ListManagedNotificationChildEventsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListManagedNotificationChildEventsResult();
    AWS_NOTIFICATIONS_API ListManagedNotificationChildEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationChildEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedNotificationChildEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedNotificationChildEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedNotificationChildEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::Vector<ManagedNotificationChildEventOverview>& GetManagedNotificationChildEvents() const{ return m_managedNotificationChildEvents; }
    inline void SetManagedNotificationChildEvents(const Aws::Vector<ManagedNotificationChildEventOverview>& value) { m_managedNotificationChildEvents = value; }
    inline void SetManagedNotificationChildEvents(Aws::Vector<ManagedNotificationChildEventOverview>&& value) { m_managedNotificationChildEvents = std::move(value); }
    inline ListManagedNotificationChildEventsResult& WithManagedNotificationChildEvents(const Aws::Vector<ManagedNotificationChildEventOverview>& value) { SetManagedNotificationChildEvents(value); return *this;}
    inline ListManagedNotificationChildEventsResult& WithManagedNotificationChildEvents(Aws::Vector<ManagedNotificationChildEventOverview>&& value) { SetManagedNotificationChildEvents(std::move(value)); return *this;}
    inline ListManagedNotificationChildEventsResult& AddManagedNotificationChildEvents(const ManagedNotificationChildEventOverview& value) { m_managedNotificationChildEvents.push_back(value); return *this; }
    inline ListManagedNotificationChildEventsResult& AddManagedNotificationChildEvents(ManagedNotificationChildEventOverview&& value) { m_managedNotificationChildEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedNotificationChildEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedNotificationChildEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedNotificationChildEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ManagedNotificationChildEventOverview> m_managedNotificationChildEvents;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
