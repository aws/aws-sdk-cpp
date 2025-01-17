/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetEventRuleResult
  {
  public:
    AWS_NOTIFICATIONS_API GetEventRuleResult();
    AWS_NOTIFICATIONS_API GetEventRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetEventRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetEventRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetEventRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetEventRuleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const{ return m_notificationConfigurationArn; }
    inline void SetNotificationConfigurationArn(const Aws::String& value) { m_notificationConfigurationArn = value; }
    inline void SetNotificationConfigurationArn(Aws::String&& value) { m_notificationConfigurationArn = std::move(value); }
    inline void SetNotificationConfigurationArn(const char* value) { m_notificationConfigurationArn.assign(value); }
    inline GetEventRuleResult& WithNotificationConfigurationArn(const Aws::String& value) { SetNotificationConfigurationArn(value); return *this;}
    inline GetEventRuleResult& WithNotificationConfigurationArn(Aws::String&& value) { SetNotificationConfigurationArn(std::move(value)); return *this;}
    inline GetEventRuleResult& WithNotificationConfigurationArn(const char* value) { SetNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the <code>EventRule</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetEventRuleResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetEventRuleResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matched event source.</p> <p>Must match one of the valid EventBridge
     * sources. Only Amazon Web Services service sourced events are supported. For
     * example, <code>aws.ec2</code> and <code>aws.cloudwatch</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-service-event.html#eb-service-event-delivery-level">Event
     * delivery from Amazon Web Services services</a> in the <i>Amazon EventBridge User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline void SetSource(const Aws::String& value) { m_source = value; }
    inline void SetSource(Aws::String&& value) { m_source = std::move(value); }
    inline void SetSource(const char* value) { m_source.assign(value); }
    inline GetEventRuleResult& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline GetEventRuleResult& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline GetEventRuleResult& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type to match.</p> <p>Must match one of the valid Amazon
     * EventBridge event types. For example, EC2 Instance State-change Notification and
     * Amazon CloudWatch Alarm State Change. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-service-event.html#eb-service-event-delivery-level">Event
     * delivery from Amazon Web Services services</a> in the <i>Amazon EventBridge User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline void SetEventType(const Aws::String& value) { m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventType.assign(value); }
    inline GetEventRuleResult& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline GetEventRuleResult& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline GetEventRuleResult& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An additional event pattern used to further filter the events this
     * <code>EventRule</code> receives.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a> in the <i>Amazon EventBridge User Guide.</i> </p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }
    inline void SetEventPattern(const Aws::String& value) { m_eventPattern = value; }
    inline void SetEventPattern(Aws::String&& value) { m_eventPattern = std::move(value); }
    inline void SetEventPattern(const char* value) { m_eventPattern.assign(value); }
    inline GetEventRuleResult& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline GetEventRuleResult& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline GetEventRuleResult& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services Regions that send events to this
     * <code>EventRule</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regions = std::move(value); }
    inline GetEventRuleResult& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline GetEventRuleResult& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline GetEventRuleResult& AddRegions(const Aws::String& value) { m_regions.push_back(value); return *this; }
    inline GetEventRuleResult& AddRegions(Aws::String&& value) { m_regions.push_back(std::move(value)); return *this; }
    inline GetEventRuleResult& AddRegions(const char* value) { m_regions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of managed rules from EventBridge that are associated with this
     * <code>EventRule</code>.</p>  <p>These are created by User Notifications
     * within your account so this <code>EventRule</code> functions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetManagedRules() const{ return m_managedRules; }
    inline void SetManagedRules(const Aws::Vector<Aws::String>& value) { m_managedRules = value; }
    inline void SetManagedRules(Aws::Vector<Aws::String>&& value) { m_managedRules = std::move(value); }
    inline GetEventRuleResult& WithManagedRules(const Aws::Vector<Aws::String>& value) { SetManagedRules(value); return *this;}
    inline GetEventRuleResult& WithManagedRules(Aws::Vector<Aws::String>&& value) { SetManagedRules(std::move(value)); return *this;}
    inline GetEventRuleResult& AddManagedRules(const Aws::String& value) { m_managedRules.push_back(value); return *this; }
    inline GetEventRuleResult& AddManagedRules(Aws::String&& value) { m_managedRules.push_back(std::move(value)); return *this; }
    inline GetEventRuleResult& AddManagedRules(const char* value) { m_managedRules.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of an <code>EventRule</code>'s status by Region. Regions are mapped to
     * <code>EventRuleStatusSummary</code>.</p>
     */
    inline const Aws::Map<Aws::String, EventRuleStatusSummary>& GetStatusSummaryByRegion() const{ return m_statusSummaryByRegion; }
    inline void SetStatusSummaryByRegion(const Aws::Map<Aws::String, EventRuleStatusSummary>& value) { m_statusSummaryByRegion = value; }
    inline void SetStatusSummaryByRegion(Aws::Map<Aws::String, EventRuleStatusSummary>&& value) { m_statusSummaryByRegion = std::move(value); }
    inline GetEventRuleResult& WithStatusSummaryByRegion(const Aws::Map<Aws::String, EventRuleStatusSummary>& value) { SetStatusSummaryByRegion(value); return *this;}
    inline GetEventRuleResult& WithStatusSummaryByRegion(Aws::Map<Aws::String, EventRuleStatusSummary>&& value) { SetStatusSummaryByRegion(std::move(value)); return *this;}
    inline GetEventRuleResult& AddStatusSummaryByRegion(const Aws::String& key, const EventRuleStatusSummary& value) { m_statusSummaryByRegion.emplace(key, value); return *this; }
    inline GetEventRuleResult& AddStatusSummaryByRegion(Aws::String&& key, const EventRuleStatusSummary& value) { m_statusSummaryByRegion.emplace(std::move(key), value); return *this; }
    inline GetEventRuleResult& AddStatusSummaryByRegion(const Aws::String& key, EventRuleStatusSummary&& value) { m_statusSummaryByRegion.emplace(key, std::move(value)); return *this; }
    inline GetEventRuleResult& AddStatusSummaryByRegion(Aws::String&& key, EventRuleStatusSummary&& value) { m_statusSummaryByRegion.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEventRuleResult& AddStatusSummaryByRegion(const char* key, EventRuleStatusSummary&& value) { m_statusSummaryByRegion.emplace(key, std::move(value)); return *this; }
    inline GetEventRuleResult& AddStatusSummaryByRegion(const char* key, const EventRuleStatusSummary& value) { m_statusSummaryByRegion.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEventRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEventRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEventRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_notificationConfigurationArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_source;

    Aws::String m_eventType;

    Aws::String m_eventPattern;

    Aws::Vector<Aws::String> m_regions;

    Aws::Vector<Aws::String> m_managedRules;

    Aws::Map<Aws::String, EventRuleStatusSummary> m_statusSummaryByRegion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
