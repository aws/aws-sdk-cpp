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
    AWS_NOTIFICATIONS_API NotificationHubOverview();
    AWS_NOTIFICATIONS_API NotificationHubOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationHubOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region of the resource.</p>
     */
    inline const Aws::String& GetNotificationHubRegion() const{ return m_notificationHubRegion; }
    inline bool NotificationHubRegionHasBeenSet() const { return m_notificationHubRegionHasBeenSet; }
    inline void SetNotificationHubRegion(const Aws::String& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = value; }
    inline void SetNotificationHubRegion(Aws::String&& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = std::move(value); }
    inline void SetNotificationHubRegion(const char* value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion.assign(value); }
    inline NotificationHubOverview& WithNotificationHubRegion(const Aws::String& value) { SetNotificationHubRegion(value); return *this;}
    inline NotificationHubOverview& WithNotificationHubRegion(Aws::String&& value) { SetNotificationHubRegion(std::move(value)); return *this;}
    inline NotificationHubOverview& WithNotificationHubRegion(const char* value) { SetNotificationHubRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status summary of the resource.</p>
     */
    inline const NotificationHubStatusSummary& GetStatusSummary() const{ return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    inline void SetStatusSummary(const NotificationHubStatusSummary& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }
    inline void SetStatusSummary(NotificationHubStatusSummary&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }
    inline NotificationHubOverview& WithStatusSummary(const NotificationHubStatusSummary& value) { SetStatusSummary(value); return *this;}
    inline NotificationHubOverview& WithStatusSummary(NotificationHubStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the <code>NotificationHubOverview</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline NotificationHubOverview& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline NotificationHubOverview& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time this <code>NotificationHub</code> had an
     * <code>ACTIVE</code> status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivationTime() const{ return m_lastActivationTime; }
    inline bool LastActivationTimeHasBeenSet() const { return m_lastActivationTimeHasBeenSet; }
    inline void SetLastActivationTime(const Aws::Utils::DateTime& value) { m_lastActivationTimeHasBeenSet = true; m_lastActivationTime = value; }
    inline void SetLastActivationTime(Aws::Utils::DateTime&& value) { m_lastActivationTimeHasBeenSet = true; m_lastActivationTime = std::move(value); }
    inline NotificationHubOverview& WithLastActivationTime(const Aws::Utils::DateTime& value) { SetLastActivationTime(value); return *this;}
    inline NotificationHubOverview& WithLastActivationTime(Aws::Utils::DateTime&& value) { SetLastActivationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_notificationHubRegion;
    bool m_notificationHubRegionHasBeenSet = false;

    NotificationHubStatusSummary m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastActivationTime;
    bool m_lastActivationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
