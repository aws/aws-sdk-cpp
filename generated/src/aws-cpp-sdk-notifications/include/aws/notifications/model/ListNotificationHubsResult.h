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
    AWS_NOTIFICATIONS_API ListNotificationHubsResult() = default;
    AWS_NOTIFICATIONS_API ListNotificationHubsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListNotificationHubsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>NotificationHubs</code> in the account.</p>
     */
    inline const Aws::Vector<NotificationHubOverview>& GetNotificationHubs() const { return m_notificationHubs; }
    template<typename NotificationHubsT = Aws::Vector<NotificationHubOverview>>
    void SetNotificationHubs(NotificationHubsT&& value) { m_notificationHubsHasBeenSet = true; m_notificationHubs = std::forward<NotificationHubsT>(value); }
    template<typename NotificationHubsT = Aws::Vector<NotificationHubOverview>>
    ListNotificationHubsResult& WithNotificationHubs(NotificationHubsT&& value) { SetNotificationHubs(std::forward<NotificationHubsT>(value)); return *this;}
    template<typename NotificationHubsT = NotificationHubOverview>
    ListNotificationHubsResult& AddNotificationHubs(NotificationHubsT&& value) { m_notificationHubsHasBeenSet = true; m_notificationHubs.emplace_back(std::forward<NotificationHubsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotificationHubsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotificationHubsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationHubOverview> m_notificationHubs;
    bool m_notificationHubsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
