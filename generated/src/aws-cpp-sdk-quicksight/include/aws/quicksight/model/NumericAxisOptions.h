/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisScale.h>
#include <aws/quicksight/model/AxisDisplayRange.h>
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
   * <p>The options for an axis with a numeric field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericAxisOptions">AWS
   * API Reference</a></p>
   */
  class NumericAxisOptions
  {
  public:
    AWS_QUICKSIGHT_API NumericAxisOptions() = default;
    AWS_QUICKSIGHT_API NumericAxisOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericAxisOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scale setup of a numeric axis.</p>
     */
    inline const AxisScale& GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    template<typename ScaleT = AxisScale>
    void SetScale(ScaleT&& value) { m_scaleHasBeenSet = true; m_scale = std::forward<ScaleT>(value); }
    template<typename ScaleT = AxisScale>
    NumericAxisOptions& WithScale(ScaleT&& value) { SetScale(std::forward<ScaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range setup of a numeric axis.</p>
     */
    inline const AxisDisplayRange& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = AxisDisplayRange>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = AxisDisplayRange>
    NumericAxisOptions& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}
  private:

    AxisScale m_scale;
    bool m_scaleHasBeenSet = false;

    AxisDisplayRange m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
