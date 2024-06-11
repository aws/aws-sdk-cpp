/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class DeleteTimelineEventRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API DeleteTimelineEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTimelineEvent"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the event to update. You can use <code>ListTimelineEvents</code> to
     * find an event's ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline DeleteTimelineEventRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline DeleteTimelineEventRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline DeleteTimelineEventRequest& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }
    inline DeleteTimelineEventRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}
    inline DeleteTimelineEventRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}
    inline DeleteTimelineEventRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
