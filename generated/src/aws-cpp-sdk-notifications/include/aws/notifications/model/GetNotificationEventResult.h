/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/NotificationEvent.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Notifications
{
namespace Model
{
  class GetNotificationEventResult
  {
  public:
    AWS_NOTIFICATIONS_API GetNotificationEventResult();
    AWS_NOTIFICATIONS_API GetNotificationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetNotificationEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetNotificationEventResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetNotificationEventResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetNotificationEventResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const{ return m_notificationConfigurationArn; }
    inline void SetNotificationConfigurationArn(const Aws::String& value) { m_notificationConfigurationArn = value; }
    inline void SetNotificationConfigurationArn(Aws::String&& value) { m_notificationConfigurationArn = std::move(value); }
    inline void SetNotificationConfigurationArn(const char* value) { m_notificationConfigurationArn.assign(value); }
    inline GetNotificationEventResult& WithNotificationConfigurationArn(const Aws::String& value) { SetNotificationConfigurationArn(value); return *this;}
    inline GetNotificationEventResult& WithNotificationConfigurationArn(Aws::String&& value) { SetNotificationConfigurationArn(std::move(value)); return *this;}
    inline GetNotificationEventResult& WithNotificationConfigurationArn(const char* value) { SetNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>NotificationEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetNotificationEventResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetNotificationEventResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the <code>NotificationEvent</code>.</p>
     */
    inline const NotificationEvent& GetContent() const{ return m_content; }
    inline void SetContent(const NotificationEvent& value) { m_content = value; }
    inline void SetContent(NotificationEvent&& value) { m_content = std::move(value); }
    inline GetNotificationEventResult& WithContent(const NotificationEvent& value) { SetContent(value); return *this;}
    inline GetNotificationEventResult& WithContent(NotificationEvent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNotificationEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNotificationEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNotificationEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_notificationConfigurationArn;

    Aws::Utils::DateTime m_creationTime;

    NotificationEvent m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
