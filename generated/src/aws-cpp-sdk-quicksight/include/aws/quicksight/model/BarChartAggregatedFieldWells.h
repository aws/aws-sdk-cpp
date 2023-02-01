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
    AWS_QUICKSIGHT_API BarChartAggregatedFieldWells();
    AWS_QUICKSIGHT_API BarChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const{ return m_category; }

    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline void SetCategory(const Aws::Vector<DimensionField>& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline void SetCategory(Aws::Vector<DimensionField>&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& WithCategory(const Aws::Vector<DimensionField>& value) { SetCategory(value); return *this;}

    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& WithCategory(Aws::Vector<DimensionField>&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& AddCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }

    /**
     * <p>The category (y-axis) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& AddCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category.push_back(std::move(value)); return *this; }


    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline BarChartAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline BarChartAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline BarChartAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value field wells of a bar chart. Values are aggregated by category.</p>
     */
    inline BarChartAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }


    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColors() const{ return m_colors; }

    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }

    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline void SetColors(const Aws::Vector<DimensionField>& value) { m_colorsHasBeenSet = true; m_colors = value; }

    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline void SetColors(Aws::Vector<DimensionField>&& value) { m_colorsHasBeenSet = true; m_colors = std::move(value); }

    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& WithColors(const Aws::Vector<DimensionField>& value) { SetColors(value); return *this;}

    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& WithColors(Aws::Vector<DimensionField>&& value) { SetColors(std::move(value)); return *this;}

    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& AddColors(const DimensionField& value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }

    /**
     * <p>The color (group/color) field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& AddColors(DimensionField&& value) { m_colorsHasBeenSet = true; m_colors.push_back(std::move(value)); return *this; }


    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetSmallMultiples() const{ return m_smallMultiples; }

    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline bool SmallMultiplesHasBeenSet() const { return m_smallMultiplesHasBeenSet; }

    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline void SetSmallMultiples(const Aws::Vector<DimensionField>& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples = value; }

    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline void SetSmallMultiples(Aws::Vector<DimensionField>&& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples = std::move(value); }

    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& WithSmallMultiples(const Aws::Vector<DimensionField>& value) { SetSmallMultiples(value); return *this;}

    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& WithSmallMultiples(Aws::Vector<DimensionField>&& value) { SetSmallMultiples(std::move(value)); return *this;}

    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& AddSmallMultiples(const DimensionField& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples.push_back(value); return *this; }

    /**
     * <p>The small multiples field well of a bar chart.</p>
     */
    inline BarChartAggregatedFieldWells& AddSmallMultiples(DimensionField&& value) { m_smallMultiplesHasBeenSet = true; m_smallMultiples.push_back(std::move(value)); return *this; }

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
