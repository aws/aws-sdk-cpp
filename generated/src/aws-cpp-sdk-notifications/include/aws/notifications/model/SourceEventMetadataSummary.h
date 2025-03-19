/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains metadata about the event that caused the
   * <code>NotificationEvent</code>. For other specific values, see
   * <code>sourceEventMetadata</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/SourceEventMetadataSummary">AWS
   * API Reference</a></p>
   */
  class SourceEventMetadataSummary
  {
  public:
    AWS_NOTIFICATIONS_API SourceEventMetadataSummary() = default;
    AWS_NOTIFICATIONS_API SourceEventMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API SourceEventMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region where the notification originated.</p> <p>Unavailable for
     * aggregated notifications.</p>
     */
    inline const Aws::String& GetEventOriginRegion() const { return m_eventOriginRegion; }
    inline bool EventOriginRegionHasBeenSet() const { return m_eventOriginRegionHasBeenSet; }
    template<typename EventOriginRegionT = Aws::String>
    void SetEventOriginRegion(EventOriginRegionT&& value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion = std::forward<EventOriginRegionT>(value); }
    template<typename EventOriginRegionT = Aws::String>
    SourceEventMetadataSummary& WithEventOriginRegion(EventOriginRegionT&& value) { SetEventOriginRegion(std::forward<EventOriginRegionT>(value)); return *this;}
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
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    SourceEventMetadataSummary& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    SourceEventMetadataSummary& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventOriginRegion;
    bool m_eventOriginRegionHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
