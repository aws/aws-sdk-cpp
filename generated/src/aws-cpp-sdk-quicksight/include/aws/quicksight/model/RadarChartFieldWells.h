/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RadarChartAggregatedFieldWells.h>
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
   * <p>The field wells of a radar chart visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RadarChartFieldWells">AWS
   * API Reference</a></p>
   */
  class RadarChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API RadarChartFieldWells();
    AWS_QUICKSIGHT_API RadarChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field wells of a radar chart visual.</p>
     */
    inline const RadarChartAggregatedFieldWells& GetRadarChartAggregatedFieldWells() const{ return m_radarChartAggregatedFieldWells; }

    /**
     * <p>The aggregated field wells of a radar chart visual.</p>
     */
    inline bool RadarChartAggregatedFieldWellsHasBeenSet() const { return m_radarChartAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field wells of a radar chart visual.</p>
     */
    inline void SetRadarChartAggregatedFieldWells(const RadarChartAggregatedFieldWells& value) { m_radarChartAggregatedFieldWellsHasBeenSet = true; m_radarChartAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field wells of a radar chart visual.</p>
     */
    inline void SetRadarChartAggregatedFieldWells(RadarChartAggregatedFieldWells&& value) { m_radarChartAggregatedFieldWellsHasBeenSet = true; m_radarChartAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field wells of a radar chart visual.</p>
     */
    inline RadarChartFieldWells& WithRadarChartAggregatedFieldWells(const RadarChartAggregatedFieldWells& value) { SetRadarChartAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field wells of a radar chart visual.</p>
     */
    inline RadarChartFieldWells& WithRadarChartAggregatedFieldWells(RadarChartAggregatedFieldWells&& value) { SetRadarChartAggregatedFieldWells(std::move(value)); return *this;}

  private:

    RadarChartAggregatedFieldWells m_radarChartAggregatedFieldWells;
    bool m_radarChartAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
