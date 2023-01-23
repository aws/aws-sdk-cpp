/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/NotificationSpecification.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class UpdateNotificationSettingsRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API UpdateNotificationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationSettings"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = value; }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::move(value); }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline void SetHITTypeId(const char* value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId.assign(value); }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline UpdateNotificationSettingsRequest& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline UpdateNotificationSettingsRequest& WithHITTypeId(Aws::String&& value) { SetHITTypeId(std::move(value)); return *this;}

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline UpdateNotificationSettingsRequest& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}


    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline const NotificationSpecification& GetNotification() const{ return m_notification; }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline void SetNotification(const NotificationSpecification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline void SetNotification(NotificationSpecification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline UpdateNotificationSettingsRequest& WithNotification(const NotificationSpecification& value) { SetNotification(value); return *this;}

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline UpdateNotificationSettingsRequest& WithNotification(NotificationSpecification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline UpdateNotificationSettingsRequest& WithActive(bool value) { SetActive(value); return *this;}

  private:

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet = false;

    NotificationSpecification m_notification;
    bool m_notificationHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
