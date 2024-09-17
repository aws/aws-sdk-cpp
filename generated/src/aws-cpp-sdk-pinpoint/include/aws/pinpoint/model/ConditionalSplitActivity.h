/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Condition.h>
#include <aws/pinpoint/model/WaitTime.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for a yes/no split activity in a journey. This type of
   * activity sends participants down one of two paths in a journey, based on
   * conditions that you specify.</p> <p>To create yes/no split activities that
   * send participants down different paths based on push notification events (such
   * as Open or Received events), your mobile app has to specify the User ID and
   * Endpoint ID values. For more information, see <a
   * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/integrate.html">Integrating
   * Amazon Pinpoint with your application</a> in the <i>Amazon Pinpoint Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ConditionalSplitActivity">AWS
   * API Reference</a></p>
   */
  class ConditionalSplitActivity
  {
  public:
    AWS_PINPOINT_API ConditionalSplitActivity();
    AWS_PINPOINT_API ConditionalSplitActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ConditionalSplitActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditions that define the paths for the activity, and the relationship
     * between the conditions.</p>
     */
    inline const Condition& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Condition& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Condition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline ConditionalSplitActivity& WithCondition(const Condition& value) { SetCondition(value); return *this;}
    inline ConditionalSplitActivity& WithCondition(Condition&& value) { SetCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time to wait before determining whether the conditions are met,
     * or the date and time when Amazon Pinpoint determines whether the conditions are
     * met.</p>
     */
    inline const WaitTime& GetEvaluationWaitTime() const{ return m_evaluationWaitTime; }
    inline bool EvaluationWaitTimeHasBeenSet() const { return m_evaluationWaitTimeHasBeenSet; }
    inline void SetEvaluationWaitTime(const WaitTime& value) { m_evaluationWaitTimeHasBeenSet = true; m_evaluationWaitTime = value; }
    inline void SetEvaluationWaitTime(WaitTime&& value) { m_evaluationWaitTimeHasBeenSet = true; m_evaluationWaitTime = std::move(value); }
    inline ConditionalSplitActivity& WithEvaluationWaitTime(const WaitTime& value) { SetEvaluationWaitTime(value); return *this;}
    inline ConditionalSplitActivity& WithEvaluationWaitTime(WaitTime&& value) { SetEvaluationWaitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the activity to perform if the conditions aren't
     * met.</p>
     */
    inline const Aws::String& GetFalseActivity() const{ return m_falseActivity; }
    inline bool FalseActivityHasBeenSet() const { return m_falseActivityHasBeenSet; }
    inline void SetFalseActivity(const Aws::String& value) { m_falseActivityHasBeenSet = true; m_falseActivity = value; }
    inline void SetFalseActivity(Aws::String&& value) { m_falseActivityHasBeenSet = true; m_falseActivity = std::move(value); }
    inline void SetFalseActivity(const char* value) { m_falseActivityHasBeenSet = true; m_falseActivity.assign(value); }
    inline ConditionalSplitActivity& WithFalseActivity(const Aws::String& value) { SetFalseActivity(value); return *this;}
    inline ConditionalSplitActivity& WithFalseActivity(Aws::String&& value) { SetFalseActivity(std::move(value)); return *this;}
    inline ConditionalSplitActivity& WithFalseActivity(const char* value) { SetFalseActivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the activity to perform if the conditions are
     * met.</p>
     */
    inline const Aws::String& GetTrueActivity() const{ return m_trueActivity; }
    inline bool TrueActivityHasBeenSet() const { return m_trueActivityHasBeenSet; }
    inline void SetTrueActivity(const Aws::String& value) { m_trueActivityHasBeenSet = true; m_trueActivity = value; }
    inline void SetTrueActivity(Aws::String&& value) { m_trueActivityHasBeenSet = true; m_trueActivity = std::move(value); }
    inline void SetTrueActivity(const char* value) { m_trueActivityHasBeenSet = true; m_trueActivity.assign(value); }
    inline ConditionalSplitActivity& WithTrueActivity(const Aws::String& value) { SetTrueActivity(value); return *this;}
    inline ConditionalSplitActivity& WithTrueActivity(Aws::String&& value) { SetTrueActivity(std::move(value)); return *this;}
    inline ConditionalSplitActivity& WithTrueActivity(const char* value) { SetTrueActivity(value); return *this;}
    ///@}
  private:

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    WaitTime m_evaluationWaitTime;
    bool m_evaluationWaitTimeHasBeenSet = false;

    Aws::String m_falseActivity;
    bool m_falseActivityHasBeenSet = false;

    Aws::String m_trueActivity;
    bool m_trueActivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
