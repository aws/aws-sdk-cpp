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
   * <p>Provides the details of the <code>ActivityTaskCanceled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskCanceledEventAttributes">AWS
   * API Reference</a></p>
   */
  class ActivityTaskCanceledEventAttributes
  {
  public:
    AWS_SWF_API ActivityTaskCanceledEventAttributes() = default;
    AWS_SWF_API ActivityTaskCanceledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTaskCanceledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of the cancellation.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    ActivityTaskCanceledEventAttributes& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const { return m_scheduledEventId; }
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }
    inline ActivityTaskCanceledEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded when this
     * activity task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline ActivityTaskCanceledEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, contains the ID of the last <code>ActivityTaskCancelRequested</code>
     * event recorded for this activity task. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetLatestCancelRequestedEventId() const { return m_latestCancelRequestedEventId; }
    inline bool LatestCancelRequestedEventIdHasBeenSet() const { return m_latestCancelRequestedEventIdHasBeenSet; }
    inline void SetLatestCancelRequestedEventId(long long value) { m_latestCancelRequestedEventIdHasBeenSet = true; m_latestCancelRequestedEventId = value; }
    inline ActivityTaskCanceledEventAttributes& WithLatestCancelRequestedEventId(long long value) { SetLatestCancelRequestedEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    long long m_scheduledEventId{0};
    bool m_scheduledEventIdHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;

    long long m_latestCancelRequestedEventId{0};
    bool m_latestCancelRequestedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
