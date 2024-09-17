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
    AWS_QUICKSIGHT_API ContributionAnalysisTimeRanges();
    AWS_QUICKSIGHT_API ContributionAnalysisTimeRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ContributionAnalysisTimeRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start range for the <code>ContributionAnalysisTimeRanges</code>.</p>
     */
    inline const TopicIRFilterOption& GetStartRange() const{ return m_startRange; }
    inline bool StartRangeHasBeenSet() const { return m_startRangeHasBeenSet; }
    inline void SetStartRange(const TopicIRFilterOption& value) { m_startRangeHasBeenSet = true; m_startRange = value; }
    inline void SetStartRange(TopicIRFilterOption&& value) { m_startRangeHasBeenSet = true; m_startRange = std::move(value); }
    inline ContributionAnalysisTimeRanges& WithStartRange(const TopicIRFilterOption& value) { SetStartRange(value); return *this;}
    inline ContributionAnalysisTimeRanges& WithStartRange(TopicIRFilterOption&& value) { SetStartRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end range for the <code>ContributionAnalysisTimeRanges</code>.</p>
     */
    inline const TopicIRFilterOption& GetEndRange() const{ return m_endRange; }
    inline bool EndRangeHasBeenSet() const { return m_endRangeHasBeenSet; }
    inline void SetEndRange(const TopicIRFilterOption& value) { m_endRangeHasBeenSet = true; m_endRange = value; }
    inline void SetEndRange(TopicIRFilterOption&& value) { m_endRangeHasBeenSet = true; m_endRange = std::move(value); }
    inline ContributionAnalysisTimeRanges& WithEndRange(const TopicIRFilterOption& value) { SetEndRange(value); return *this;}
    inline ContributionAnalysisTimeRanges& WithEndRange(TopicIRFilterOption&& value) { SetEndRange(std::move(value)); return *this;}
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
