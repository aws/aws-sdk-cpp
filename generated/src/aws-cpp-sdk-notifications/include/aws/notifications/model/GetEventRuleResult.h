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
    AWS_NOTIFICATIONS_API GetEventRuleResult() = default;
    AWS_NOTIFICATIONS_API GetEventRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetEventRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetEventRuleResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const { return m_notificationConfigurationArn; }
    template<typename NotificationConfigurationArnT = Aws::String>
    void SetNotificationConfigurationArn(NotificationConfigurationArnT&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::forward<NotificationConfigurationArnT>(value); }
    template<typename NotificationConfigurationArnT = Aws::String>
    GetEventRuleResult& WithNotificationConfigurationArn(NotificationConfigurationArnT&& value) { SetNotificationConfigurationArn(std::forward<NotificationConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the <code>EventRule</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetEventRuleResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline const Aws::String& GetSource() const { return m_source; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    GetEventRuleResult& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    inline const Aws::String& GetEventType() const { return m_eventType; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    GetEventRuleResult& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An additional event pattern used to further filter the events this
     * <code>EventRule</code> receives.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a> in the <i>Amazon EventBridge User Guide.</i> </p>
     */
    inline const Aws::String& GetEventPattern() const { return m_eventPattern; }
    template<typename EventPatternT = Aws::String>
    void SetEventPattern(EventPatternT&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::forward<EventPatternT>(value); }
    template<typename EventPatternT = Aws::String>
    GetEventRuleResult& WithEventPattern(EventPatternT&& value) { SetEventPattern(std::forward<EventPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services Regions that send events to this
     * <code>EventRule</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    GetEventRuleResult& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    GetEventRuleResult& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of managed rules from EventBridge that are associated with this
     * <code>EventRule</code>.</p>  <p>These are created by User Notifications
     * within your account so this <code>EventRule</code> functions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetManagedRules() const { return m_managedRules; }
    template<typename ManagedRulesT = Aws::Vector<Aws::String>>
    void SetManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules = std::forward<ManagedRulesT>(value); }
    template<typename ManagedRulesT = Aws::Vector<Aws::String>>
    GetEventRuleResult& WithManagedRules(ManagedRulesT&& value) { SetManagedRules(std::forward<ManagedRulesT>(value)); return *this;}
    template<typename ManagedRulesT = Aws::String>
    GetEventRuleResult& AddManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules.emplace_back(std::forward<ManagedRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of an <code>EventRule</code>'s status by Region. Regions are mapped to
     * <code>EventRuleStatusSummary</code>.</p>
     */
    inline const Aws::Map<Aws::String, EventRuleStatusSummary>& GetStatusSummaryByRegion() const { return m_statusSummaryByRegion; }
    template<typename StatusSummaryByRegionT = Aws::Map<Aws::String, EventRuleStatusSummary>>
    void SetStatusSummaryByRegion(StatusSummaryByRegionT&& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion = std::forward<StatusSummaryByRegionT>(value); }
    template<typename StatusSummaryByRegionT = Aws::Map<Aws::String, EventRuleStatusSummary>>
    GetEventRuleResult& WithStatusSummaryByRegion(StatusSummaryByRegionT&& value) { SetStatusSummaryByRegion(std::forward<StatusSummaryByRegionT>(value)); return *this;}
    template<typename StatusSummaryByRegionKeyT = Aws::String, typename StatusSummaryByRegionValueT = EventRuleStatusSummary>
    GetEventRuleResult& AddStatusSummaryByRegion(StatusSummaryByRegionKeyT&& key, StatusSummaryByRegionValueT&& value) {
      m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(std::forward<StatusSummaryByRegionKeyT>(key), std::forward<StatusSummaryByRegionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedRules;
    bool m_managedRulesHasBeenSet = false;

    Aws::Map<Aws::String, EventRuleStatusSummary> m_statusSummaryByRegion;
    bool m_statusSummaryByRegionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
