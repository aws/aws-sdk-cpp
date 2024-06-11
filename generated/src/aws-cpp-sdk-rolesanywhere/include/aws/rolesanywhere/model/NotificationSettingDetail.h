﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/NotificationChannel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The state of a notification setting.</p> <p>A notification setting includes
   * information such as event name, threshold, status of the notification setting,
   * and the channel to notify.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/NotificationSettingDetail">AWS
   * API Reference</a></p>
   */
  class NotificationSettingDetail
  {
  public:
    AWS_ROLESANYWHERE_API NotificationSettingDetail();
    AWS_ROLESANYWHERE_API NotificationSettingDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API NotificationSettingDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specified channel of notification. IAM Roles Anywhere uses CloudWatch
     * metrics, EventBridge, and Health Dashboard to notify for an event.</p> 
     * <p>In the absence of a specific channel, IAM Roles Anywhere applies this setting
     * to 'ALL' channels.</p> 
     */
    inline const NotificationChannel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const NotificationChannel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(NotificationChannel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline NotificationSettingDetail& WithChannel(const NotificationChannel& value) { SetChannel(value); return *this;}
    inline NotificationSettingDetail& WithChannel(NotificationChannel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal that configured the notification setting. For default settings
     * configured by IAM Roles Anywhere, the value is
     * <code>rolesanywhere.amazonaws.com</code>, and for customized notifications
     * settings, it is the respective account ID. </p>
     */
    inline const Aws::String& GetConfiguredBy() const{ return m_configuredBy; }
    inline bool ConfiguredByHasBeenSet() const { return m_configuredByHasBeenSet; }
    inline void SetConfiguredBy(const Aws::String& value) { m_configuredByHasBeenSet = true; m_configuredBy = value; }
    inline void SetConfiguredBy(Aws::String&& value) { m_configuredByHasBeenSet = true; m_configuredBy = std::move(value); }
    inline void SetConfiguredBy(const char* value) { m_configuredByHasBeenSet = true; m_configuredBy.assign(value); }
    inline NotificationSettingDetail& WithConfiguredBy(const Aws::String& value) { SetConfiguredBy(value); return *this;}
    inline NotificationSettingDetail& WithConfiguredBy(Aws::String&& value) { SetConfiguredBy(std::move(value)); return *this;}
    inline NotificationSettingDetail& WithConfiguredBy(const char* value) { SetConfiguredBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the notification setting is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline NotificationSettingDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event to which this notification setting is applied.</p>
     */
    inline const NotificationEvent& GetEvent() const{ return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(const NotificationEvent& value) { m_eventHasBeenSet = true; m_event = value; }
    inline void SetEvent(NotificationEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }
    inline NotificationSettingDetail& WithEvent(const NotificationEvent& value) { SetEvent(value); return *this;}
    inline NotificationSettingDetail& WithEvent(NotificationEvent&& value) { SetEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days before a notification event.</p>
     */
    inline int GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(int value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline NotificationSettingDetail& WithThreshold(int value) { SetThreshold(value); return *this;}
    ///@}
  private:

    NotificationChannel m_channel;
    bool m_channelHasBeenSet = false;

    Aws::String m_configuredBy;
    bool m_configuredByHasBeenSet = false;

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
