/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/HeatMapAggregatedFieldWells.h>
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
   * <p>The field well configuration of a heat map.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HeatMapFieldWells">AWS
   * API Reference</a></p>
   */
  class HeatMapFieldWells
  {
  public:
    AWS_QUICKSIGHT_API HeatMapFieldWells();
    AWS_QUICKSIGHT_API HeatMapFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeatMapFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field wells of a heat map.</p>
     */
    inline const HeatMapAggregatedFieldWells& GetHeatMapAggregatedFieldWells() const{ return m_heatMapAggregatedFieldWells; }

    /**
     * <p>The aggregated field wells of a heat map.</p>
     */
    inline bool HeatMapAggregatedFieldWellsHasBeenSet() const { return m_heatMapAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field wells of a heat map.</p>
     */
    inline void SetHeatMapAggregatedFieldWells(const HeatMapAggregatedFieldWells& value) { m_heatMapAggregatedFieldWellsHasBeenSet = true; m_heatMapAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field wells of a heat map.</p>
     */
    inline void SetHeatMapAggregatedFieldWells(HeatMapAggregatedFieldWells&& value) { m_heatMapAggregatedFieldWellsHasBeenSet = true; m_heatMapAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field wells of a heat map.</p>
     */
    inline HeatMapFieldWells& WithHeatMapAggregatedFieldWells(const HeatMapAggregatedFieldWells& value) { SetHeatMapAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field wells of a heat map.</p>
     */
    inline HeatMapFieldWells& WithHeatMapAggregatedFieldWells(HeatMapAggregatedFieldWells&& value) { SetHeatMapAggregatedFieldWells(std::move(value)); return *this;}

  private:

    HeatMapAggregatedFieldWells m_heatMapAggregatedFieldWells;
    bool m_heatMapAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
