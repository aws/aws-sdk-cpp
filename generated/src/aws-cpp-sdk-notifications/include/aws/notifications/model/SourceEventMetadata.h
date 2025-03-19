/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/Resource.h>
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
   * <p>Describes the metadata for a source event.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-events-structure.html">Event
   * structure reference</a> in the <i>Amazon EventBridge User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/SourceEventMetadata">AWS
   * API Reference</a></p>
   */
  class SourceEventMetadata
  {
  public:
    AWS_NOTIFICATIONS_API SourceEventMetadata() = default;
    AWS_NOTIFICATIONS_API SourceEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API SourceEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the type of event.</p>
     */
    inline const Aws::String& GetEventTypeVersion() const { return m_eventTypeVersion; }
    inline bool EventTypeVersionHasBeenSet() const { return m_eventTypeVersionHasBeenSet; }
    template<typename EventTypeVersionT = Aws::String>
    void SetEventTypeVersion(EventTypeVersionT&& value) { m_eventTypeVersionHasBeenSet = true; m_eventTypeVersion = std::forward<EventTypeVersionT>(value); }
    template<typename EventTypeVersionT = Aws::String>
    SourceEventMetadata& WithEventTypeVersion(EventTypeVersionT&& value) { SetEventTypeVersion(std::forward<EventTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source event id.</p>
     */
    inline const Aws::String& GetSourceEventId() const { return m_sourceEventId; }
    inline bool SourceEventIdHasBeenSet() const { return m_sourceEventIdHasBeenSet; }
    template<typename SourceEventIdT = Aws::String>
    void SetSourceEventId(SourceEventIdT&& value) { m_sourceEventIdHasBeenSet = true; m_sourceEventId = std::forward<SourceEventIdT>(value); }
    template<typename SourceEventIdT = Aws::String>
    SourceEventMetadata& WithSourceEventId(SourceEventIdT&& value) { SetSourceEventId(std::forward<SourceEventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region the event originated from.</p>
     */
    inline const Aws::String& GetEventOriginRegion() const { return m_eventOriginRegion; }
    inline bool EventOriginRegionHasBeenSet() const { return m_eventOriginRegionHasBeenSet; }
    template<typename EventOriginRegionT = Aws::String>
    void SetEventOriginRegion(EventOriginRegionT&& value) { m_eventOriginRegionHasBeenSet = true; m_eventOriginRegion = std::forward<EventOriginRegionT>(value); }
    template<typename EventOriginRegionT = Aws::String>
    SourceEventMetadata& WithEventOriginRegion(EventOriginRegionT&& value) { SetEventOriginRegion(std::forward<EventOriginRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary Amazon Web Services account of <code>SourceEvent</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const { return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    template<typename RelatedAccountT = Aws::String>
    void SetRelatedAccount(RelatedAccountT&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::forward<RelatedAccountT>(value); }
    template<typename RelatedAccountT = Aws::String>
    SourceEventMetadata& WithRelatedAccount(RelatedAccountT&& value) { SetRelatedAccount(std::forward<RelatedAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service the event originates from. For example
     * <code>aws.cloudwatch</code>.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    SourceEventMetadata& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the source event occurred. This is based on the Source
     * Event.</p>
     */
    inline const Aws::Utils::DateTime& GetEventOccurrenceTime() const { return m_eventOccurrenceTime; }
    inline bool EventOccurrenceTimeHasBeenSet() const { return m_eventOccurrenceTimeHasBeenSet; }
    template<typename EventOccurrenceTimeT = Aws::Utils::DateTime>
    void SetEventOccurrenceTime(EventOccurrenceTimeT&& value) { m_eventOccurrenceTimeHasBeenSet = true; m_eventOccurrenceTime = std::forward<EventOccurrenceTimeT>(value); }
    template<typename EventOccurrenceTimeT = Aws::Utils::DateTime>
    SourceEventMetadata& WithEventOccurrenceTime(EventOccurrenceTimeT&& value) { SetEventOccurrenceTime(std::forward<EventOccurrenceTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event. For example, an Amazon CloudWatch state change.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    SourceEventMetadata& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resources related to this <code>NotificationEvent</code>.</p>
     */
    inline const Aws::Vector<Resource>& GetRelatedResources() const { return m_relatedResources; }
    inline bool RelatedResourcesHasBeenSet() const { return m_relatedResourcesHasBeenSet; }
    template<typename RelatedResourcesT = Aws::Vector<Resource>>
    void SetRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = std::forward<RelatedResourcesT>(value); }
    template<typename RelatedResourcesT = Aws::Vector<Resource>>
    SourceEventMetadata& WithRelatedResources(RelatedResourcesT&& value) { SetRelatedResources(std::forward<RelatedResourcesT>(value)); return *this;}
    template<typename RelatedResourcesT = Resource>
    SourceEventMetadata& AddRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.emplace_back(std::forward<RelatedResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_eventTypeVersion;
    bool m_eventTypeVersionHasBeenSet = false;

    Aws::String m_sourceEventId;
    bool m_sourceEventIdHasBeenSet = false;

    Aws::String m_eventOriginRegion;
    bool m_eventOriginRegionHasBeenSet = false;

    Aws::String m_relatedAccount;
    bool m_relatedAccountHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Utils::DateTime m_eventOccurrenceTime{};
    bool m_eventOccurrenceTimeHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Vector<Resource> m_relatedResources;
    bool m_relatedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
