/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The arc axis range of a <code>GaugeChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ArcAxisDisplayRange">AWS
   * API Reference</a></p>
   */
  class ArcAxisDisplayRange
  {
  public:
    AWS_QUICKSIGHT_API ArcAxisDisplayRange();
    AWS_QUICKSIGHT_API ArcAxisDisplayRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ArcAxisDisplayRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value of the arc axis range.</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The minimum value of the arc axis range.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum value of the arc axis range.</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum value of the arc axis range.</p>
     */
    inline ArcAxisDisplayRange& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The maximum value of the arc axis range.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum value of the arc axis range.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum value of the arc axis range.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum value of the arc axis range.</p>
     */
    inline ArcAxisDisplayRange& WithMax(double value) { SetMax(value); return *this;}

  private:

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
