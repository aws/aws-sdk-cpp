/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ComboChartAggregatedFieldWells.h>
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
   * <p>The field wells of the visual.</p> <p>This is a union type structure. For
   * this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComboChartFieldWells">AWS
   * API Reference</a></p>
   */
  class ComboChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API ComboChartFieldWells() = default;
    AWS_QUICKSIGHT_API ComboChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComboChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated field wells of a combo chart. Combo charts only have
     * aggregated field wells. Columns in a combo chart are aggregated by category.</p>
     */
    inline const ComboChartAggregatedFieldWells& GetComboChartAggregatedFieldWells() const { return m_comboChartAggregatedFieldWells; }
    inline bool ComboChartAggregatedFieldWellsHasBeenSet() const { return m_comboChartAggregatedFieldWellsHasBeenSet; }
    template<typename ComboChartAggregatedFieldWellsT = ComboChartAggregatedFieldWells>
    void SetComboChartAggregatedFieldWells(ComboChartAggregatedFieldWellsT&& value) { m_comboChartAggregatedFieldWellsHasBeenSet = true; m_comboChartAggregatedFieldWells = std::forward<ComboChartAggregatedFieldWellsT>(value); }
    template<typename ComboChartAggregatedFieldWellsT = ComboChartAggregatedFieldWells>
    ComboChartFieldWells& WithComboChartAggregatedFieldWells(ComboChartAggregatedFieldWellsT&& value) { SetComboChartAggregatedFieldWells(std::forward<ComboChartAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    ComboChartAggregatedFieldWells m_comboChartAggregatedFieldWells;
    bool m_comboChartAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
