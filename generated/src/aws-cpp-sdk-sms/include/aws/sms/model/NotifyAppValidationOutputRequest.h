﻿/**
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
    AWS_SMS_API NotifyAppValidationOutputRequest();

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
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline NotifyAppValidationOutputRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline NotifyAppValidationOutputRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline NotifyAppValidationOutputRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification information.</p>
     */
    inline const NotificationContext& GetNotificationContext() const{ return m_notificationContext; }
    inline bool NotificationContextHasBeenSet() const { return m_notificationContextHasBeenSet; }
    inline void SetNotificationContext(const NotificationContext& value) { m_notificationContextHasBeenSet = true; m_notificationContext = value; }
    inline void SetNotificationContext(NotificationContext&& value) { m_notificationContextHasBeenSet = true; m_notificationContext = std::move(value); }
    inline NotifyAppValidationOutputRequest& WithNotificationContext(const NotificationContext& value) { SetNotificationContext(value); return *this;}
    inline NotifyAppValidationOutputRequest& WithNotificationContext(NotificationContext&& value) { SetNotificationContext(std::move(value)); return *this;}
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
