/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationHubStatusSummary.h>
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
  class DeregisterNotificationHubResult
  {
  public:
    AWS_NOTIFICATIONS_API DeregisterNotificationHubResult();
    AWS_NOTIFICATIONS_API DeregisterNotificationHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API DeregisterNotificationHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>NotificationConfiguration</code> Region.</p>
     */
    inline const Aws::String& GetNotificationHubRegion() const{ return m_notificationHubRegion; }
    inline void SetNotificationHubRegion(const Aws::String& value) { m_notificationHubRegion = value; }
    inline void SetNotificationHubRegion(Aws::String&& value) { m_notificationHubRegion = std::move(value); }
    inline void SetNotificationHubRegion(const char* value) { m_notificationHubRegion.assign(value); }
    inline DeregisterNotificationHubResult& WithNotificationHubRegion(const Aws::String& value) { SetNotificationHubRegion(value); return *this;}
    inline DeregisterNotificationHubResult& WithNotificationHubRegion(Aws::String&& value) { SetNotificationHubRegion(std::move(value)); return *this;}
    inline DeregisterNotificationHubResult& WithNotificationHubRegion(const char* value) { SetNotificationHubRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>NotificationConfiguration</code> status information.</p>
     */
    inline const NotificationHubStatusSummary& GetStatusSummary() const{ return m_statusSummary; }
    inline void SetStatusSummary(const NotificationHubStatusSummary& value) { m_statusSummary = value; }
    inline void SetStatusSummary(NotificationHubStatusSummary&& value) { m_statusSummary = std::move(value); }
    inline DeregisterNotificationHubResult& WithStatusSummary(const NotificationHubStatusSummary& value) { SetStatusSummary(value); return *this;}
    inline DeregisterNotificationHubResult& WithStatusSummary(NotificationHubStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeregisterNotificationHubResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeregisterNotificationHubResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeregisterNotificationHubResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_notificationHubRegion;

    NotificationHubStatusSummary m_statusSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
