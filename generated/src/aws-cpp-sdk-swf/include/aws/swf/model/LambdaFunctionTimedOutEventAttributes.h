/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/LambdaFunctionTimeoutType.h>
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
   * <p>Provides details of the <code>LambdaFunctionTimedOut</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/LambdaFunctionTimedOutEventAttributes">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionTimedOutEventAttributes
  {
  public:
    AWS_SWF_API LambdaFunctionTimedOutEventAttributes() = default;
    AWS_SWF_API LambdaFunctionTimedOutEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API LambdaFunctionTimedOutEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this activity task was scheduled. To help diagnose issues, use this
     * information to trace back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const { return m_scheduledEventId; }
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }
    inline LambdaFunctionTimedOutEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event that was recorded when
     * this activity task started. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline LambdaFunctionTimedOutEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the timeout that caused this event.</p>
     */
    inline LambdaFunctionTimeoutType GetTimeoutType() const { return m_timeoutType; }
    inline bool TimeoutTypeHasBeenSet() const { return m_timeoutTypeHasBeenSet; }
    inline void SetTimeoutType(LambdaFunctionTimeoutType value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }
    inline LambdaFunctionTimedOutEventAttributes& WithTimeoutType(LambdaFunctionTimeoutType value) { SetTimeoutType(value); return *this;}
    ///@}
  private:

    long long m_scheduledEventId{0};
    bool m_scheduledEventIdHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;

    LambdaFunctionTimeoutType m_timeoutType{LambdaFunctionTimeoutType::NOT_SET};
    bool m_timeoutTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
