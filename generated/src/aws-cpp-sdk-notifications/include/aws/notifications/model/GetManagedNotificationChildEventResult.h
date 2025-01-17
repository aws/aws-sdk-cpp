/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/ManagedNotificationChildEvent.h>
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
  class GetManagedNotificationChildEventResult
  {
  public:
    AWS_NOTIFICATIONS_API GetManagedNotificationChildEventResult();
    AWS_NOTIFICATIONS_API GetManagedNotificationChildEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetManagedNotificationChildEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetManagedNotificationChildEventResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetManagedNotificationChildEventResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetManagedNotificationChildEventResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationConfiguration</code> associated with the
     * <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const{ return m_managedNotificationConfigurationArn; }
    inline void SetManagedNotificationConfigurationArn(const Aws::String& value) { m_managedNotificationConfigurationArn = value; }
    inline void SetManagedNotificationConfigurationArn(Aws::String&& value) { m_managedNotificationConfigurationArn = std::move(value); }
    inline void SetManagedNotificationConfigurationArn(const char* value) { m_managedNotificationConfigurationArn.assign(value); }
    inline GetManagedNotificationChildEventResult& WithManagedNotificationConfigurationArn(const Aws::String& value) { SetManagedNotificationConfigurationArn(value); return *this;}
    inline GetManagedNotificationChildEventResult& WithManagedNotificationConfigurationArn(Aws::String&& value) { SetManagedNotificationConfigurationArn(std::move(value)); return *this;}
    inline GetManagedNotificationChildEventResult& WithManagedNotificationConfigurationArn(const char* value) { SetManagedNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetManagedNotificationChildEventResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetManagedNotificationChildEventResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const ManagedNotificationChildEvent& GetContent() const{ return m_content; }
    inline void SetContent(const ManagedNotificationChildEvent& value) { m_content = value; }
    inline void SetContent(ManagedNotificationChildEvent&& value) { m_content = std::move(value); }
    inline GetManagedNotificationChildEventResult& WithContent(const ManagedNotificationChildEvent& value) { SetContent(value); return *this;}
    inline GetManagedNotificationChildEventResult& WithContent(ManagedNotificationChildEvent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedNotificationChildEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedNotificationChildEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedNotificationChildEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_managedNotificationConfigurationArn;

    Aws::Utils::DateTime m_creationTime;

    ManagedNotificationChildEvent m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
