/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/NotificationChannel.h>
#include <aws/rolesanywhere/model/NotificationEvent.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p> Customizable notification settings that will be applied to notification
   * events. IAM Roles Anywhere consumes these settings while notifying across
   * multiple channels - CloudWatch metrics, EventBridge, and Health Dashboard.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/NotificationSetting">AWS
   * API Reference</a></p>
   */
  class NotificationSetting
  {
  public:
    AWS_ROLESANYWHERE_API NotificationSetting();
    AWS_ROLESANYWHERE_API NotificationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API NotificationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specified channel of notification. IAM Roles Anywhere uses CloudWatch
     * metrics, EventBridge, and Health Dashboard to notify for an event.</p> 
     * <p>In the absence of a specific channel, IAM Roles Anywhere applies this setting
     * to 'ALL' channels.</p> 
     */
    inline const NotificationChannel& GetChannel() const{ return m_channel; }

    /**
     * <p>The specified channel of notification. IAM Roles Anywhere uses CloudWatch
     * metrics, EventBridge, and Health Dashboard to notify for an event.</p> 
     * <p>In the absence of a specific channel, IAM Roles Anywhere applies this setting
     * to 'ALL' channels.</p> 
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The specified channel of notification. IAM Roles Anywhere uses CloudWatch
     * metrics, EventBridge, and Health Dashboard to notify for an event.</p> 
     * <p>In the absence of a specific channel, IAM Roles Anywhere applies this setting
     * to 'ALL' channels.</p> 
     */
    inline void SetChannel(const NotificationChannel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The specified channel of notification. IAM Roles Anywhere uses CloudWatch
     * metrics, EventBridge, and Health Dashboard to notify for an event.</p> 
     * <p>In the absence of a specific channel, IAM Roles Anywhere applies this setting
     * to 'ALL' channels.</p> 
     */
    inline void SetChannel(NotificationChannel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The specified channel of notification. IAM Roles Anywhere uses CloudWatch
     * metrics, EventBridge, and Health Dashboard to notify for an event.</p> 
     * <p>In the absence of a specific channel, IAM Roles Anywhere applies this setting
     * to 'ALL' channels.</p> 
     */
    inline NotificationSetting& WithChannel(const NotificationChannel& value) { SetChannel(value); return *this;}

    /**
     * <p>The specified channel of notification. IAM Roles Anywhere uses CloudWatch
     * metrics, EventBridge, and Health Dashboard to notify for an event.</p> 
     * <p>In the absence of a specific channel, IAM Roles Anywhere applies this setting
     * to 'ALL' channels.</p> 
     */
    inline NotificationSetting& WithChannel(NotificationChannel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the notification setting is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the notification setting is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the notification setting is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the notification setting is enabled.</p>
     */
    inline NotificationSetting& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The event to which this notification setting is applied.</p>
     */
    inline const NotificationEvent& GetEvent() const{ return m_event; }

    /**
     * <p>The event to which this notification setting is applied.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The event to which this notification setting is applied.</p>
     */
    inline void SetEvent(const NotificationEvent& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event to which this notification setting is applied.</p>
     */
    inline void SetEvent(NotificationEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The event to which this notification setting is applied.</p>
     */
    inline NotificationSetting& WithEvent(const NotificationEvent& value) { SetEvent(value); return *this;}

    /**
     * <p>The event to which this notification setting is applied.</p>
     */
    inline NotificationSetting& WithEvent(NotificationEvent&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>The number of days before a notification event. This value is required for a
     * notification setting that is enabled.</p>
     */
    inline int GetThreshold() const{ return m_threshold; }

    /**
     * <p>The number of days before a notification event. This value is required for a
     * notification setting that is enabled.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The number of days before a notification event. This value is required for a
     * notification setting that is enabled.</p>
     */
    inline void SetThreshold(int value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The number of days before a notification event. This value is required for a
     * notification setting that is enabled.</p>
     */
    inline NotificationSetting& WithThreshold(int value) { SetThreshold(value); return *this;}

  private:

    NotificationChannel m_channel;
    bool m_channelHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    NotificationEvent m_event;
    bool m_eventHasBeenSet = false;

    int m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
