/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConstantType.h>
#include <aws/quicksight/model/RangeConstant.h>
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
   * <p>A constant value that is used in a range filter to specify the endpoints of
   * the range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicRangeFilterConstant">AWS
   * API Reference</a></p>
   */
  class TopicRangeFilterConstant
  {
  public:
    AWS_QUICKSIGHT_API TopicRangeFilterConstant() = default;
    AWS_QUICKSIGHT_API TopicRangeFilterConstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicRangeFilterConstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data type of the constant value that is used in a range filter. Valid
     * values for this structure are <code>RANGE</code>.</p>
     */
    inline ConstantType GetConstantType() const { return m_constantType; }
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }
    inline void SetConstantType(ConstantType value) { m_constantTypeHasBeenSet = true; m_constantType = value; }
    inline TopicRangeFilterConstant& WithConstantType(ConstantType value) { SetConstantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the constant that is used to specify the endpoints of a range
     * filter.</p>
     */
    inline const RangeConstant& GetRangeConstant() const { return m_rangeConstant; }
    inline bool RangeConstantHasBeenSet() const { return m_rangeConstantHasBeenSet; }
    template<typename RangeConstantT = RangeConstant>
    void SetRangeConstant(RangeConstantT&& value) { m_rangeConstantHasBeenSet = true; m_rangeConstant = std::forward<RangeConstantT>(value); }
    template<typename RangeConstantT = RangeConstant>
    TopicRangeFilterConstant& WithRangeConstant(RangeConstantT&& value) { SetRangeConstant(std::forward<RangeConstantT>(value)); return *this;}
    ///@}
  private:

    ConstantType m_constantType{ConstantType::NOT_SET};
    bool m_constantTypeHasBeenSet = false;

    RangeConstant m_rangeConstant;
    bool m_rangeConstantHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
