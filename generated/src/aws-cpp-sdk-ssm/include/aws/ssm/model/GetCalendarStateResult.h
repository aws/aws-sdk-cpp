/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CalendarState.h>
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
namespace SSM
{
namespace Model
{
  class GetCalendarStateResult
  {
  public:
    AWS_SSM_API GetCalendarStateResult() = default;
    AWS_SSM_API GetCalendarStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetCalendarStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The state of the calendar. An <code>OPEN</code> calendar indicates that
     * actions are allowed to proceed, and a <code>CLOSED</code> calendar indicates
     * that actions aren't allowed to proceed.</p>
     */
    inline CalendarState GetState() const { return m_state; }
    inline void SetState(CalendarState value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetCalendarStateResult& WithState(CalendarState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline const Aws::String& GetAtTime() const { return m_atTime; }
    template<typename AtTimeT = Aws::String>
    void SetAtTime(AtTimeT&& value) { m_atTimeHasBeenSet = true; m_atTime = std::forward<AtTimeT>(value); }
    template<typename AtTimeT = Aws::String>
    GetCalendarStateResult& WithAtTime(AtTimeT&& value) { SetAtTime(std::forward<AtTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline const Aws::String& GetNextTransitionTime() const { return m_nextTransitionTime; }
    template<typename NextTransitionTimeT = Aws::String>
    void SetNextTransitionTime(NextTransitionTimeT&& value) { m_nextTransitionTimeHasBeenSet = true; m_nextTransitionTime = std::forward<NextTransitionTimeT>(value); }
    template<typename NextTransitionTimeT = Aws::String>
    GetCalendarStateResult& WithNextTransitionTime(NextTransitionTimeT&& value) { SetNextTransitionTime(std::forward<NextTransitionTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCalendarStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CalendarState m_state{CalendarState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_atTime;
    bool m_atTimeHasBeenSet = false;

    Aws::String m_nextTransitionTime;
    bool m_nextTransitionTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
