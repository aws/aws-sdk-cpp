/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ScheduleLambdaFunctionFailedCause.h>
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
   * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
   * It isn't set for other event types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ScheduleLambdaFunctionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class ScheduleLambdaFunctionFailedEventAttributes
  {
  public:
    AWS_SWF_API ScheduleLambdaFunctionFailedEventAttributes() = default;
    AWS_SWF_API ScheduleLambdaFunctionFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ScheduleLambdaFunctionFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID provided in the <code>ScheduleLambdaFunction</code> decision that
     * failed. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ScheduleLambdaFunctionFailedEventAttributes& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Lambda function.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScheduleLambdaFunctionFailedEventAttributes& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cause of the failure. To help diagnose issues, use this information to
     * trace back the chain of events leading up to this event.</p>  <p>If
     * <code>cause</code> is set to <code>OPERATION_NOT_PERMITTED</code>, the decision
     * failed because it lacked sufficient permissions. For details and example IAM
     * policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline ScheduleLambdaFunctionFailedCause GetCause() const { return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(ScheduleLambdaFunctionFailedCause value) { m_causeHasBeenSet = true; m_cause = value; }
    inline ScheduleLambdaFunctionFailedEventAttributes& WithCause(ScheduleLambdaFunctionFailedCause value) { SetCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>LambdaFunctionCompleted</code> event corresponding to the
     * decision that resulted in scheduling this Lambda task. To help diagnose issues,
     * use this information to trace back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const { return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline ScheduleLambdaFunctionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleLambdaFunctionFailedCause m_cause{ScheduleLambdaFunctionFailedCause::NOT_SET};
    bool m_causeHasBeenSet = false;

    long long m_decisionTaskCompletedEventId{0};
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
