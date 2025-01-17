/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Notifications
{
namespace Model
{

  /**
   */
  class CreateEventRuleRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API CreateEventRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventRule"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>NotificationConfiguration</code>
     * associated with this <code>EventRule</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const{ return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    inline void SetNotificationConfigurationArn(const Aws::String& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = value; }
    inline void SetNotificationConfigurationArn(Aws::String&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::move(value); }
    inline void SetNotificationConfigurationArn(const char* value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn.assign(value); }
    inline CreateEventRuleRequest& WithNotificationConfigurationArn(const Aws::String& value) { SetNotificationConfigurationArn(value); return *this;}
    inline CreateEventRuleRequest& WithNotificationConfigurationArn(Aws::String&& value) { SetNotificationConfigurationArn(std::move(value)); return *this;}
    inline CreateEventRuleRequest& WithNotificationConfigurationArn(const char* value) { SetNotificationConfigurationArn(value); return *this;}
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
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline CreateEventRuleRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline CreateEventRuleRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline CreateEventRuleRequest& WithSource(const char* value) { SetSource(value); return *this;}
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
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline CreateEventRuleRequest& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline CreateEventRuleRequest& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline CreateEventRuleRequest& WithEventType(const char* value) { SetEventType(value); return *this;}
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
    inline CreateEventRuleRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline CreateEventRuleRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline CreateEventRuleRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
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
    inline CreateEventRuleRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline CreateEventRuleRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline CreateEventRuleRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    inline CreateEventRuleRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }
    inline CreateEventRuleRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
