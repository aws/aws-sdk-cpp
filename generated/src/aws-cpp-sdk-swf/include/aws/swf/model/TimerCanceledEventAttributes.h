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
   * <p> Provides the details of the <code>TimerCanceled</code> event. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TimerCanceledEventAttributes">AWS
   * API Reference</a></p>
   */
  class TimerCanceledEventAttributes
  {
  public:
    AWS_SWF_API TimerCanceledEventAttributes() = default;
    AWS_SWF_API TimerCanceledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API TimerCanceledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the timer that was canceled.</p>
     */
    inline const Aws::String& GetTimerId() const { return m_timerId; }
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }
    template<typename TimerIdT = Aws::String>
    void SetTimerId(TimerIdT&& value) { m_timerIdHasBeenSet = true; m_timerId = std::forward<TimerIdT>(value); }
    template<typename TimerIdT = Aws::String>
    TimerCanceledEventAttributes& WithTimerId(TimerIdT&& value) { SetTimerId(std::forward<TimerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline TimerCanceledEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CancelTimer</code> decision to cancel
     * this timer. This information can be useful for diagnosing problems by tracing
     * back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const { return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline TimerCanceledEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;

    long long m_decisionTaskCompletedEventId{0};
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
