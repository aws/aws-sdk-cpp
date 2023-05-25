/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/DimensionField.h>
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
   * <p>The aggregated field well of a scatter plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScatterPlotCategoricallyAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class ScatterPlotCategoricallyAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API ScatterPlotCategoricallyAggregatedFieldWells();
    AWS_QUICKSIGHT_API ScatterPlotCategoricallyAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotCategoricallyAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline const Aws::Vector<MeasureField>& GetXAxis() const{ return m_xAxis; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline bool XAxisHasBeenSet() const { return m_xAxisHasBeenSet; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline void SetXAxis(const Aws::Vector<MeasureField>& value) { m_xAxisHasBeenSet = true; m_xAxis = value; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline void SetXAxis(Aws::Vector<MeasureField>&& value) { m_xAxisHasBeenSet = true; m_xAxis = std::move(value); }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithXAxis(const Aws::Vector<MeasureField>& value) { SetXAxis(value); return *this;}

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithXAxis(Aws::Vector<MeasureField>&& value) { SetXAxis(std::move(value)); return *this;}

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddXAxis(const MeasureField& value) { m_xAxisHasBeenSet = true; m_xAxis.push_back(value); return *this; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddXAxis(MeasureField&& value) { m_xAxisHasBeenSet = true; m_xAxis.push_back(std::move(value)); return *this; }


    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline const Aws::Vector<MeasureField>& GetYAxis() const{ return m_yAxis; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline bool YAxisHasBeenSet() const { return m_yAxisHasBeenSet; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline void SetYAxis(const Aws::Vector<MeasureField>& value) { m_yAxisHasBeenSet = true; m_yAxis = value; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline void SetYAxis(Aws::Vector<MeasureField>&& value) { m_yAxisHasBeenSet = true; m_yAxis = std::move(value); }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithYAxis(const Aws::Vector<MeasureField>& value) { SetYAxis(value); return *this;}

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithYAxis(Aws::Vector<MeasureField>&& value) { SetYAxis(std::move(value)); return *this;}

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddYAxis(const MeasureField& value) { m_yAxisHasBeenSet = true; m_yAxis.push_back(value); return *this; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is aggregated by
     * category.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddYAxis(MeasureField&& value) { m_yAxisHasBeenSet = true; m_yAxis.push_back(std::move(value)); return *this; }


    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const{ return m_category; }

    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline void SetCategory(const Aws::Vector<DimensionField>& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline void SetCategory(Aws::Vector<DimensionField>&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithCategory(const Aws::Vector<DimensionField>& value) { SetCategory(value); return *this;}

    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithCategory(Aws::Vector<DimensionField>&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }

    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category.push_back(std::move(value)); return *this; }


    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSize() const{ return m_size; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline void SetSize(const Aws::Vector<MeasureField>& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline void SetSize(Aws::Vector<MeasureField>&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithSize(const Aws::Vector<MeasureField>& value) { SetSize(value); return *this;}

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& WithSize(Aws::Vector<MeasureField>&& value) { SetSize(std::move(value)); return *this;}

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddSize(const MeasureField& value) { m_sizeHasBeenSet = true; m_size.push_back(value); return *this; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotCategoricallyAggregatedFieldWells& AddSize(MeasureField&& value) { m_sizeHasBeenSet = true; m_size.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MeasureField> m_xAxis;
    bool m_xAxisHasBeenSet = false;

    Aws::Vector<MeasureField> m_yAxis;
    bool m_yAxisHasBeenSet = false;

    Aws::Vector<DimensionField> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<MeasureField> m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
