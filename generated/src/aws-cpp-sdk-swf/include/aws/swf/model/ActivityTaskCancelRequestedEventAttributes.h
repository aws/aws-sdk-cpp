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
   * <p>Provides the details of the <code>ActivityTaskCancelRequested</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskCancelRequestedEventAttributes">AWS
   * API Reference</a></p>
   */
  class ActivityTaskCancelRequestedEventAttributes
  {
  public:
    AWS_SWF_API ActivityTaskCancelRequestedEventAttributes() = default;
    AWS_SWF_API ActivityTaskCancelRequestedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTaskCancelRequestedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RequestCancelActivityTask</code>
     * decision for this cancellation request. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const { return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline ActivityTaskCancelRequestedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetActivityId() const { return m_activityId; }
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }
    template<typename ActivityIdT = Aws::String>
    void SetActivityId(ActivityIdT&& value) { m_activityIdHasBeenSet = true; m_activityId = std::forward<ActivityIdT>(value); }
    template<typename ActivityIdT = Aws::String>
    ActivityTaskCancelRequestedEventAttributes& WithActivityId(ActivityIdT&& value) { SetActivityId(std::forward<ActivityIdT>(value)); return *this;}
    ///@}
  private:

    long long m_decisionTaskCompletedEventId{0};
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
