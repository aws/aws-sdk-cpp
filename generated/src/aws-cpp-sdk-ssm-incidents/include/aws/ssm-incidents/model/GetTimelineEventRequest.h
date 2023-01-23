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
namespace Http
{
    class URI;
} //namespace Http
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class GetTimelineEventRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API GetTimelineEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTimelineEvent"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;

    AWS_SSMINCIDENTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline GetTimelineEventRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline GetTimelineEventRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event. You can get an event's ID when you create it, or by
     * using <code>ListTimelineEvents</code>.</p>
     */
    inline GetTimelineEventRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


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
    inline GetTimelineEventRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline GetTimelineEventRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline GetTimelineEventRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
