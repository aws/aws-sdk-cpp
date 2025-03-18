/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
   * <p>Specifies the settings for a path in a random split activity in a
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RandomSplitEntry">AWS
   * API Reference</a></p>
   */
  class RandomSplitEntry
  {
  public:
    AWS_PINPOINT_API RandomSplitEntry() = default;
    AWS_PINPOINT_API RandomSplitEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RandomSplitEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline const Aws::String& GetNextActivity() const { return m_nextActivity; }
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }
    template<typename NextActivityT = Aws::String>
    void SetNextActivity(NextActivityT&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::forward<NextActivityT>(value); }
    template<typename NextActivityT = Aws::String>
    RandomSplitEntry& WithNextActivity(NextActivityT&& value) { SetNextActivity(std::forward<NextActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of participants to send down the activity path.</p> <p>To
     * determine which participants are sent down each path, Amazon Pinpoint applies a
     * probability-based algorithm to the percentages that you specify for the paths.
     * Therefore, the actual percentage of participants who are sent down a path may
     * not be equal to the percentage that you specify.</p>
     */
    inline int GetPercentage() const { return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    inline void SetPercentage(int value) { m_percentageHasBeenSet = true; m_percentage = value; }
    inline RandomSplitEntry& WithPercentage(int value) { SetPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;

    int m_percentage{0};
    bool m_percentageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
