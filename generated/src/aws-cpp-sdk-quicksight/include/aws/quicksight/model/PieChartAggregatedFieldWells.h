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
   * <p>The field well configuration of a pie chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PieChartAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class PieChartAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API PieChartAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API PieChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PieChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category (group/color) field wells of a pie chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    PieChartAggregatedFieldWells& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    template<typename CategoryT = DimensionField>
    PieChartAggregatedFieldWells& AddCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category.emplace_back(std::forward<CategoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value field wells of a pie chart. Values are aggregated based on
     * categories.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    PieChartAggregatedFieldWells& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = MeasureField>
    PieChartAggregatedFieldWells& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The small multiples field well of a pie chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetSmallMultiples() const { return m_smallMultiples; }
    inline bool SmallMultiplesHasBeenSet() const { return m_smallMultiplesHasBeenSet; }
    template<typename SmallMultiplesT = Aws::Vector<DimensionField>>
    void SetSmallMultiples(SmallMultiplesT&& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples = std::forward<SmallMultiplesT>(value); }
    template<typename SmallMultiplesT = Aws::Vector<DimensionField>>
    PieChartAggregatedFieldWells& WithSmallMultiples(SmallMultiplesT&& value) { SetSmallMultiples(std::forward<SmallMultiplesT>(value)); return *this;}
    template<typename SmallMultiplesT = DimensionField>
    PieChartAggregatedFieldWells& AddSmallMultiples(SmallMultiplesT&& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples.emplace_back(std::forward<SmallMultiplesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<DimensionField> m_smallMultiples;
    bool m_smallMultiplesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
