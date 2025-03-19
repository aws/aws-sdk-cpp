/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicIRFilterOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for the
   * <code>ContributionAnalysisTimeRanges</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ContributionAnalysisTimeRanges">AWS
   * API Reference</a></p>
   */
  class ContributionAnalysisTimeRanges
  {
  public:
    AWS_QUICKSIGHT_API ContributionAnalysisTimeRanges() = default;
    AWS_QUICKSIGHT_API ContributionAnalysisTimeRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ContributionAnalysisTimeRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start range for the <code>ContributionAnalysisTimeRanges</code>.</p>
     */
    inline const TopicIRFilterOption& GetStartRange() const { return m_startRange; }
    inline bool StartRangeHasBeenSet() const { return m_startRangeHasBeenSet; }
    template<typename StartRangeT = TopicIRFilterOption>
    void SetStartRange(StartRangeT&& value) { m_startRangeHasBeenSet = true; m_startRange = std::forward<StartRangeT>(value); }
    template<typename StartRangeT = TopicIRFilterOption>
    ContributionAnalysisTimeRanges& WithStartRange(StartRangeT&& value) { SetStartRange(std::forward<StartRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end range for the <code>ContributionAnalysisTimeRanges</code>.</p>
     */
    inline const TopicIRFilterOption& GetEndRange() const { return m_endRange; }
    inline bool EndRangeHasBeenSet() const { return m_endRangeHasBeenSet; }
    template<typename EndRangeT = TopicIRFilterOption>
    void SetEndRange(EndRangeT&& value) { m_endRangeHasBeenSet = true; m_endRange = std::forward<EndRangeT>(value); }
    template<typename EndRangeT = TopicIRFilterOption>
    ContributionAnalysisTimeRanges& WithEndRange(EndRangeT&& value) { SetEndRange(std::forward<EndRangeT>(value)); return *this;}
    ///@}
  private:

    TopicIRFilterOption m_startRange;
    bool m_startRangeHasBeenSet = false;

    TopicIRFilterOption m_endRange;
    bool m_endRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
