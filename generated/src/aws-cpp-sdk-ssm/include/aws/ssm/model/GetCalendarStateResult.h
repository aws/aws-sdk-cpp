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
    AWS_SSM_API GetCalendarStateResult();
    AWS_SSM_API GetCalendarStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetCalendarStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the calendar. An <code>OPEN</code> calendar indicates that
     * actions are allowed to proceed, and a <code>CLOSED</code> calendar indicates
     * that actions aren't allowed to proceed.</p>
     */
    inline const CalendarState& GetState() const{ return m_state; }

    /**
     * <p>The state of the calendar. An <code>OPEN</code> calendar indicates that
     * actions are allowed to proceed, and a <code>CLOSED</code> calendar indicates
     * that actions aren't allowed to proceed.</p>
     */
    inline void SetState(const CalendarState& value) { m_state = value; }

    /**
     * <p>The state of the calendar. An <code>OPEN</code> calendar indicates that
     * actions are allowed to proceed, and a <code>CLOSED</code> calendar indicates
     * that actions aren't allowed to proceed.</p>
     */
    inline void SetState(CalendarState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the calendar. An <code>OPEN</code> calendar indicates that
     * actions are allowed to proceed, and a <code>CLOSED</code> calendar indicates
     * that actions aren't allowed to proceed.</p>
     */
    inline GetCalendarStateResult& WithState(const CalendarState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the calendar. An <code>OPEN</code> calendar indicates that
     * actions are allowed to proceed, and a <code>CLOSED</code> calendar indicates
     * that actions aren't allowed to proceed.</p>
     */
    inline GetCalendarStateResult& WithState(CalendarState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline const Aws::String& GetAtTime() const{ return m_atTime; }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline void SetAtTime(const Aws::String& value) { m_atTime = value; }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline void SetAtTime(Aws::String&& value) { m_atTime = std::move(value); }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline void SetAtTime(const char* value) { m_atTime.assign(value); }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline GetCalendarStateResult& WithAtTime(const Aws::String& value) { SetAtTime(value); return *this;}

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline GetCalendarStateResult& WithAtTime(Aws::String&& value) { SetAtTime(std::move(value)); return *this;}

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that you specified in your command. If you don't specify a time,
     * <code>GetCalendarState</code> uses the current time.</p>
     */
    inline GetCalendarStateResult& WithAtTime(const char* value) { SetAtTime(value); return *this;}


    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline const Aws::String& GetNextTransitionTime() const{ return m_nextTransitionTime; }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline void SetNextTransitionTime(const Aws::String& value) { m_nextTransitionTime = value; }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline void SetNextTransitionTime(Aws::String&& value) { m_nextTransitionTime = std::move(value); }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline void SetNextTransitionTime(const char* value) { m_nextTransitionTime.assign(value); }

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline GetCalendarStateResult& WithNextTransitionTime(const Aws::String& value) { SetNextTransitionTime(value); return *this;}

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline GetCalendarStateResult& WithNextTransitionTime(Aws::String&& value) { SetNextTransitionTime(std::move(value)); return *this;}

    /**
     * <p>The time, as an <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * string, that the calendar state will change. If the current calendar state is
     * <code>OPEN</code>, <code>NextTransitionTime</code> indicates when the calendar
     * state changes to <code>CLOSED</code>, and vice-versa.</p>
     */
    inline GetCalendarStateResult& WithNextTransitionTime(const char* value) { SetNextTransitionTime(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCalendarStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCalendarStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCalendarStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CalendarState m_state;

    Aws::String m_atTime;

    Aws::String m_nextTransitionTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
