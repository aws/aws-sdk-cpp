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
    AWS_QUICKSIGHT_API ComboChartAggregatedFieldWells();
    AWS_QUICKSIGHT_API ComboChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComboChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated category field wells of a combo chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::Vector<DimensionField>& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::Vector<DimensionField>&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline ComboChartAggregatedFieldWells& WithCategory(const Aws::Vector<DimensionField>& value) { SetCategory(value); return *this;}
    inline ComboChartAggregatedFieldWells& WithCategory(Aws::Vector<DimensionField>&& value) { SetCategory(std::move(value)); return *this;}
    inline ComboChartAggregatedFieldWells& AddCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }
    inline ComboChartAggregatedFieldWells& AddCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregated <code>BarValues</code> field well of a combo chart.</p>
     */
    inline const Aws::Vector<MeasureField>& GetBarValues() const{ return m_barValues; }
    inline bool BarValuesHasBeenSet() const { return m_barValuesHasBeenSet; }
    inline void SetBarValues(const Aws::Vector<MeasureField>& value) { m_barValuesHasBeenSet = true; m_barValues = value; }
    inline void SetBarValues(Aws::Vector<MeasureField>&& value) { m_barValuesHasBeenSet = true; m_barValues = std::move(value); }
    inline ComboChartAggregatedFieldWells& WithBarValues(const Aws::Vector<MeasureField>& value) { SetBarValues(value); return *this;}
    inline ComboChartAggregatedFieldWells& WithBarValues(Aws::Vector<MeasureField>&& value) { SetBarValues(std::move(value)); return *this;}
    inline ComboChartAggregatedFieldWells& AddBarValues(const MeasureField& value) { m_barValuesHasBeenSet = true; m_barValues.push_back(value); return *this; }
    inline ComboChartAggregatedFieldWells& AddBarValues(MeasureField&& value) { m_barValuesHasBeenSet = true; m_barValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregated colors field well of a combo chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColors() const{ return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    inline void SetColors(const Aws::Vector<DimensionField>& value) { m_colorsHasBeenSet = true; m_colors = value; }
    inline void SetColors(Aws::Vector<DimensionField>&& value) { m_colorsHasBeenSet = true; m_colors = std::move(value); }
    inline ComboChartAggregatedFieldWells& WithColors(const Aws::Vector<DimensionField>& value) { SetColors(value); return *this;}
    inline ComboChartAggregatedFieldWells& WithColors(Aws::Vector<DimensionField>&& value) { SetColors(std::move(value)); return *this;}
    inline ComboChartAggregatedFieldWells& AddColors(const DimensionField& value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }
    inline ComboChartAggregatedFieldWells& AddColors(DimensionField&& value) { m_colorsHasBeenSet = true; m_colors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregated <code>LineValues</code> field well of a combo chart.</p>
     */
    inline const Aws::Vector<MeasureField>& GetLineValues() const{ return m_lineValues; }
    inline bool LineValuesHasBeenSet() const { return m_lineValuesHasBeenSet; }
    inline void SetLineValues(const Aws::Vector<MeasureField>& value) { m_lineValuesHasBeenSet = true; m_lineValues = value; }
    inline void SetLineValues(Aws::Vector<MeasureField>&& value) { m_lineValuesHasBeenSet = true; m_lineValues = std::move(value); }
    inline ComboChartAggregatedFieldWells& WithLineValues(const Aws::Vector<MeasureField>& value) { SetLineValues(value); return *this;}
    inline ComboChartAggregatedFieldWells& WithLineValues(Aws::Vector<MeasureField>&& value) { SetLineValues(std::move(value)); return *this;}
    inline ComboChartAggregatedFieldWells& AddLineValues(const MeasureField& value) { m_lineValuesHasBeenSet = true; m_lineValues.push_back(value); return *this; }
    inline ComboChartAggregatedFieldWells& AddLineValues(MeasureField&& value) { m_lineValuesHasBeenSet = true; m_lineValues.push_back(std::move(value)); return *this; }
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
