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
    AWS_QUICKSIGHT_API RadarChartAggregatedFieldWells();
    AWS_QUICKSIGHT_API RadarChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const{ return m_category; }

    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline void SetCategory(const Aws::Vector<DimensionField>& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline void SetCategory(Aws::Vector<DimensionField>&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline RadarChartAggregatedFieldWells& WithCategory(const Aws::Vector<DimensionField>& value) { SetCategory(value); return *this;}

    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline RadarChartAggregatedFieldWells& WithCategory(Aws::Vector<DimensionField>&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline RadarChartAggregatedFieldWells& AddCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }

    /**
     * <p>The aggregated field well categories of a radar chart.</p>
     */
    inline RadarChartAggregatedFieldWells& AddCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category.push_back(std::move(value)); return *this; }


    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColor() const{ return m_color; }

    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }

    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline void SetColor(const Aws::Vector<DimensionField>& value) { m_colorHasBeenSet = true; m_color = value; }

    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline void SetColor(Aws::Vector<DimensionField>&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }

    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& WithColor(const Aws::Vector<DimensionField>& value) { SetColor(value); return *this;}

    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& WithColor(Aws::Vector<DimensionField>&& value) { SetColor(std::move(value)); return *this;}

    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& AddColor(const DimensionField& value) { m_colorHasBeenSet = true; m_color.push_back(value); return *this; }

    /**
     * <p>The color that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& AddColor(DimensionField&& value) { m_colorHasBeenSet = true; m_color.push_back(std::move(value)); return *this; }


    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values that are assigned to the aggregated field wells of a radar
     * chart.</p>
     */
    inline RadarChartAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

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
