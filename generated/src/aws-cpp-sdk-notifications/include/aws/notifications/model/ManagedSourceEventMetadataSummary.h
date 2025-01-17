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
   * <p>A short summary and metadata for a managed notification event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedSourceEventMetadataSummary">AWS
   * API Reference</a></p>
   */
  class ManagedSourceEventMetadataSummary
  {
  public:
    AWS_NOTIFICATIONS_API ManagedSourceEventMetadataSummary();
    AWS_NOTIFICATIONS_API ManagedSourceEventMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedSourceEventMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region where the notification originated.</p>
     */
    inline const Aws::String& GetEventOriginRegion() const{ return m_eventOriginRegion; }
    inline bool EventOriginRegionHasBeenSet() const { return m_eventOriginRegionHasBeenSet; }
    inline void SetEventOriginRegion(const Aws::String& value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion = value; }
    inline void SetEventOriginRegion(Aws::String&& value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion = std::move(value); }
    inline void SetEventOriginRegion(const char* value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion.assign(value); }
    inline ManagedSourceEventMetadataSummary& WithEventOriginRegion(const Aws::String& value) { SetEventOriginRegion(value); return *this;}
    inline ManagedSourceEventMetadataSummary& WithEventOriginRegion(Aws::String&& value) { SetEventOriginRegion(std::move(value)); return *this;}
    inline ManagedSourceEventMetadataSummary& WithEventOriginRegion(const char* value) { SetEventOriginRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source service of the notification.</p> <p>Must match one of the valid
     * EventBridge sources. Only Amazon Web Services service sourced events are
     * supported. For example, <code>aws.ec2</code> and <code>aws.cloudwatch</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-service-event.html#eb-service-event-delivery-level">Event
     * delivery from Amazon Web Services services</a> in the <i>Amazon EventBridge User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ManagedSourceEventMetadataSummary& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ManagedSourceEventMetadataSummary& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ManagedSourceEventMetadataSummary& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event Type of the notification.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline ManagedSourceEventMetadataSummary& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline ManagedSourceEventMetadataSummary& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline ManagedSourceEventMetadataSummary& WithEventType(const char* value) { SetEventType(value); return *this;}
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
