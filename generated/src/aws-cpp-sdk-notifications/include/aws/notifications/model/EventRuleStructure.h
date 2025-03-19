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
    AWS_NOTIFICATIONS_API EventRuleStructure() = default;
    AWS_NOTIFICATIONS_API EventRuleStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API EventRuleStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>EventRule</code>. CloudFormation
     * stack generates this ARN and then uses this ARN to associate with the
     * <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EventRuleStructure& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the <code>NotificationConfiguration</code> associated with this
     * <code>EventRule</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const { return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    template<typename NotificationConfigurationArnT = Aws::String>
    void SetNotificationConfigurationArn(NotificationConfigurationArnT&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::forward<NotificationConfigurationArnT>(value); }
    template<typename NotificationConfigurationArnT = Aws::String>
    EventRuleStructure& WithNotificationConfigurationArn(NotificationConfigurationArnT&& value) { SetNotificationConfigurationArn(std::forward<NotificationConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>EventRule</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    EventRuleStructure& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    EventRuleStructure& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    EventRuleStructure& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An additional event pattern used to further filter the events this
     * <code>EventRule</code> receives.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a> in the <i>Amazon EventBridge User Guide.</i> </p>
     */
    inline const Aws::String& GetEventPattern() const { return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    template<typename EventPatternT = Aws::String>
    void SetEventPattern(EventPatternT&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::forward<EventPatternT>(value); }
    template<typename EventPatternT = Aws::String>
    EventRuleStructure& WithEventPattern(EventPatternT&& value) { SetEventPattern(std::forward<EventPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services Regions that send events to this
     * <code>EventRule</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    EventRuleStructure& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    EventRuleStructure& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EventBridge Managed Rule ARNs associated with this
     * <code>EventRule</code>.</p>  <p>These are created by User Notifications
     * within your account so your <code>EventRules</code> can function.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetManagedRules() const { return m_managedRules; }
    inline bool ManagedRulesHasBeenSet() const { return m_managedRulesHasBeenSet; }
    template<typename ManagedRulesT = Aws::Vector<Aws::String>>
    void SetManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules = std::forward<ManagedRulesT>(value); }
    template<typename ManagedRulesT = Aws::Vector<Aws::String>>
    EventRuleStructure& WithManagedRules(ManagedRulesT&& value) { SetManagedRules(std::forward<ManagedRulesT>(value)); return *this;}
    template<typename ManagedRulesT = Aws::String>
    EventRuleStructure& AddManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules.emplace_back(std::forward<ManagedRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of an <code>EventRule</code>'s status by Region. Regions are mapped to
     * <code>EventRuleStatusSummary</code>.</p>
     */
    inline const Aws::Map<Aws::String, EventRuleStatusSummary>& GetStatusSummaryByRegion() const { return m_statusSummaryByRegion; }
    inline bool StatusSummaryByRegionHasBeenSet() const { return m_statusSummaryByRegionHasBeenSet; }
    template<typename StatusSummaryByRegionT = Aws::Map<Aws::String, EventRuleStatusSummary>>
    void SetStatusSummaryByRegion(StatusSummaryByRegionT&& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion = std::forward<StatusSummaryByRegionT>(value); }
    template<typename StatusSummaryByRegionT = Aws::Map<Aws::String, EventRuleStatusSummary>>
    EventRuleStructure& WithStatusSummaryByRegion(StatusSummaryByRegionT&& value) { SetStatusSummaryByRegion(std::forward<StatusSummaryByRegionT>(value)); return *this;}
    template<typename StatusSummaryByRegionKeyT = Aws::String, typename StatusSummaryByRegionValueT = EventRuleStatusSummary>
    EventRuleStructure& AddStatusSummaryByRegion(StatusSummaryByRegionKeyT&& key, StatusSummaryByRegionValueT&& value) {
      m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(std::forward<StatusSummaryByRegionKeyT>(key), std::forward<StatusSummaryByRegionValueT>(value)); return *this;
    }
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
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
