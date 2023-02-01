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


    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline DeleteTimelineEventRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline DeleteTimelineEventRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline DeleteTimelineEventRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline DeleteTimelineEventRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline DeleteTimelineEventRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline DeleteTimelineEventRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
