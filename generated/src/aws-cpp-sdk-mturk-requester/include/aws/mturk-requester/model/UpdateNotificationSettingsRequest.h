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
    AWS_MTURK_API UpdateNotificationSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationSettings"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline const Aws::String& GetHITTypeId() const { return m_hITTypeId; }
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }
    template<typename HITTypeIdT = Aws::String>
    void SetHITTypeId(HITTypeIdT&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::forward<HITTypeIdT>(value); }
    template<typename HITTypeIdT = Aws::String>
    UpdateNotificationSettingsRequest& WithHITTypeId(HITTypeIdT&& value) { SetHITTypeId(std::forward<HITTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline const NotificationSpecification& GetNotification() const { return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    template<typename NotificationT = NotificationSpecification>
    void SetNotification(NotificationT&& value) { m_notificationHasBeenSet = true; m_notification = std::forward<NotificationT>(value); }
    template<typename NotificationT = NotificationSpecification>
    UpdateNotificationSettingsRequest& WithNotification(NotificationT&& value) { SetNotification(std::forward<NotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline UpdateNotificationSettingsRequest& WithActive(bool value) { SetActive(value); return *this;}
    ///@}
  private:

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet = false;

    NotificationSpecification m_notification;
    bool m_notificationHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
