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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Notifications
{
namespace Model
{

  /**
   * <p>Describes an overview of a <code>NotificationHub</code>.</p> <p>A
   * <code>NotificationConfiguration</code> is an account-level setting used to
   * select the Regions where you want to store, process and replicate your
   * notifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationHubOverview">AWS
   * API Reference</a></p>
   */
  class NotificationHubOverview
  {
  public:
    AWS_NOTIFICATIONS_API NotificationHubOverview() = default;
    AWS_NOTIFICATIONS_API NotificationHubOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationHubOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region of the resource.</p>
     */
    inline const Aws::String& GetNotificationHubRegion() const { return m_notificationHubRegion; }
    inline bool NotificationHubRegionHasBeenSet() const { return m_notificationHubRegionHasBeenSet; }
    template<typename NotificationHubRegionT = Aws::String>
    void SetNotificationHubRegion(NotificationHubRegionT&& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = std::forward<NotificationHubRegionT>(value); }
    template<typename NotificationHubRegionT = Aws::String>
    NotificationHubOverview& WithNotificationHubRegion(NotificationHubRegionT&& value) { SetNotificationHubRegion(std::forward<NotificationHubRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status summary of the resource.</p>
     */
    inline const NotificationHubStatusSummary& GetStatusSummary() const { return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    template<typename StatusSummaryT = NotificationHubStatusSummary>
    void SetStatusSummary(StatusSummaryT&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::forward<StatusSummaryT>(value); }
    template<typename StatusSummaryT = NotificationHubStatusSummary>
    NotificationHubOverview& WithStatusSummary(StatusSummaryT&& value) { SetStatusSummary(std::forward<StatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the <code>NotificationHubOverview</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    NotificationHubOverview& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time this <code>NotificationHub</code> had an
     * <code>ACTIVE</code> status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivationTime() const { return m_lastActivationTime; }
    inline bool LastActivationTimeHasBeenSet() const { return m_lastActivationTimeHasBeenSet; }
    template<typename LastActivationTimeT = Aws::Utils::DateTime>
    void SetLastActivationTime(LastActivationTimeT&& value) { m_lastActivationTimeHasBeenSet = true; m_lastActivationTime = std::forward<LastActivationTimeT>(value); }
    template<typename LastActivationTimeT = Aws::Utils::DateTime>
    NotificationHubOverview& WithLastActivationTime(LastActivationTimeT&& value) { SetLastActivationTime(std::forward<LastActivationTimeT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
