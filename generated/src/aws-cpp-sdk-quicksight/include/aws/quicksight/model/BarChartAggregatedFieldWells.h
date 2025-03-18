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
   * <p>The aggregated field wells of a bar chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class BarChartAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API BarChartAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API BarChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    BarChartAggregatedFieldWells& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    template<typename CategoryT = DimensionField>
    BarChartAggregatedFieldWells& AddCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category.emplace_back(std::forward<CategoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    BarChartAggregatedFieldWells& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = MeasureField>
    BarChartAggregatedFieldWells& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColors() const { return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    template<typename ColorsT = Aws::Vector<DimensionField>>
    void SetColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors = std::forward<ColorsT>(value); }
    template<typename ColorsT = Aws::Vector<DimensionField>>
    BarChartAggregatedFieldWells& WithColors(ColorsT&& value) { SetColors(std::forward<ColorsT>(value)); return *this;}
    template<typename ColorsT = DimensionField>
    BarChartAggregatedFieldWells& AddColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors.emplace_back(std::forward<ColorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetSmallMultiples() const { return m_smallMultiples; }
    inline bool SmallMultiplesHasBeenSet() const { return m_smallMultiplesHasBeenSet; }
    template<typename SmallMultiplesT = Aws::Vector<DimensionField>>
    void SetSmallMultiples(SmallMultiplesT&& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples = std::forward<SmallMultiplesT>(value); }
    template<typename SmallMultiplesT = Aws::Vector<DimensionField>>
    BarChartAggregatedFieldWells& WithSmallMultiples(SmallMultiplesT&& value) { SetSmallMultiples(std::forward<SmallMultiplesT>(value)); return *this;}
    template<typename SmallMultiplesT = DimensionField>
    BarChartAggregatedFieldWells& AddSmallMultiples(SmallMultiplesT&& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples.emplace_back(std::forward<SmallMultiplesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<DimensionField> m_colors;
    bool m_colorsHasBeenSet = false;

    Aws::Vector<DimensionField> m_smallMultiples;
    bool m_smallMultiplesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
