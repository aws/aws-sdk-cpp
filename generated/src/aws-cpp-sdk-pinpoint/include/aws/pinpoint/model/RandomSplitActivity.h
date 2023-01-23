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
    AWS_PINPOINT_API RandomSplitActivity();
    AWS_PINPOINT_API RandomSplitActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RandomSplitActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline const Aws::Vector<RandomSplitEntry>& GetBranches() const{ return m_branches; }

    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }

    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline void SetBranches(const Aws::Vector<RandomSplitEntry>& value) { m_branchesHasBeenSet = true; m_branches = value; }

    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline void SetBranches(Aws::Vector<RandomSplitEntry>&& value) { m_branchesHasBeenSet = true; m_branches = std::move(value); }

    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline RandomSplitActivity& WithBranches(const Aws::Vector<RandomSplitEntry>& value) { SetBranches(value); return *this;}

    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline RandomSplitActivity& WithBranches(Aws::Vector<RandomSplitEntry>&& value) { SetBranches(std::move(value)); return *this;}

    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline RandomSplitActivity& AddBranches(const RandomSplitEntry& value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }

    /**
     * <p>The paths for the activity, including the percentage of participants to enter
     * each path and the activity to perform for each path.</p>
     */
    inline RandomSplitActivity& AddBranches(RandomSplitEntry&& value) { m_branchesHasBeenSet = true; m_branches.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RandomSplitEntry> m_branches;
    bool m_branchesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
