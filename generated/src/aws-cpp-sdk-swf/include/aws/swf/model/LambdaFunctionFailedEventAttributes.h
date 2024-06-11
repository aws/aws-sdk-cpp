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
   * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
   * set for other event types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/LambdaFunctionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionFailedEventAttributes
  {
  public:
    AWS_SWF_API LambdaFunctionFailedEventAttributes();
    AWS_SWF_API LambdaFunctionFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API LambdaFunctionFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>LambdaFunctionScheduled</code> event that was recorded
     * when this activity task was scheduled. To help diagnose issues, use this
     * information to trace back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }
    inline LambdaFunctionFailedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>LambdaFunctionStarted</code> event recorded when this
     * activity task started. To help diagnose issues, use this information to trace
     * back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline LambdaFunctionFailedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason provided for the failure.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline LambdaFunctionFailedEventAttributes& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline LambdaFunctionFailedEventAttributes& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline LambdaFunctionFailedEventAttributes& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the failure.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }
    inline LambdaFunctionFailedEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline LambdaFunctionFailedEventAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline LambdaFunctionFailedEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}
  private:

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet = false;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
