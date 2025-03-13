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
   * <p>The field well configuration of a waterfall visual.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class WaterfallChartAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API WaterfallChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category field wells of a waterfall visual.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<DimensionField>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<DimensionField>>
    WaterfallChartAggregatedFieldWells& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = DimensionField>
    WaterfallChartAggregatedFieldWells& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value field wells of a waterfall visual.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    WaterfallChartAggregatedFieldWells& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = MeasureField>
    WaterfallChartAggregatedFieldWells& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The breakdown field wells of a waterfall visual.</p>
     */
    inline const Aws::Vector<DimensionField>& GetBreakdowns() const { return m_breakdowns; }
    inline bool BreakdownsHasBeenSet() const { return m_breakdownsHasBeenSet; }
    template<typename BreakdownsT = Aws::Vector<DimensionField>>
    void SetBreakdowns(BreakdownsT&& value) { m_breakdownsHasBeenSet = true; m_breakdowns = std::forward<BreakdownsT>(value); }
    template<typename BreakdownsT = Aws::Vector<DimensionField>>
    WaterfallChartAggregatedFieldWells& WithBreakdowns(BreakdownsT&& value) { SetBreakdowns(std::forward<BreakdownsT>(value)); return *this;}
    template<typename BreakdownsT = DimensionField>
    WaterfallChartAggregatedFieldWells& AddBreakdowns(BreakdownsT&& value) { m_breakdownsHasBeenSet = true; m_breakdowns.emplace_back(std::forward<BreakdownsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<DimensionField> m_breakdowns;
    bool m_breakdownsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
