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
   * <p>Provides the details of the <code>StartTimer</code> decision.</p> <p>
   * <b>Access Control</b> </p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
   * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
   * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
   * doesn't have sufficient permissions to invoke the action, or the parameter
   * values fall outside the specified constraints, the action fails. The associated
   * event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartTimerDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class StartTimerDecisionAttributes
  {
  public:
    AWS_SWF_API StartTimerDecisionAttributes() = default;
    AWS_SWF_API StartTimerDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API StartTimerDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique ID of the timer.</p> <p>The specified string must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must <i>not</i> be the literal string
     * <code>arn</code>.</p>
     */
    inline const Aws::String& GetTimerId() const { return m_timerId; }
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }
    template<typename TimerIdT = Aws::String>
    void SetTimerId(TimerIdT&& value) { m_timerIdHasBeenSet = true; m_timerId = std::forward<TimerIdT>(value); }
    template<typename TimerIdT = Aws::String>
    StartTimerDecisionAttributes& WithTimerId(TimerIdT&& value) { SetTimerId(std::forward<TimerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline const Aws::String& GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    template<typename ControlT = Aws::String>
    void SetControl(ControlT&& value) { m_controlHasBeenSet = true; m_control = std::forward<ControlT>(value); }
    template<typename ControlT = Aws::String>
    StartTimerDecisionAttributes& WithControl(ControlT&& value) { SetControl(std::forward<ControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The duration to wait before firing the timer.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline const Aws::String& GetStartToFireTimeout() const { return m_startToFireTimeout; }
    inline bool StartToFireTimeoutHasBeenSet() const { return m_startToFireTimeoutHasBeenSet; }
    template<typename StartToFireTimeoutT = Aws::String>
    void SetStartToFireTimeout(StartToFireTimeoutT&& value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout = std::forward<StartToFireTimeoutT>(value); }
    template<typename StartToFireTimeoutT = Aws::String>
    StartTimerDecisionAttributes& WithStartToFireTimeout(StartToFireTimeoutT&& value) { SetStartToFireTimeout(std::forward<StartToFireTimeoutT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;

    Aws::String m_startToFireTimeout;
    bool m_startToFireTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
