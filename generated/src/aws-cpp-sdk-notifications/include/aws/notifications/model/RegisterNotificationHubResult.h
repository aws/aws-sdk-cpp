/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationHubStatusSummary.h>
#include <aws/core/utils/DateTime.h>
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
  class RegisterNotificationHubResult
  {
  public:
    AWS_NOTIFICATIONS_API RegisterNotificationHubResult() = default;
    AWS_NOTIFICATIONS_API RegisterNotificationHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API RegisterNotificationHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Region of the <code>NotificationHub</code>.</p>
     */
    inline const Aws::String& GetNotificationHubRegion() const { return m_notificationHubRegion; }
    template<typename NotificationHubRegionT = Aws::String>
    void SetNotificationHubRegion(NotificationHubRegionT&& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = std::forward<NotificationHubRegionT>(value); }
    template<typename NotificationHubRegionT = Aws::String>
    RegisterNotificationHubResult& WithNotificationHubRegion(NotificationHubRegionT&& value) { SetNotificationHubRegion(std::forward<NotificationHubRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about the current
     * <code>NotificationConfiguration</code> status information.</p>
     */
    inline const NotificationHubStatusSummary& GetStatusSummary() const { return m_statusSummary; }
    template<typename StatusSummaryT = NotificationHubStatusSummary>
    void SetStatusSummary(StatusSummaryT&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::forward<StatusSummaryT>(value); }
    template<typename StatusSummaryT = NotificationHubStatusSummary>
    RegisterNotificationHubResult& WithStatusSummary(StatusSummaryT&& value) { SetStatusSummary(std::forward<StatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    RegisterNotificationHubResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the resource was last activated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivationTime() const { return m_lastActivationTime; }
    template<typename LastActivationTimeT = Aws::Utils::DateTime>
    void SetLastActivationTime(LastActivationTimeT&& value) { m_lastActivationTimeHasBeenSet = true; m_lastActivationTime = std::forward<LastActivationTimeT>(value); }
    template<typename LastActivationTimeT = Aws::Utils::DateTime>
    RegisterNotificationHubResult& WithLastActivationTime(LastActivationTimeT&& value) { SetLastActivationTime(std::forward<LastActivationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterNotificationHubResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notificationHubRegion;
    bool m_notificationHubRegionHasBeenSet = false;

    NotificationHubStatusSummary m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastActivationTime{};
    bool m_lastActivationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
