/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/RandomSplitEntry.h>
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
   * <p>Specifies the settings for a random split activity in a journey. This type of
   * activity randomly sends specified percentages of participants down one of as
   * many as five paths in a journey, based on conditions that you
   * specify.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RandomSplitActivity">AWS
   * API Reference</a></p>
   */
  class RandomSplitActivity
  {
  public:
    AWS_PINPOINT_API RandomSplitActivity() = default;
    AWS_PINPOINT_API RandomSplitActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RandomSplitActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline const Aws::Vector<RandomSplitEntry>& GetBranches() const { return m_branches; }
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }
    template<typename BranchesT = Aws::Vector<RandomSplitEntry>>
    void SetBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches = std::forward<BranchesT>(value); }
    template<typename BranchesT = Aws::Vector<RandomSplitEntry>>
    RandomSplitActivity& WithBranches(BranchesT&& value) { SetBranches(std::forward<BranchesT>(value)); return *this;}
    template<typename BranchesT = RandomSplitEntry>
    RandomSplitActivity& AddBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches.emplace_back(std::forward<BranchesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RandomSplitEntry> m_branches;
    bool m_branchesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
