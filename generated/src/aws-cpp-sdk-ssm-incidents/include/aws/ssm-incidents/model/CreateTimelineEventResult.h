/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSMIncidents
{
namespace Model
{
  class CreateTimelineEventResult
  {
  public:
    AWS_SSMINCIDENTS_API CreateTimelineEventResult() = default;
    AWS_SSMINCIDENTS_API CreateTimelineEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API CreateTimelineEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the event for easy reference later. </p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    CreateTimelineEventResult& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident record that you added the event to.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const { return m_incidentRecordArn; }
    template<typename IncidentRecordArnT = Aws::String>
    void SetIncidentRecordArn(IncidentRecordArnT&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::forward<IncidentRecordArnT>(value); }
    template<typename IncidentRecordArnT = Aws::String>
    CreateTimelineEventResult& WithIncidentRecordArn(IncidentRecordArnT&& value) { SetIncidentRecordArn(std::forward<IncidentRecordArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTimelineEventResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
