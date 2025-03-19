/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/NotificationType.h>
#include <aws/ssm/model/NotificationEvent.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Configurations for sending notifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/NotificationConfig">AWS
   * API Reference</a></p>
   */
  class NotificationConfig
  {
  public:
    AWS_SSM_API NotificationConfig() = default;
    AWS_SSM_API NotificationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NotificationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) for an Amazon Simple Notification Service
     * (Amazon SNS) topic. Run Command pushes notifications about command status
     * changes to this topic.</p>
     */
    inline const Aws::String& GetNotificationArn() const { return m_notificationArn; }
    inline bool NotificationArnHasBeenSet() const { return m_notificationArnHasBeenSet; }
    template<typename NotificationArnT = Aws::String>
    void SetNotificationArn(NotificationArnT&& value) { m_notificationArnHasBeenSet = true; m_notificationArn = std::forward<NotificationArnT>(value); }
    template<typename NotificationArnT = Aws::String>
    NotificationConfig& WithNotificationArn(NotificationArnT&& value) { SetNotificationArn(std::forward<NotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The different events for which you can receive notifications. To learn more
     * about these events, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<NotificationEvent>& GetNotificationEvents() const { return m_notificationEvents; }
    inline bool NotificationEventsHasBeenSet() const { return m_notificationEventsHasBeenSet; }
    template<typename NotificationEventsT = Aws::Vector<NotificationEvent>>
    void SetNotificationEvents(NotificationEventsT&& value) { m_notificationEventsHasBeenSet = true; m_notificationEvents = std::forward<NotificationEventsT>(value); }
    template<typename NotificationEventsT = Aws::Vector<NotificationEvent>>
    NotificationConfig& WithNotificationEvents(NotificationEventsT&& value) { SetNotificationEvents(std::forward<NotificationEventsT>(value)); return *this;}
    inline NotificationConfig& AddNotificationEvents(NotificationEvent value) { m_notificationEventsHasBeenSet = true; m_notificationEvents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of notification.</p> <ul> <li> <p> <code>Command</code>: Receive
     * notification when the status of a command changes.</p> </li> <li> <p>
     * <code>Invocation</code>: For commands sent to multiple managed nodes, receive
     * notification on a per-node basis when the status of a command changes. </p>
     * </li> </ul>
     */
    inline NotificationType GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(NotificationType value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline NotificationConfig& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}
  private:

    Aws::String m_notificationArn;
    bool m_notificationArnHasBeenSet = false;

    Aws::Vector<NotificationEvent> m_notificationEvents;
    bool m_notificationEventsHasBeenSet = false;

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
