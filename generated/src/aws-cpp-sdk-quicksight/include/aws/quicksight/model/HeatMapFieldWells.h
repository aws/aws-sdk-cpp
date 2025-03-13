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
    AWS_QUICKSIGHT_API HeatMapFieldWells() = default;
    AWS_QUICKSIGHT_API HeatMapFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeatMapFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated field wells of a heat map.</p>
     */
    inline const HeatMapAggregatedFieldWells& GetHeatMapAggregatedFieldWells() const { return m_heatMapAggregatedFieldWells; }
    inline bool HeatMapAggregatedFieldWellsHasBeenSet() const { return m_heatMapAggregatedFieldWellsHasBeenSet; }
    template<typename HeatMapAggregatedFieldWellsT = HeatMapAggregatedFieldWells>
    void SetHeatMapAggregatedFieldWells(HeatMapAggregatedFieldWellsT&& value) { m_heatMapAggregatedFieldWellsHasBeenSet = true; m_heatMapAggregatedFieldWells = std::forward<HeatMapAggregatedFieldWellsT>(value); }
    template<typename HeatMapAggregatedFieldWellsT = HeatMapAggregatedFieldWells>
    HeatMapFieldWells& WithHeatMapAggregatedFieldWells(HeatMapAggregatedFieldWellsT&& value) { SetHeatMapAggregatedFieldWells(std::forward<HeatMapAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    HeatMapAggregatedFieldWells m_heatMapAggregatedFieldWells;
    bool m_heatMapAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
