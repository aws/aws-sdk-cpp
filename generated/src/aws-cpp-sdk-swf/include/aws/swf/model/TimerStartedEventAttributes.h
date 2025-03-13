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
   * <p>Provides the details of the <code>TimerStarted</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TimerStartedEventAttributes">AWS
   * API Reference</a></p>
   */
  class TimerStartedEventAttributes
  {
  public:
    AWS_SWF_API TimerStartedEventAttributes() = default;
    AWS_SWF_API TimerStartedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API TimerStartedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline const Aws::String& GetTimerId() const { return m_timerId; }
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }
    template<typename TimerIdT = Aws::String>
    void SetTimerId(TimerIdT&& value) { m_timerIdHasBeenSet = true; m_timerId = std::forward<TimerIdT>(value); }
    template<typename TimerIdT = Aws::String>
    TimerStartedEventAttributes& WithTimerId(TimerIdT&& value) { SetTimerId(std::forward<TimerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline const Aws::String& GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    template<typename ControlT = Aws::String>
    void SetControl(ControlT&& value) { m_controlHasBeenSet = true; m_control = std::forward<ControlT>(value); }
    template<typename ControlT = Aws::String>
    TimerStartedEventAttributes& WithControl(ControlT&& value) { SetControl(std::forward<ControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline const Aws::String& GetStartToFireTimeout() const { return m_startToFireTimeout; }
    inline bool StartToFireTimeoutHasBeenSet() const { return m_startToFireTimeoutHasBeenSet; }
    template<typename StartToFireTimeoutT = Aws::String>
    void SetStartToFireTimeout(StartToFireTimeoutT&& value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout = std::forward<StartToFireTimeoutT>(value); }
    template<typename StartToFireTimeoutT = Aws::String>
    TimerStartedEventAttributes& WithStartToFireTimeout(StartToFireTimeoutT&& value) { SetStartToFireTimeout(std::forward<StartToFireTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartTimer</code> decision for this
     * activity task. This information can be useful for diagnosing problems by tracing
     * back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const { return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline TimerStartedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;

    Aws::String m_startToFireTimeout;
    bool m_startToFireTimeoutHasBeenSet = false;

    long long m_decisionTaskCompletedEventId{0};
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
