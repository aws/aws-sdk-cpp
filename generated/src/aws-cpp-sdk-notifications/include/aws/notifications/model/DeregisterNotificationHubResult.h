/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationHubStatusSummary.h>
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
  class DeregisterNotificationHubResult
  {
  public:
    AWS_NOTIFICATIONS_API DeregisterNotificationHubResult() = default;
    AWS_NOTIFICATIONS_API DeregisterNotificationHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API DeregisterNotificationHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>NotificationConfiguration</code> Region.</p>
     */
    inline const Aws::String& GetNotificationHubRegion() const { return m_notificationHubRegion; }
    template<typename NotificationHubRegionT = Aws::String>
    void SetNotificationHubRegion(NotificationHubRegionT&& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = std::forward<NotificationHubRegionT>(value); }
    template<typename NotificationHubRegionT = Aws::String>
    DeregisterNotificationHubResult& WithNotificationHubRegion(NotificationHubRegionT&& value) { SetNotificationHubRegion(std::forward<NotificationHubRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>NotificationConfiguration</code> status information.</p>
     */
    inline const NotificationHubStatusSummary& GetStatusSummary() const { return m_statusSummary; }
    template<typename StatusSummaryT = NotificationHubStatusSummary>
    void SetStatusSummary(StatusSummaryT&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::forward<StatusSummaryT>(value); }
    template<typename StatusSummaryT = NotificationHubStatusSummary>
    DeregisterNotificationHubResult& WithStatusSummary(StatusSummaryT&& value) { SetStatusSummary(std::forward<StatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeregisterNotificationHubResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notificationHubRegion;
    bool m_notificationHubRegionHasBeenSet = false;

    NotificationHubStatusSummary m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
