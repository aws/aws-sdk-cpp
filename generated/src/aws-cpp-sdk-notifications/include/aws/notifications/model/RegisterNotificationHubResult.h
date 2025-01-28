/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationHubStatusSummary.h>
#include <aws/core/utils/DateTime.h>
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
  class RegisterNotificationHubResult
  {
  public:
    AWS_NOTIFICATIONS_API RegisterNotificationHubResult();
    AWS_NOTIFICATIONS_API RegisterNotificationHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API RegisterNotificationHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Region of the <code>NotificationHub</code>.</p>
     */
    inline const Aws::String& GetNotificationHubRegion() const{ return m_notificationHubRegion; }
    inline void SetNotificationHubRegion(const Aws::String& value) { m_notificationHubRegion = value; }
    inline void SetNotificationHubRegion(Aws::String&& value) { m_notificationHubRegion = std::move(value); }
    inline void SetNotificationHubRegion(const char* value) { m_notificationHubRegion.assign(value); }
    inline RegisterNotificationHubResult& WithNotificationHubRegion(const Aws::String& value) { SetNotificationHubRegion(value); return *this;}
    inline RegisterNotificationHubResult& WithNotificationHubRegion(Aws::String&& value) { SetNotificationHubRegion(std::move(value)); return *this;}
    inline RegisterNotificationHubResult& WithNotificationHubRegion(const char* value) { SetNotificationHubRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about the current
     * <code>NotificationConfiguration</code> status information.</p>
     */
    inline const NotificationHubStatusSummary& GetStatusSummary() const{ return m_statusSummary; }
    inline void SetStatusSummary(const NotificationHubStatusSummary& value) { m_statusSummary = value; }
    inline void SetStatusSummary(NotificationHubStatusSummary&& value) { m_statusSummary = std::move(value); }
    inline RegisterNotificationHubResult& WithStatusSummary(const NotificationHubStatusSummary& value) { SetStatusSummary(value); return *this;}
    inline RegisterNotificationHubResult& WithStatusSummary(NotificationHubStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline RegisterNotificationHubResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline RegisterNotificationHubResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the resource was last activated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivationTime() const{ return m_lastActivationTime; }
    inline void SetLastActivationTime(const Aws::Utils::DateTime& value) { m_lastActivationTime = value; }
    inline void SetLastActivationTime(Aws::Utils::DateTime&& value) { m_lastActivationTime = std::move(value); }
    inline RegisterNotificationHubResult& WithLastActivationTime(const Aws::Utils::DateTime& value) { SetLastActivationTime(value); return *this;}
    inline RegisterNotificationHubResult& WithLastActivationTime(Aws::Utils::DateTime&& value) { SetLastActivationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterNotificationHubResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterNotificationHubResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterNotificationHubResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_notificationHubRegion;

    NotificationHubStatusSummary m_statusSummary;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastActivationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
