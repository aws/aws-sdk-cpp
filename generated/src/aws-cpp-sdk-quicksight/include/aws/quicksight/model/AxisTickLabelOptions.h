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
    AWS_QUICKSIGHT_API AxisTickLabelOptions();
    AWS_QUICKSIGHT_API AxisTickLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisTickLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether or not the axis ticks are visible.</p>
     */
    inline const LabelOptions& GetLabelOptions() const{ return m_labelOptions; }

    /**
     * <p>Determines whether or not the axis ticks are visible.</p>
     */
    inline bool LabelOptionsHasBeenSet() const { return m_labelOptionsHasBeenSet; }

    /**
     * <p>Determines whether or not the axis ticks are visible.</p>
     */
    inline void SetLabelOptions(const LabelOptions& value) { m_labelOptionsHasBeenSet = true; m_labelOptions = value; }

    /**
     * <p>Determines whether or not the axis ticks are visible.</p>
     */
    inline void SetLabelOptions(LabelOptions&& value) { m_labelOptionsHasBeenSet = true; m_labelOptions = std::move(value); }

    /**
     * <p>Determines whether or not the axis ticks are visible.</p>
     */
    inline AxisTickLabelOptions& WithLabelOptions(const LabelOptions& value) { SetLabelOptions(value); return *this;}

    /**
     * <p>Determines whether or not the axis ticks are visible.</p>
     */
    inline AxisTickLabelOptions& WithLabelOptions(LabelOptions&& value) { SetLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The rotation angle of the axis tick labels.</p>
     */
    inline double GetRotationAngle() const{ return m_rotationAngle; }

    /**
     * <p>The rotation angle of the axis tick labels.</p>
     */
    inline bool RotationAngleHasBeenSet() const { return m_rotationAngleHasBeenSet; }

    /**
     * <p>The rotation angle of the axis tick labels.</p>
     */
    inline void SetRotationAngle(double value) { m_rotationAngleHasBeenSet = true; m_rotationAngle = value; }

    /**
     * <p>The rotation angle of the axis tick labels.</p>
     */
    inline AxisTickLabelOptions& WithRotationAngle(double value) { SetRotationAngle(value); return *this;}

  private:

    LabelOptions m_labelOptions;
    bool m_labelOptionsHasBeenSet = false;

    double m_rotationAngle;
    bool m_rotationAngleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
