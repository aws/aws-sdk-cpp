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
    AWS_QUICKSIGHT_API WaterfallChartAggregatedFieldWells();
    AWS_QUICKSIGHT_API WaterfallChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category field wells of a waterfall visual.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<DimensionField>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<DimensionField>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline WaterfallChartAggregatedFieldWells& WithCategories(const Aws::Vector<DimensionField>& value) { SetCategories(value); return *this;}
    inline WaterfallChartAggregatedFieldWells& WithCategories(Aws::Vector<DimensionField>&& value) { SetCategories(std::move(value)); return *this;}
    inline WaterfallChartAggregatedFieldWells& AddCategories(const DimensionField& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline WaterfallChartAggregatedFieldWells& AddCategories(DimensionField&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value field wells of a waterfall visual.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline WaterfallChartAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}
    inline WaterfallChartAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}
    inline WaterfallChartAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline WaterfallChartAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The breakdown field wells of a waterfall visual.</p>
     */
    inline const Aws::Vector<DimensionField>& GetBreakdowns() const{ return m_breakdowns; }
    inline bool BreakdownsHasBeenSet() const { return m_breakdownsHasBeenSet; }
    inline void SetBreakdowns(const Aws::Vector<DimensionField>& value) { m_breakdownsHasBeenSet = true; m_breakdowns = value; }
    inline void SetBreakdowns(Aws::Vector<DimensionField>&& value) { m_breakdownsHasBeenSet = true; m_breakdowns = std::move(value); }
    inline WaterfallChartAggregatedFieldWells& WithBreakdowns(const Aws::Vector<DimensionField>& value) { SetBreakdowns(value); return *this;}
    inline WaterfallChartAggregatedFieldWells& WithBreakdowns(Aws::Vector<DimensionField>&& value) { SetBreakdowns(std::move(value)); return *this;}
    inline WaterfallChartAggregatedFieldWells& AddBreakdowns(const DimensionField& value) { m_breakdownsHasBeenSet = true; m_breakdowns.push_back(value); return *this; }
    inline WaterfallChartAggregatedFieldWells& AddBreakdowns(DimensionField&& value) { m_breakdownsHasBeenSet = true; m_breakdowns.push_back(std::move(value)); return *this; }
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
