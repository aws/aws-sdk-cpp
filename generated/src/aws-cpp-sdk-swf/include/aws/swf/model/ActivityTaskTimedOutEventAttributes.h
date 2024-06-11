﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityTaskTimeoutType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>ActivityTaskTimedOut</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskTimedOutEventAttributes">AWS
   * API Reference</a></p>
   */
  class ActivityTaskTimedOutEventAttributes
  {
  public:
    AWS_SWF_API ActivityTaskTimedOutEventAttributes();
    AWS_SWF_API ActivityTaskTimedOutEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTaskTimedOutEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the timeout that caused this event.</p>
     */
    inline const ActivityTaskTimeoutType& GetTimeoutType() const{ return m_timeoutType; }
    inline bool TimeoutTypeHasBeenSet() const { return m_timeoutTypeHasBeenSet; }
    inline void SetTimeoutType(const ActivityTaskTimeoutType& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }
    inline void SetTimeoutType(ActivityTaskTimeoutType&& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = std::move(value); }
    inline ActivityTaskTimedOutEventAttributes& WithTimeoutType(const ActivityTaskTimeoutType& value) { SetTimeoutType(value); return *this;}
    inline ActivityTaskTimedOutEventAttributes& WithTimeoutType(ActivityTaskTimeoutType&& value) { SetTimeoutType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }
    inline ActivityTaskTimedOutEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded when this
     * activity task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline ActivityTaskTimedOutEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the content of the <code>details</code> parameter for the last call
     * made by the activity to <code>RecordActivityTaskHeartbeat</code>.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }
    inline ActivityTaskTimedOutEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline ActivityTaskTimedOutEventAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline ActivityTaskTimedOutEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}
  private:

    ActivityTaskTimeoutType m_timeoutType;
    bool m_timeoutTypeHasBeenSet = false;

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet = false;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
