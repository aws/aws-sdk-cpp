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
    AWS_NOTIFICATIONS_API ListManagedNotificationEventsResult() = default;
    AWS_NOTIFICATIONS_API ListManagedNotificationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedNotificationEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Managed Notification Events matching the request criteria.</p>
     */
    inline const Aws::Vector<ManagedNotificationEventOverview>& GetManagedNotificationEvents() const { return m_managedNotificationEvents; }
    template<typename ManagedNotificationEventsT = Aws::Vector<ManagedNotificationEventOverview>>
    void SetManagedNotificationEvents(ManagedNotificationEventsT&& value) { m_managedNotificationEventsHasBeenSet = true; m_managedNotificationEvents = std::forward<ManagedNotificationEventsT>(value); }
    template<typename ManagedNotificationEventsT = Aws::Vector<ManagedNotificationEventOverview>>
    ListManagedNotificationEventsResult& WithManagedNotificationEvents(ManagedNotificationEventsT&& value) { SetManagedNotificationEvents(std::forward<ManagedNotificationEventsT>(value)); return *this;}
    template<typename ManagedNotificationEventsT = ManagedNotificationEventOverview>
    ListManagedNotificationEventsResult& AddManagedNotificationEvents(ManagedNotificationEventsT&& value) { m_managedNotificationEventsHasBeenSet = true; m_managedNotificationEvents.emplace_back(std::forward<ManagedNotificationEventsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedNotificationEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ManagedNotificationEventOverview> m_managedNotificationEvents;
    bool m_managedNotificationEventsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
