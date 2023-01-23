/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/WaitTime.h>
#include <aws/pinpoint/model/MultiConditionalBranch.h>
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
   * <p>Specifies the settings for a multivariate split activity in a journey. This
   * type of activity sends participants down one of as many as five paths (including
   * a default <i>Else</i> path) in a journey, based on conditions that you
   * specify.</p> <p>To create multivariate split activities that send
   * participants down different paths based on push notification events (such as
   * Open or Received events), your mobile app has to specify the User ID and
   * Endpoint ID values. For more information, see <a
   * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/integrate.html">Integrating
   * Amazon Pinpoint with your application</a> in the <i>Amazon Pinpoint Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MultiConditionalSplitActivity">AWS
   * API Reference</a></p>
   */
  class MultiConditionalSplitActivity
  {
  public:
    AWS_PINPOINT_API MultiConditionalSplitActivity();
    AWS_PINPOINT_API MultiConditionalSplitActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MultiConditionalSplitActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline const Aws::Vector<MultiConditionalBranch>& GetBranches() const{ return m_branches; }

    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }

    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline void SetBranches(const Aws::Vector<MultiConditionalBranch>& value) { m_branchesHasBeenSet = true; m_branches = value; }

    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline void SetBranches(Aws::Vector<MultiConditionalBranch>&& value) { m_branchesHasBeenSet = true; m_branches = std::move(value); }

    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline MultiConditionalSplitActivity& WithBranches(const Aws::Vector<MultiConditionalBranch>& value) { SetBranches(value); return *this;}

    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline MultiConditionalSplitActivity& WithBranches(Aws::Vector<MultiConditionalBranch>&& value) { SetBranches(std::move(value)); return *this;}

    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline MultiConditionalSplitActivity& AddBranches(const MultiConditionalBranch& value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }

    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline MultiConditionalSplitActivity& AddBranches(MultiConditionalBranch&& value) { m_branchesHasBeenSet = true; m_branches.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline const Aws::String& GetDefaultActivity() const{ return m_defaultActivity; }

    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline bool DefaultActivityHasBeenSet() const { return m_defaultActivityHasBeenSet; }

    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline void SetDefaultActivity(const Aws::String& value) { m_defaultActivityHasBeenSet = true; m_defaultActivity = value; }

    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline void SetDefaultActivity(Aws::String&& value) { m_defaultActivityHasBeenSet = true; m_defaultActivity = std::move(value); }

    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline void SetDefaultActivity(const char* value) { m_defaultActivityHasBeenSet = true; m_defaultActivity.assign(value); }

    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline MultiConditionalSplitActivity& WithDefaultActivity(const Aws::String& value) { SetDefaultActivity(value); return *this;}

    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline MultiConditionalSplitActivity& WithDefaultActivity(Aws::String&& value) { SetDefaultActivity(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline MultiConditionalSplitActivity& WithDefaultActivity(const char* value) { SetDefaultActivity(value); return *this;}


    /**
     * <p>The amount of time to wait or the date and time when Amazon Pinpoint
     * determines whether the conditions are met.</p>
     */
    inline const WaitTime& GetEvaluationWaitTime() const{ return m_evaluationWaitTime; }

    /**
     * <p>The amount of time to wait or the date and time when Amazon Pinpoint
     * determines whether the conditions are met.</p>
     */
    inline bool EvaluationWaitTimeHasBeenSet() const { return m_evaluationWaitTimeHasBeenSet; }

    /**
     * <p>The amount of time to wait or the date and time when Amazon Pinpoint
     * determines whether the conditions are met.</p>
     */
    inline void SetEvaluationWaitTime(const WaitTime& value) { m_evaluationWaitTimeHasBeenSet = true; m_evaluationWaitTime = value; }

    /**
     * <p>The amount of time to wait or the date and time when Amazon Pinpoint
     * determines whether the conditions are met.</p>
     */
    inline void SetEvaluationWaitTime(WaitTime&& value) { m_evaluationWaitTimeHasBeenSet = true; m_evaluationWaitTime = std::move(value); }

    /**
     * <p>The amount of time to wait or the date and time when Amazon Pinpoint
     * determines whether the conditions are met.</p>
     */
    inline MultiConditionalSplitActivity& WithEvaluationWaitTime(const WaitTime& value) { SetEvaluationWaitTime(value); return *this;}

    /**
     * <p>The amount of time to wait or the date and time when Amazon Pinpoint
     * determines whether the conditions are met.</p>
     */
    inline MultiConditionalSplitActivity& WithEvaluationWaitTime(WaitTime&& value) { SetEvaluationWaitTime(std::move(value)); return *this;}

  private:

    Aws::Vector<MultiConditionalBranch> m_branches;
    bool m_branchesHasBeenSet = false;

    Aws::String m_defaultActivity;
    bool m_defaultActivityHasBeenSet = false;

    WaitTime m_evaluationWaitTime;
    bool m_evaluationWaitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
