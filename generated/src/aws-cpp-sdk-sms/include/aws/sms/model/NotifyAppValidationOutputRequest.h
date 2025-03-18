/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/NotificationContext.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class NotifyAppValidationOutputRequest : public SMSRequest
  {
  public:
    AWS_SMS_API NotifyAppValidationOutputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyAppValidationOutput"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    NotifyAppValidationOutputRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification information.</p>
     */
    inline const NotificationContext& GetNotificationContext() const { return m_notificationContext; }
    inline bool NotificationContextHasBeenSet() const { return m_notificationContextHasBeenSet; }
    template<typename NotificationContextT = NotificationContext>
    void SetNotificationContext(NotificationContextT&& value) { m_notificationContextHasBeenSet = true; m_notificationContext = std::forward<NotificationContextT>(value); }
    template<typename NotificationContextT = NotificationContext>
    NotifyAppValidationOutputRequest& WithNotificationContext(NotificationContextT&& value) { SetNotificationContext(std::forward<NotificationContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    NotificationContext m_notificationContext;
    bool m_notificationContextHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
