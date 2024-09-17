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
    AWS_SSMINCIDENTS_API CreateTimelineEventRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTimelineEventRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTimelineEventRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTimelineEventRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the event.</p>
     */
    inline const Aws::String& GetEventData() const{ return m_eventData; }
    inline bool EventDataHasBeenSet() const { return m_eventDataHasBeenSet; }
    inline void SetEventData(const Aws::String& value) { m_eventDataHasBeenSet = true; m_eventData = value; }
    inline void SetEventData(Aws::String&& value) { m_eventDataHasBeenSet = true; m_eventData = std::move(value); }
    inline void SetEventData(const char* value) { m_eventDataHasBeenSet = true; m_eventData.assign(value); }
    inline CreateTimelineEventRequest& WithEventData(const Aws::String& value) { SetEventData(value); return *this;}
    inline CreateTimelineEventRequest& WithEventData(Aws::String&& value) { SetEventData(std::move(value)); return *this;}
    inline CreateTimelineEventRequest& WithEventData(const char* value) { SetEventData(value); return *this;}
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
    inline const Aws::Vector<EventReference>& GetEventReferences() const{ return m_eventReferences; }
    inline bool EventReferencesHasBeenSet() const { return m_eventReferencesHasBeenSet; }
    inline void SetEventReferences(const Aws::Vector<EventReference>& value) { m_eventReferencesHasBeenSet = true; m_eventReferences = value; }
    inline void SetEventReferences(Aws::Vector<EventReference>&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences = std::move(value); }
    inline CreateTimelineEventRequest& WithEventReferences(const Aws::Vector<EventReference>& value) { SetEventReferences(value); return *this;}
    inline CreateTimelineEventRequest& WithEventReferences(Aws::Vector<EventReference>&& value) { SetEventReferences(std::move(value)); return *this;}
    inline CreateTimelineEventRequest& AddEventReferences(const EventReference& value) { m_eventReferencesHasBeenSet = true; m_eventReferences.push_back(value); return *this; }
    inline CreateTimelineEventRequest& AddEventReferences(EventReference&& value) { m_eventReferencesHasBeenSet = true; m_eventReferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline CreateTimelineEventRequest& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline CreateTimelineEventRequest& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event. You can create timeline events of type <code>Custom
     * Event</code> and <code>Note</code>.</p> <p>To make a Note-type event appear on
     * the <i>Incident notes</i> panel in the console, specify <code>eventType</code>
     * as <code>Note</code>and enter the Amazon Resource Name (ARN) of the incident as
     * the value for <code>eventReference</code>.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline CreateTimelineEventRequest& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline CreateTimelineEventRequest& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline CreateTimelineEventRequest& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident record that the action adds
     * the incident to.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }
    inline CreateTimelineEventRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}
    inline CreateTimelineEventRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}
    inline CreateTimelineEventRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_eventData;
    bool m_eventDataHasBeenSet = false;

    Aws::Vector<EventReference> m_eventReferences;
    bool m_eventReferencesHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
