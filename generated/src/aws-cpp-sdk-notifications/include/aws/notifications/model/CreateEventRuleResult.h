/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/notifications/model/EventRuleStatusSummary.h>
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
  class CreateEventRuleResult
  {
  public:
    AWS_NOTIFICATIONS_API CreateEventRuleResult();
    AWS_NOTIFICATIONS_API CreateEventRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API CreateEventRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateEventRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateEventRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateEventRuleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const{ return m_notificationConfigurationArn; }
    inline void SetNotificationConfigurationArn(const Aws::String& value) { m_notificationConfigurationArn = value; }
    inline void SetNotificationConfigurationArn(Aws::String&& value) { m_notificationConfigurationArn = std::move(value); }
    inline void SetNotificationConfigurationArn(const char* value) { m_notificationConfigurationArn.assign(value); }
    inline CreateEventRuleResult& WithNotificationConfigurationArn(const Aws::String& value) { SetNotificationConfigurationArn(value); return *this;}
    inline CreateEventRuleResult& WithNotificationConfigurationArn(Aws::String&& value) { SetNotificationConfigurationArn(std::move(value)); return *this;}
    inline CreateEventRuleResult& WithNotificationConfigurationArn(const char* value) { SetNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of an <code>EventRule</code>'s status by Region. Regions are mapped to
     * <code>EventRuleStatusSummary</code>.</p>
     */
    inline const Aws::Map<Aws::String, EventRuleStatusSummary>& GetStatusSummaryByRegion() const{ return m_statusSummaryByRegion; }
    inline void SetStatusSummaryByRegion(const Aws::Map<Aws::String, EventRuleStatusSummary>& value) { m_statusSummaryByRegion = value; }
    inline void SetStatusSummaryByRegion(Aws::Map<Aws::String, EventRuleStatusSummary>&& value) { m_statusSummaryByRegion = std::move(value); }
    inline CreateEventRuleResult& WithStatusSummaryByRegion(const Aws::Map<Aws::String, EventRuleStatusSummary>& value) { SetStatusSummaryByRegion(value); return *this;}
    inline CreateEventRuleResult& WithStatusSummaryByRegion(Aws::Map<Aws::String, EventRuleStatusSummary>&& value) { SetStatusSummaryByRegion(std::move(value)); return *this;}
    inline CreateEventRuleResult& AddStatusSummaryByRegion(const Aws::String& key, const EventRuleStatusSummary& value) { m_statusSummaryByRegion.emplace(key, value); return *this; }
    inline CreateEventRuleResult& AddStatusSummaryByRegion(Aws::String&& key, const EventRuleStatusSummary& value) { m_statusSummaryByRegion.emplace(std::move(key), value); return *this; }
    inline CreateEventRuleResult& AddStatusSummaryByRegion(const Aws::String& key, EventRuleStatusSummary&& value) { m_statusSummaryByRegion.emplace(key, std::move(value)); return *this; }
    inline CreateEventRuleResult& AddStatusSummaryByRegion(Aws::String&& key, EventRuleStatusSummary&& value) { m_statusSummaryByRegion.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateEventRuleResult& AddStatusSummaryByRegion(const char* key, EventRuleStatusSummary&& value) { m_statusSummaryByRegion.emplace(key, std::move(value)); return *this; }
    inline CreateEventRuleResult& AddStatusSummaryByRegion(const char* key, const EventRuleStatusSummary& value) { m_statusSummaryByRegion.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEventRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEventRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEventRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_notificationConfigurationArn;

    Aws::Map<Aws::String, EventRuleStatusSummary> m_statusSummaryByRegion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
