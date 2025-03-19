/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicTimeGranularity.h>
#include <aws/quicksight/model/TopicRelativeDateFilterFunction.h>
#include <aws/quicksight/model/TopicSingularFilterConstant.h>
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
   * <p>A structure that represents a relative date filter.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicRelativeDateFilter">AWS
   * API Reference</a></p>
   */
  class TopicRelativeDateFilter
  {
  public:
    AWS_QUICKSIGHT_API TopicRelativeDateFilter() = default;
    AWS_QUICKSIGHT_API TopicRelativeDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicRelativeDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TopicTimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TopicTimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline TopicRelativeDateFilter& WithTimeGranularity(TopicTimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function to be used in a relative date filter to determine the range of
     * dates to include in the results. Valid values for this structure are
     * <code>BEFORE</code>, <code>AFTER</code>, and <code>BETWEEN</code>.</p>
     */
    inline TopicRelativeDateFilterFunction GetRelativeDateFilterFunction() const { return m_relativeDateFilterFunction; }
    inline bool RelativeDateFilterFunctionHasBeenSet() const { return m_relativeDateFilterFunctionHasBeenSet; }
    inline void SetRelativeDateFilterFunction(TopicRelativeDateFilterFunction value) { m_relativeDateFilterFunctionHasBeenSet = true; m_relativeDateFilterFunction = value; }
    inline TopicRelativeDateFilter& WithRelativeDateFilterFunction(TopicRelativeDateFilterFunction value) { SetRelativeDateFilterFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constant used in a relative date filter.</p>
     */
    inline const TopicSingularFilterConstant& GetConstant() const { return m_constant; }
    inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }
    template<typename ConstantT = TopicSingularFilterConstant>
    void SetConstant(ConstantT&& value) { m_constantHasBeenSet = true; m_constant = std::forward<ConstantT>(value); }
    template<typename ConstantT = TopicSingularFilterConstant>
    TopicRelativeDateFilter& WithConstant(ConstantT&& value) { SetConstant(std::forward<ConstantT>(value)); return *this;}
    ///@}
  private:

    TopicTimeGranularity m_timeGranularity{TopicTimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    TopicRelativeDateFilterFunction m_relativeDateFilterFunction{TopicRelativeDateFilterFunction::NOT_SET};
    bool m_relativeDateFilterFunctionHasBeenSet = false;

    TopicSingularFilterConstant m_constant;
    bool m_constantHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
