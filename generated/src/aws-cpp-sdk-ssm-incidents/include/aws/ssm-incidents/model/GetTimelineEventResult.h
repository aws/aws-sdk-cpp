/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/TimelineEvent.h>
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

  private:

    TimelineEvent m_event;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
