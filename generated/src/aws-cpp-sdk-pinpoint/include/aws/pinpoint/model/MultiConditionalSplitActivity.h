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
    AWS_PINPOINT_API MultiConditionalSplitActivity() = default;
    AWS_PINPOINT_API MultiConditionalSplitActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MultiConditionalSplitActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The paths for the activity, including the conditions for entering each path
     * and the activity to perform for each path.</p>
     */
    inline const Aws::Vector<MultiConditionalBranch>& GetBranches() const { return m_branches; }
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }
    template<typename BranchesT = Aws::Vector<MultiConditionalBranch>>
    void SetBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches = std::forward<BranchesT>(value); }
    template<typename BranchesT = Aws::Vector<MultiConditionalBranch>>
    MultiConditionalSplitActivity& WithBranches(BranchesT&& value) { SetBranches(std::forward<BranchesT>(value)); return *this;}
    template<typename BranchesT = MultiConditionalBranch>
    MultiConditionalSplitActivity& AddBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches.emplace_back(std::forward<BranchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the activity to perform for participants who don't
     * meet any of the conditions specified for other paths in the activity.</p>
     */
    inline const Aws::String& GetDefaultActivity() const { return m_defaultActivity; }
    inline bool DefaultActivityHasBeenSet() const { return m_defaultActivityHasBeenSet; }
    template<typename DefaultActivityT = Aws::String>
    void SetDefaultActivity(DefaultActivityT&& value) { m_defaultActivityHasBeenSet = true; m_defaultActivity = std::forward<DefaultActivityT>(value); }
    template<typename DefaultActivityT = Aws::String>
    MultiConditionalSplitActivity& WithDefaultActivity(DefaultActivityT&& value) { SetDefaultActivity(std::forward<DefaultActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time to wait or the date and time when Amazon Pinpoint
     * determines whether the conditions are met.</p>
     */
    inline const WaitTime& GetEvaluationWaitTime() const { return m_evaluationWaitTime; }
    inline bool EvaluationWaitTimeHasBeenSet() const { return m_evaluationWaitTimeHasBeenSet; }
    template<typename EvaluationWaitTimeT = WaitTime>
    void SetEvaluationWaitTime(EvaluationWaitTimeT&& value) { m_evaluationWaitTimeHasBeenSet = true; m_evaluationWaitTime = std::forward<EvaluationWaitTimeT>(value); }
    template<typename EvaluationWaitTimeT = WaitTime>
    MultiConditionalSplitActivity& WithEvaluationWaitTime(EvaluationWaitTimeT&& value) { SetEvaluationWaitTime(std::forward<EvaluationWaitTimeT>(value)); return *this;}
    ///@}
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
