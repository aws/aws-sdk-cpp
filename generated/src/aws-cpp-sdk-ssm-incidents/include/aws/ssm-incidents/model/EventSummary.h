/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-incidents/model/EventReference.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about a timeline event during an incident.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/EventSummary">AWS
   * API Reference</a></p>
   */
  class EventSummary
  {
  public:
    AWS_SSMINCIDENTS_API EventSummary() = default;
    AWS_SSMINCIDENTS_API EventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API EventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeline event ID.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    EventSummary& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of references in a <code>TimelineEvent</code>.</p>
     */
    inline const Aws::Vector<EventReference>& GetEventReferences() const { return m_eventReferences; }
    inline bool EventReferencesHasBeenSet() const { return m_eventReferencesHasBeenSet; }
    template<typename EventReferencesT = Aws::Vector<EventReference>>
    void SetEventReferences(EventReferencesT&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences = std::forward<EventReferencesT>(value); }
    template<typename EventReferencesT = Aws::Vector<EventReference>>
    EventSummary& WithEventReferences(EventReferencesT&& value) { SetEventReferences(std::forward<EventReferencesT>(value)); return *this;}
    template<typename EventReferencesT = EventReference>
    EventSummary& AddEventReferences(EventReferencesT&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences.emplace_back(std::forward<EventReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    EventSummary& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event. The timeline event must be <code>Custom Event</code> or
     * <code>Note</code>.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    EventSummary& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the timeline event was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetEventUpdatedTime() const { return m_eventUpdatedTime; }
    inline bool EventUpdatedTimeHasBeenSet() const { return m_eventUpdatedTimeHasBeenSet; }
    template<typename EventUpdatedTimeT = Aws::Utils::DateTime>
    void SetEventUpdatedTime(EventUpdatedTimeT&& value) { m_eventUpdatedTimeHasBeenSet = true; m_eventUpdatedTime = std::forward<EventUpdatedTimeT>(value); }
    template<typename EventUpdatedTimeT = Aws::Utils::DateTime>
    EventSummary& WithEventUpdatedTime(EventUpdatedTimeT&& value) { SetEventUpdatedTime(std::forward<EventUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident that the event happened
     * during.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const { return m_incidentRecordArn; }
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }
    template<typename IncidentRecordArnT = Aws::String>
    void SetIncidentRecordArn(IncidentRecordArnT&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::forward<IncidentRecordArnT>(value); }
    template<typename IncidentRecordArnT = Aws::String>
    EventSummary& WithIncidentRecordArn(IncidentRecordArnT&& value) { SetIncidentRecordArn(std::forward<IncidentRecordArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::Vector<EventReference> m_eventReferences;
    bool m_eventReferencesHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_eventUpdatedTime{};
    bool m_eventUpdatedTimeHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
