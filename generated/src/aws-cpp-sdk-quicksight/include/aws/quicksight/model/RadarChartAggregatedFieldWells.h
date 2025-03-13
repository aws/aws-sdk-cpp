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
   * <p>The aggregated field well configuration of a
   * <code>RadarChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RadarChartAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class RadarChartAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API RadarChartAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API RadarChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    RadarChartAggregatedFieldWells& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    template<typename CategoryT = DimensionField>
    RadarChartAggregatedFieldWells& AddCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category.emplace_back(std::forward<CategoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::Vector<DimensionField>>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::Vector<DimensionField>>
    RadarChartAggregatedFieldWells& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    template<typename ColorT = DimensionField>
    RadarChartAggregatedFieldWells& AddColor(ColorT&& value) { m_colorHasBeenSet = true; m_color.emplace_back(std::forward<ColorT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    RadarChartAggregatedFieldWells& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = MeasureField>
    RadarChartAggregatedFieldWells& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<DimensionField> m_color;
    bool m_colorHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
