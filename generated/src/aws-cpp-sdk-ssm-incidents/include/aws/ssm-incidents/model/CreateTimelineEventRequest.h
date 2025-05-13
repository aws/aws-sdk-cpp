/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-incidents/model/EventReference.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class CreateTimelineEventRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API CreateTimelineEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTimelineEvent"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A token that ensures that a client calls the action only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTimelineEventRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the event.</p>
     */
    inline const Aws::String& GetEventData() const { return m_eventData; }
    inline bool EventDataHasBeenSet() const { return m_eventDataHasBeenSet; }
    template<typename EventDataT = Aws::String>
    void SetEventData(EventDataT&& value) { m_eventDataHasBeenSet = true; m_eventData = std::forward<EventDataT>(value); }
    template<typename EventDataT = Aws::String>
    CreateTimelineEventRequest& WithEventData(EventDataT&& value) { SetEventData(std::forward<EventDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds one or more references to the <code>TimelineEvent</code>. A reference is
     * an Amazon Web Services resource involved or associated with the incident. To
     * specify a reference, enter its Amazon Resource Name (ARN). You can also specify
     * a related item associated with a resource. For example, to specify an Amazon
     * DynamoDB (DynamoDB) table as a resource, use the table's ARN. You can also
     * specify an Amazon CloudWatch metric associated with the DynamoDB table as a
     * related item.</p>
     */
    inline const Aws::Vector<EventReference>& GetEventReferences() const { return m_eventReferences; }
    inline bool EventReferencesHasBeenSet() const { return m_eventReferencesHasBeenSet; }
    template<typename EventReferencesT = Aws::Vector<EventReference>>
    void SetEventReferences(EventReferencesT&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences = std::forward<EventReferencesT>(value); }
    template<typename EventReferencesT = Aws::Vector<EventReference>>
    CreateTimelineEventRequest& WithEventReferences(EventReferencesT&& value) { SetEventReferences(std::forward<EventReferencesT>(value)); return *this;}
    template<typename EventReferencesT = EventReference>
    CreateTimelineEventRequest& AddEventReferences(EventReferencesT&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences.emplace_back(std::forward<EventReferencesT>(value)); return *this; }
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
    CreateTimelineEventRequest& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event. You can create timeline events of type <code>Custom
     * Event</code> and <code>Note</code>.</p> <p>To make a Note-type event appear on
     * the <i>Incident notes</i> panel in the console, specify <code>eventType</code>
     * as <code>Note</code>and enter the Amazon Resource Name (ARN) of the incident as
     * the value for <code>eventReference</code>.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    CreateTimelineEventRequest& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident record that the action adds
     * the incident to.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const { return m_incidentRecordArn; }
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }
    template<typename IncidentRecordArnT = Aws::String>
    void SetIncidentRecordArn(IncidentRecordArnT&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::forward<IncidentRecordArnT>(value); }
    template<typename IncidentRecordArnT = Aws::String>
    CreateTimelineEventRequest& WithIncidentRecordArn(IncidentRecordArnT&& value) { SetIncidentRecordArn(std::forward<IncidentRecordArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_eventData;
    bool m_eventDataHasBeenSet = false;

    Aws::Vector<EventReference> m_eventReferences;
    bool m_eventReferencesHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
