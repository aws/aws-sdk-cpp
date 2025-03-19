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
    AWS_NOTIFICATIONS_API ListManagedNotificationChildEventsResult() = default;
    AWS_NOTIFICATIONS_API ListManagedNotificationChildEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationChildEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedNotificationChildEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::Vector<ManagedNotificationChildEventOverview>& GetManagedNotificationChildEvents() const { return m_managedNotificationChildEvents; }
    template<typename ManagedNotificationChildEventsT = Aws::Vector<ManagedNotificationChildEventOverview>>
    void SetManagedNotificationChildEvents(ManagedNotificationChildEventsT&& value) { m_managedNotificationChildEventsHasBeenSet = true; m_managedNotificationChildEvents = std::forward<ManagedNotificationChildEventsT>(value); }
    template<typename ManagedNotificationChildEventsT = Aws::Vector<ManagedNotificationChildEventOverview>>
    ListManagedNotificationChildEventsResult& WithManagedNotificationChildEvents(ManagedNotificationChildEventsT&& value) { SetManagedNotificationChildEvents(std::forward<ManagedNotificationChildEventsT>(value)); return *this;}
    template<typename ManagedNotificationChildEventsT = ManagedNotificationChildEventOverview>
    ListManagedNotificationChildEventsResult& AddManagedNotificationChildEvents(ManagedNotificationChildEventsT&& value) { m_managedNotificationChildEventsHasBeenSet = true; m_managedNotificationChildEvents.emplace_back(std::forward<ManagedNotificationChildEventsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedNotificationChildEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ManagedNotificationChildEventOverview> m_managedNotificationChildEvents;
    bool m_managedNotificationChildEventsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
