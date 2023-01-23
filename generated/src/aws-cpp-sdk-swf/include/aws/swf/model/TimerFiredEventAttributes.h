/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
   * <p>Provides the details of the <code>TimerFired</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TimerFiredEventAttributes">AWS
   * API Reference</a></p>
   */
  class TimerFiredEventAttributes
  {
  public:
    AWS_SWF_API TimerFiredEventAttributes();
    AWS_SWF_API TimerFiredEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API TimerFiredEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline const Aws::String& GetTimerId() const{ return m_timerId; }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline void SetTimerId(const Aws::String& value) { m_timerIdHasBeenSet = true; m_timerId = value; }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline void SetTimerId(Aws::String&& value) { m_timerIdHasBeenSet = true; m_timerId = std::move(value); }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline void SetTimerId(const char* value) { m_timerIdHasBeenSet = true; m_timerId.assign(value); }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline TimerFiredEventAttributes& WithTimerId(const Aws::String& value) { SetTimerId(value); return *this;}

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline TimerFiredEventAttributes& WithTimerId(Aws::String&& value) { SetTimerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline TimerFiredEventAttributes& WithTimerId(const char* value) { SetTimerId(value); return *this;}


    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline TimerFiredEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}

  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet = false;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
