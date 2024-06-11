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
    AWS_SSMINCIDENTS_API EventSummary();
    AWS_SSMINCIDENTS_API EventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API EventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeline event ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline EventSummary& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline EventSummary& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline EventSummary& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of references in a <code>TimelineEvent</code>.</p>
     */
    inline const Aws::Vector<EventReference>& GetEventReferences() const{ return m_eventReferences; }
    inline bool EventReferencesHasBeenSet() const { return m_eventReferencesHasBeenSet; }
    inline void SetEventReferences(const Aws::Vector<EventReference>& value) { m_eventReferencesHasBeenSet = true; m_eventReferences = value; }
    inline void SetEventReferences(Aws::Vector<EventReference>&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences = std::move(value); }
    inline EventSummary& WithEventReferences(const Aws::Vector<EventReference>& value) { SetEventReferences(value); return *this;}
    inline EventSummary& WithEventReferences(Aws::Vector<EventReference>&& value) { SetEventReferences(std::move(value)); return *this;}
    inline EventSummary& AddEventReferences(const EventReference& value) { m_eventReferencesHasBeenSet = true; m_eventReferences.push_back(value); return *this; }
    inline EventSummary& AddEventReferences(EventReference&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline EventSummary& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline EventSummary& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event. The timeline event must be <code>Custom Event</code> or
     * <code>Note</code>.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline EventSummary& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline EventSummary& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline EventSummary& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the timeline event was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetEventUpdatedTime() const{ return m_eventUpdatedTime; }
    inline bool EventUpdatedTimeHasBeenSet() const { return m_eventUpdatedTimeHasBeenSet; }
    inline void SetEventUpdatedTime(const Aws::Utils::DateTime& value) { m_eventUpdatedTimeHasBeenSet = true; m_eventUpdatedTime = value; }
    inline void SetEventUpdatedTime(Aws::Utils::DateTime&& value) { m_eventUpdatedTimeHasBeenSet = true; m_eventUpdatedTime = std::move(value); }
    inline EventSummary& WithEventUpdatedTime(const Aws::Utils::DateTime& value) { SetEventUpdatedTime(value); return *this;}
    inline EventSummary& WithEventUpdatedTime(Aws::Utils::DateTime&& value) { SetEventUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident that the event happened
     * during.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }
    inline EventSummary& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}
    inline EventSummary& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}
    inline EventSummary& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::Vector<EventReference> m_eventReferences;
    bool m_eventReferencesHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_eventUpdatedTime;
    bool m_eventUpdatedTimeHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
