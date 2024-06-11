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
    AWS_SSMINCIDENTS_API CreateTimelineEventResult();
    AWS_SSMINCIDENTS_API CreateTimelineEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API CreateTimelineEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the event for easy reference later. </p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline void SetEventId(const Aws::String& value) { m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventId.assign(value); }
    inline CreateTimelineEventResult& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline CreateTimelineEventResult& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline CreateTimelineEventResult& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident record that you added the event to.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArn = value; }
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArn = std::move(value); }
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArn.assign(value); }
    inline CreateTimelineEventResult& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}
    inline CreateTimelineEventResult& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}
    inline CreateTimelineEventResult& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTimelineEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTimelineEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTimelineEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventId;

    Aws::String m_incidentRecordArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
