﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/LocaleCode.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Notifications
{
namespace Model
{

  /**
   */
  class GetManagedNotificationEventRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API GetManagedNotificationEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetManagedNotificationEvent"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

    AWS_NOTIFICATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>ManagedNotificationEvent</code>
     * to return.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline GetManagedNotificationEventRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetManagedNotificationEventRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetManagedNotificationEventRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale code of the language used for the retrieved
     * <code>ManagedNotificationEvent</code>. The default locale is English
     * <code>(en_US)</code>.</p>
     */
    inline const LocaleCode& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const LocaleCode& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(LocaleCode&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline GetManagedNotificationEventRequest& WithLocale(const LocaleCode& value) { SetLocale(value); return *this;}
    inline GetManagedNotificationEventRequest& WithLocale(LocaleCode&& value) { SetLocale(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    LocaleCode m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
