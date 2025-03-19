/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The aggregated field wells of a combo chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComboChartAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class ComboChartAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API ComboChartAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API ComboChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComboChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated category field wells of a combo chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    ComboChartAggregatedFieldWells& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    template<typename CategoryT = DimensionField>
    ComboChartAggregatedFieldWells& AddCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category.emplace_back(std::forward<CategoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregated <code>BarValues</code> field well of a combo chart.</p>
     */
    inline const Aws::Vector<MeasureField>& GetBarValues() const { return m_barValues; }
    inline bool BarValuesHasBeenSet() const { return m_barValuesHasBeenSet; }
    template<typename BarValuesT = Aws::Vector<MeasureField>>
    void SetBarValues(BarValuesT&& value) { m_barValuesHasBeenSet = true; m_barValues = std::forward<BarValuesT>(value); }
    template<typename BarValuesT = Aws::Vector<MeasureField>>
    ComboChartAggregatedFieldWells& WithBarValues(BarValuesT&& value) { SetBarValues(std::forward<BarValuesT>(value)); return *this;}
    template<typename BarValuesT = MeasureField>
    ComboChartAggregatedFieldWells& AddBarValues(BarValuesT&& value) { m_barValuesHasBeenSet = true; m_barValues.emplace_back(std::forward<BarValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregated colors field well of a combo chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColors() const { return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    template<typename ColorsT = Aws::Vector<DimensionField>>
    void SetColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors = std::forward<ColorsT>(value); }
    template<typename ColorsT = Aws::Vector<DimensionField>>
    ComboChartAggregatedFieldWells& WithColors(ColorsT&& value) { SetColors(std::forward<ColorsT>(value)); return *this;}
    template<typename ColorsT = DimensionField>
    ComboChartAggregatedFieldWells& AddColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors.emplace_back(std::forward<ColorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregated <code>LineValues</code> field well of a combo chart.</p>
     */
    inline const Aws::Vector<MeasureField>& GetLineValues() const { return m_lineValues; }
    inline bool LineValuesHasBeenSet() const { return m_lineValuesHasBeenSet; }
    template<typename LineValuesT = Aws::Vector<MeasureField>>
    void SetLineValues(LineValuesT&& value) { m_lineValuesHasBeenSet = true; m_lineValues = std::forward<LineValuesT>(value); }
    template<typename LineValuesT = Aws::Vector<MeasureField>>
    ComboChartAggregatedFieldWells& WithLineValues(LineValuesT&& value) { SetLineValues(std::forward<LineValuesT>(value)); return *this;}
    template<typename LineValuesT = MeasureField>
    ComboChartAggregatedFieldWells& AddLineValues(LineValuesT&& value) { m_lineValuesHasBeenSet = true; m_lineValues.emplace_back(std::forward<LineValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<MeasureField> m_barValues;
    bool m_barValuesHasBeenSet = false;

    Aws::Vector<DimensionField> m_colors;
    bool m_colorsHasBeenSet = false;

    Aws::Vector<MeasureField> m_lineValues;
    bool m_lineValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
