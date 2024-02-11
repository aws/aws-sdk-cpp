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
   * <p>A notification setting key to reset. A notification setting key includes the
   * event and the channel. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/NotificationSettingKey">AWS
   * API Reference</a></p>
   */
  class NotificationSettingKey
  {
  public:
    AWS_ROLESANYWHERE_API NotificationSettingKey();
    AWS_ROLESANYWHERE_API NotificationSettingKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API NotificationSettingKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specified channel of notification.</p>
     */
    inline const NotificationChannel& GetChannel() const{ return m_channel; }

    /**
     * <p>The specified channel of notification.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The specified channel of notification.</p>
     */
    inline void SetChannel(const NotificationChannel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The specified channel of notification.</p>
     */
    inline void SetChannel(NotificationChannel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The specified channel of notification.</p>
     */
    inline NotificationSettingKey& WithChannel(const NotificationChannel& value) { SetChannel(value); return *this;}

    /**
     * <p>The specified channel of notification.</p>
     */
    inline NotificationSettingKey& WithChannel(NotificationChannel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>The notification setting event to reset.</p>
     */
    inline const NotificationEvent& GetEvent() const{ return m_event; }

    /**
     * <p>The notification setting event to reset.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The notification setting event to reset.</p>
     */
    inline void SetEvent(const NotificationEvent& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The notification setting event to reset.</p>
     */
    inline void SetEvent(NotificationEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The notification setting event to reset.</p>
     */
    inline NotificationSettingKey& WithEvent(const NotificationEvent& value) { SetEvent(value); return *this;}

    /**
     * <p>The notification setting event to reset.</p>
     */
    inline NotificationSettingKey& WithEvent(NotificationEvent&& value) { SetEvent(std::move(value)); return *this;}

  private:

    NotificationChannel m_channel;
    bool m_channelHasBeenSet = false;

    NotificationEvent m_event;
    bool m_eventHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
