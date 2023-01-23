/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ArcAxisDisplayRange.h>
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
   * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ArcAxisConfiguration">AWS
   * API Reference</a></p>
   */
  class ArcAxisConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ArcAxisConfiguration();
    AWS_QUICKSIGHT_API ArcAxisConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ArcAxisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The arc axis range of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ArcAxisDisplayRange& GetRange() const{ return m_range; }

    /**
     * <p>The arc axis range of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }

    /**
     * <p>The arc axis range of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetRange(const ArcAxisDisplayRange& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The arc axis range of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetRange(ArcAxisDisplayRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }

    /**
     * <p>The arc axis range of a <code>GaugeChartVisual</code>.</p>
     */
    inline ArcAxisConfiguration& WithRange(const ArcAxisDisplayRange& value) { SetRange(value); return *this;}

    /**
     * <p>The arc axis range of a <code>GaugeChartVisual</code>.</p>
     */
    inline ArcAxisConfiguration& WithRange(ArcAxisDisplayRange&& value) { SetRange(std::move(value)); return *this;}


    /**
     * <p>The reserved range of the arc axis.</p>
     */
    inline int GetReserveRange() const{ return m_reserveRange; }

    /**
     * <p>The reserved range of the arc axis.</p>
     */
    inline bool ReserveRangeHasBeenSet() const { return m_reserveRangeHasBeenSet; }

    /**
     * <p>The reserved range of the arc axis.</p>
     */
    inline void SetReserveRange(int value) { m_reserveRangeHasBeenSet = true; m_reserveRange = value; }

    /**
     * <p>The reserved range of the arc axis.</p>
     */
    inline ArcAxisConfiguration& WithReserveRange(int value) { SetReserveRange(value); return *this;}

  private:

    ArcAxisDisplayRange m_range;
    bool m_rangeHasBeenSet = false;

    int m_reserveRange;
    bool m_reserveRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
