/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/ManagedNotificationEvent.h>
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
  class GetManagedNotificationEventResult
  {
  public:
    AWS_NOTIFICATIONS_API GetManagedNotificationEventResult();
    AWS_NOTIFICATIONS_API GetManagedNotificationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetManagedNotificationEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetManagedNotificationEventResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetManagedNotificationEventResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetManagedNotificationEventResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const{ return m_managedNotificationConfigurationArn; }
    inline void SetManagedNotificationConfigurationArn(const Aws::String& value) { m_managedNotificationConfigurationArn = value; }
    inline void SetManagedNotificationConfigurationArn(Aws::String&& value) { m_managedNotificationConfigurationArn = std::move(value); }
    inline void SetManagedNotificationConfigurationArn(const char* value) { m_managedNotificationConfigurationArn.assign(value); }
    inline GetManagedNotificationEventResult& WithManagedNotificationConfigurationArn(const Aws::String& value) { SetManagedNotificationConfigurationArn(value); return *this;}
    inline GetManagedNotificationEventResult& WithManagedNotificationConfigurationArn(Aws::String&& value) { SetManagedNotificationConfigurationArn(std::move(value)); return *this;}
    inline GetManagedNotificationEventResult& WithManagedNotificationConfigurationArn(const char* value) { SetManagedNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetManagedNotificationEventResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetManagedNotificationEventResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the <code>ManagedNotificationEvent</code>.</p>
     */
    inline const ManagedNotificationEvent& GetContent() const{ return m_content; }
    inline void SetContent(const ManagedNotificationEvent& value) { m_content = value; }
    inline void SetContent(ManagedNotificationEvent&& value) { m_content = std::move(value); }
    inline GetManagedNotificationEventResult& WithContent(const ManagedNotificationEvent& value) { SetContent(value); return *this;}
    inline GetManagedNotificationEventResult& WithContent(ManagedNotificationEvent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedNotificationEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedNotificationEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedNotificationEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_managedNotificationConfigurationArn;

    Aws::Utils::DateTime m_creationTime;

    ManagedNotificationEvent m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
