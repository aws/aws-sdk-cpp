﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/mturk-requester/model/NotificationSpecification.h>
#include <aws/mturk-requester/model/EventType.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class SendTestEventNotificationRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API SendTestEventNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendTestEventNotification"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The notification specification to test. This value is identical to the value
     * you would provide to the UpdateNotificationSettings operation when you establish
     * the notification specification for a HIT type. </p>
     */
    inline const NotificationSpecification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const NotificationSpecification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(NotificationSpecification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline SendTestEventNotificationRequest& WithNotification(const NotificationSpecification& value) { SetNotification(value); return *this;}
    inline SendTestEventNotificationRequest& WithNotification(NotificationSpecification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The event to simulate to test the notification specification. This event is
     * included in the test message even if the notification specification does not
     * include the event type. The notification specification does not filter out the
     * test event. </p>
     */
    inline const EventType& GetTestEventType() const{ return m_testEventType; }
    inline bool TestEventTypeHasBeenSet() const { return m_testEventTypeHasBeenSet; }
    inline void SetTestEventType(const EventType& value) { m_testEventTypeHasBeenSet = true; m_testEventType = value; }
    inline void SetTestEventType(EventType&& value) { m_testEventTypeHasBeenSet = true; m_testEventType = std::move(value); }
    inline SendTestEventNotificationRequest& WithTestEventType(const EventType& value) { SetTestEventType(value); return *this;}
    inline SendTestEventNotificationRequest& WithTestEventType(EventType&& value) { SetTestEventType(std::move(value)); return *this;}
    ///@}
  private:

    NotificationSpecification m_notification;
    bool m_notificationHasBeenSet = false;

    EventType m_testEventType;
    bool m_testEventTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
