/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LabelOptions.h>
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
   * <p>The tick label options of an axis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisTickLabelOptions">AWS
   * API Reference</a></p>
   */
  class AxisTickLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API AxisTickLabelOptions() = default;
    AWS_QUICKSIGHT_API AxisTickLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisTickLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether or not the axis ticks are visible.</p>
     */
    inline const LabelOptions& GetLabelOptions() const { return m_labelOptions; }
    inline bool LabelOptionsHasBeenSet() const { return m_labelOptionsHasBeenSet; }
    template<typename LabelOptionsT = LabelOptions>
    void SetLabelOptions(LabelOptionsT&& value) { m_labelOptionsHasBeenSet = true; m_labelOptions = std::forward<LabelOptionsT>(value); }
    template<typename LabelOptionsT = LabelOptions>
    AxisTickLabelOptions& WithLabelOptions(LabelOptionsT&& value) { SetLabelOptions(std::forward<LabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rotation angle of the axis tick labels.</p>
     */
    inline double GetRotationAngle() const { return m_rotationAngle; }
    inline bool RotationAngleHasBeenSet() const { return m_rotationAngleHasBeenSet; }
    inline void SetRotationAngle(double value) { m_rotationAngleHasBeenSet = true; m_rotationAngle = value; }
    inline AxisTickLabelOptions& WithRotationAngle(double value) { SetRotationAngle(value); return *this;}
    ///@}
  private:

    LabelOptions m_labelOptions;
    bool m_labelOptionsHasBeenSet = false;

    double m_rotationAngle{0.0};
    bool m_rotationAngleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
