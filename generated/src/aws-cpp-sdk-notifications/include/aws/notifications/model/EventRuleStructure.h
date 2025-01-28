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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Notifications
{
namespace Model
{

  /**
   * <p>Contains a complete list of fields related to an
   * <code>EventRule</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/EventRuleStructure">AWS
   * API Reference</a></p>
   */
  class EventRuleStructure
  {
  public:
    AWS_NOTIFICATIONS_API EventRuleStructure();
    AWS_NOTIFICATIONS_API EventRuleStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API EventRuleStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>EventRule</code>. CloudFormation
     * stack generates this ARN and then uses this ARN to associate with the
     * <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EventRuleStructure& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EventRuleStructure& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EventRuleStructure& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the <code>NotificationConfiguration</code> associated with this
     * <code>EventRule</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const{ return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    inline void SetNotificationConfigurationArn(const Aws::String& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = value; }
    inline void SetNotificationConfigurationArn(Aws::String&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::move(value); }
    inline void SetNotificationConfigurationArn(const char* value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn.assign(value); }
    inline EventRuleStructure& WithNotificationConfigurationArn(const Aws::String& value) { SetNotificationConfigurationArn(value); return *this;}
    inline EventRuleStructure& WithNotificationConfigurationArn(Aws::String&& value) { SetNotificationConfigurationArn(std::move(value)); return *this;}
    inline EventRuleStructure& WithNotificationConfigurationArn(const char* value) { SetNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>EventRule</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline EventRuleStructure& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline EventRuleStructure& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event source this rule should match with the EventBridge event sources.
     * It must match with atleast one of the valid EventBridge event sources. Only
     * Amazon Web Services service sourced events are supported. For example,
     * <code>aws.ec2</code> and <code>aws.cloudwatch</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-service-event.html#eb-service-event-delivery-level">Event
     * delivery from Amazon Web Services services</a> in the <i> Amazon EventBridge
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline EventRuleStructure& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline EventRuleStructure& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline EventRuleStructure& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type this rule should match with the EventBridge events. It must
     * match with atleast one of the valid EventBridge event types. For example, Amazon
     * EC2 Instance State change Notification and Amazon CloudWatch State Change. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-service-event.html#eb-service-event-delivery-level">Event
     * delivery from Amazon Web Services services</a> in the <i> Amazon EventBridge
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline EventRuleStructure& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline EventRuleStructure& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline EventRuleStructure& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An additional event pattern used to further filter the events this
     * <code>EventRule</code> receives.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a> in the <i>Amazon EventBridge User Guide.</i> </p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }
    inline EventRuleStructure& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline EventRuleStructure& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline EventRuleStructure& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services Regions that send events to this
     * <code>EventRule</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }
    inline EventRuleStructure& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline EventRuleStructure& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline EventRuleStructure& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    inline EventRuleStructure& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }
    inline EventRuleStructure& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EventBridge Managed Rule ARNs associated with this
     * <code>EventRule</code>.</p>  <p>These are created by User Notifications
     * within your account so your <code>EventRules</code> can function.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetManagedRules() const{ return m_managedRules; }
    inline bool ManagedRulesHasBeenSet() const { return m_managedRulesHasBeenSet; }
    inline void SetManagedRules(const Aws::Vector<Aws::String>& value) { m_managedRulesHasBeenSet = true; m_managedRules = value; }
    inline void SetManagedRules(Aws::Vector<Aws::String>&& value) { m_managedRulesHasBeenSet = true; m_managedRules = std::move(value); }
    inline EventRuleStructure& WithManagedRules(const Aws::Vector<Aws::String>& value) { SetManagedRules(value); return *this;}
    inline EventRuleStructure& WithManagedRules(Aws::Vector<Aws::String>&& value) { SetManagedRules(std::move(value)); return *this;}
    inline EventRuleStructure& AddManagedRules(const Aws::String& value) { m_managedRulesHasBeenSet = true; m_managedRules.push_back(value); return *this; }
    inline EventRuleStructure& AddManagedRules(Aws::String&& value) { m_managedRulesHasBeenSet = true; m_managedRules.push_back(std::move(value)); return *this; }
    inline EventRuleStructure& AddManagedRules(const char* value) { m_managedRulesHasBeenSet = true; m_managedRules.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of an <code>EventRule</code>'s status by Region. Regions are mapped to
     * <code>EventRuleStatusSummary</code>.</p>
     */
    inline const Aws::Map<Aws::String, EventRuleStatusSummary>& GetStatusSummaryByRegion() const{ return m_statusSummaryByRegion; }
    inline bool StatusSummaryByRegionHasBeenSet() const { return m_statusSummaryByRegionHasBeenSet; }
    inline void SetStatusSummaryByRegion(const Aws::Map<Aws::String, EventRuleStatusSummary>& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion = value; }
    inline void SetStatusSummaryByRegion(Aws::Map<Aws::String, EventRuleStatusSummary>&& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion = std::move(value); }
    inline EventRuleStructure& WithStatusSummaryByRegion(const Aws::Map<Aws::String, EventRuleStatusSummary>& value) { SetStatusSummaryByRegion(value); return *this;}
    inline EventRuleStructure& WithStatusSummaryByRegion(Aws::Map<Aws::String, EventRuleStatusSummary>&& value) { SetStatusSummaryByRegion(std::move(value)); return *this;}
    inline EventRuleStructure& AddStatusSummaryByRegion(const Aws::String& key, const EventRuleStatusSummary& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(key, value); return *this; }
    inline EventRuleStructure& AddStatusSummaryByRegion(Aws::String&& key, const EventRuleStatusSummary& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(std::move(key), value); return *this; }
    inline EventRuleStructure& AddStatusSummaryByRegion(const Aws::String& key, EventRuleStatusSummary&& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(key, std::move(value)); return *this; }
    inline EventRuleStructure& AddStatusSummaryByRegion(Aws::String&& key, EventRuleStatusSummary&& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(std::move(key), std::move(value)); return *this; }
    inline EventRuleStructure& AddStatusSummaryByRegion(const char* key, EventRuleStatusSummary&& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(key, std::move(value)); return *this; }
    inline EventRuleStructure& AddStatusSummaryByRegion(const char* key, const EventRuleStatusSummary& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
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
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
