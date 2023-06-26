/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/TimelineEvent.h>
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
  class GetTimelineEventResult
  {
  public:
    AWS_SSMINCIDENTS_API GetTimelineEventResult();
    AWS_SSMINCIDENTS_API GetTimelineEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetTimelineEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the timeline event.</p>
     */
    inline const TimelineEvent& GetEvent() const{ return m_event; }

    /**
     * <p>Details about the timeline event.</p>
     */
    inline void SetEvent(const TimelineEvent& value) { m_event = value; }

    /**
     * <p>Details about the timeline event.</p>
     */
    inline void SetEvent(TimelineEvent&& value) { m_event = std::move(value); }

    /**
     * <p>Details about the timeline event.</p>
     */
    inline GetTimelineEventResult& WithEvent(const TimelineEvent& value) { SetEvent(value); return *this;}

    /**
     * <p>Details about the timeline event.</p>
     */
    inline GetTimelineEventResult& WithEvent(TimelineEvent&& value) { SetEvent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTimelineEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTimelineEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTimelineEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TimelineEvent m_event;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
