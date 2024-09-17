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
   * <p>The unaggregated field wells of a scatter plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScatterPlotUnaggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class ScatterPlotUnaggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells();
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline const Aws::Vector<DimensionField>& GetXAxis() const{ return m_xAxis; }
    inline bool XAxisHasBeenSet() const { return m_xAxisHasBeenSet; }
    inline void SetXAxis(const Aws::Vector<DimensionField>& value) { m_xAxisHasBeenSet = true; m_xAxis = value; }
    inline void SetXAxis(Aws::Vector<DimensionField>&& value) { m_xAxisHasBeenSet = true; m_xAxis = std::move(value); }
    inline ScatterPlotUnaggregatedFieldWells& WithXAxis(const Aws::Vector<DimensionField>& value) { SetXAxis(value); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& WithXAxis(Aws::Vector<DimensionField>&& value) { SetXAxis(std::move(value)); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& AddXAxis(const DimensionField& value) { m_xAxisHasBeenSet = true; m_xAxis.push_back(value); return *this; }
    inline ScatterPlotUnaggregatedFieldWells& AddXAxis(DimensionField&& value) { m_xAxisHasBeenSet = true; m_xAxis.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline const Aws::Vector<DimensionField>& GetYAxis() const{ return m_yAxis; }
    inline bool YAxisHasBeenSet() const { return m_yAxisHasBeenSet; }
    inline void SetYAxis(const Aws::Vector<DimensionField>& value) { m_yAxisHasBeenSet = true; m_yAxis = value; }
    inline void SetYAxis(Aws::Vector<DimensionField>&& value) { m_yAxisHasBeenSet = true; m_yAxis = std::move(value); }
    inline ScatterPlotUnaggregatedFieldWells& WithYAxis(const Aws::Vector<DimensionField>& value) { SetYAxis(value); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& WithYAxis(Aws::Vector<DimensionField>&& value) { SetYAxis(std::move(value)); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& AddYAxis(const DimensionField& value) { m_yAxisHasBeenSet = true; m_yAxis.push_back(value); return *this; }
    inline ScatterPlotUnaggregatedFieldWells& AddYAxis(DimensionField&& value) { m_yAxisHasBeenSet = true; m_yAxis.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(const Aws::Vector<MeasureField>& value) { m_sizeHasBeenSet = true; m_size = value; }
    inline void SetSize(Aws::Vector<MeasureField>&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }
    inline ScatterPlotUnaggregatedFieldWells& WithSize(const Aws::Vector<MeasureField>& value) { SetSize(value); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& WithSize(Aws::Vector<MeasureField>&& value) { SetSize(std::move(value)); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& AddSize(const MeasureField& value) { m_sizeHasBeenSet = true; m_size.push_back(value); return *this; }
    inline ScatterPlotUnaggregatedFieldWells& AddSize(MeasureField&& value) { m_sizeHasBeenSet = true; m_size.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::Vector<DimensionField>& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::Vector<DimensionField>&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline ScatterPlotUnaggregatedFieldWells& WithCategory(const Aws::Vector<DimensionField>& value) { SetCategory(value); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& WithCategory(Aws::Vector<DimensionField>&& value) { SetCategory(std::move(value)); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& AddCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }
    inline ScatterPlotUnaggregatedFieldWells& AddCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label field well of a scatter plot.</p>
     */
    inline const Aws::Vector<DimensionField>& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::Vector<DimensionField>& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::Vector<DimensionField>&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline ScatterPlotUnaggregatedFieldWells& WithLabel(const Aws::Vector<DimensionField>& value) { SetLabel(value); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& WithLabel(Aws::Vector<DimensionField>&& value) { SetLabel(std::move(value)); return *this;}
    inline ScatterPlotUnaggregatedFieldWells& AddLabel(const DimensionField& value) { m_labelHasBeenSet = true; m_label.push_back(value); return *this; }
    inline ScatterPlotUnaggregatedFieldWells& AddLabel(DimensionField&& value) { m_labelHasBeenSet = true; m_label.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_xAxis;
    bool m_xAxisHasBeenSet = false;

    Aws::Vector<DimensionField> m_yAxis;
    bool m_yAxisHasBeenSet = false;

    Aws::Vector<MeasureField> m_size;
    bool m_sizeHasBeenSet = false;

    Aws::Vector<DimensionField> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<DimensionField> m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
