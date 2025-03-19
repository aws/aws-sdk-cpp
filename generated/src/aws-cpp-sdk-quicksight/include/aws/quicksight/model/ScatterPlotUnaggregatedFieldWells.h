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
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline const Aws::Vector<DimensionField>& GetXAxis() const { return m_xAxis; }
    inline bool XAxisHasBeenSet() const { return m_xAxisHasBeenSet; }
    template<typename XAxisT = Aws::Vector<DimensionField>>
    void SetXAxis(XAxisT&& value) { m_xAxisHasBeenSet = true; m_xAxis = std::forward<XAxisT>(value); }
    template<typename XAxisT = Aws::Vector<DimensionField>>
    ScatterPlotUnaggregatedFieldWells& WithXAxis(XAxisT&& value) { SetXAxis(std::forward<XAxisT>(value)); return *this;}
    template<typename XAxisT = DimensionField>
    ScatterPlotUnaggregatedFieldWells& AddXAxis(XAxisT&& value) { m_xAxisHasBeenSet = true; m_xAxis.emplace_back(std::forward<XAxisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline const Aws::Vector<DimensionField>& GetYAxis() const { return m_yAxis; }
    inline bool YAxisHasBeenSet() const { return m_yAxisHasBeenSet; }
    template<typename YAxisT = Aws::Vector<DimensionField>>
    void SetYAxis(YAxisT&& value) { m_yAxisHasBeenSet = true; m_yAxis = std::forward<YAxisT>(value); }
    template<typename YAxisT = Aws::Vector<DimensionField>>
    ScatterPlotUnaggregatedFieldWells& WithYAxis(YAxisT&& value) { SetYAxis(std::forward<YAxisT>(value)); return *this;}
    template<typename YAxisT = DimensionField>
    ScatterPlotUnaggregatedFieldWells& AddYAxis(YAxisT&& value) { m_yAxisHasBeenSet = true; m_yAxis.emplace_back(std::forward<YAxisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    template<typename SizeT = Aws::Vector<MeasureField>>
    void SetSize(SizeT&& value) { m_sizeHasBeenSet = true; m_size = std::forward<SizeT>(value); }
    template<typename SizeT = Aws::Vector<MeasureField>>
    ScatterPlotUnaggregatedFieldWells& WithSize(SizeT&& value) { SetSize(std::forward<SizeT>(value)); return *this;}
    template<typename SizeT = MeasureField>
    ScatterPlotUnaggregatedFieldWells& AddSize(SizeT&& value) { m_sizeHasBeenSet = true; m_size.emplace_back(std::forward<SizeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category field well of a scatter plot.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::Vector<DimensionField>>
    ScatterPlotUnaggregatedFieldWells& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    template<typename CategoryT = DimensionField>
    ScatterPlotUnaggregatedFieldWells& AddCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category.emplace_back(std::forward<CategoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label field well of a scatter plot.</p>
     */
    inline const Aws::Vector<DimensionField>& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::Vector<DimensionField>>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::Vector<DimensionField>>
    ScatterPlotUnaggregatedFieldWells& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    template<typename LabelT = DimensionField>
    ScatterPlotUnaggregatedFieldWells& AddLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label.emplace_back(std::forward<LabelT>(value)); return *this; }
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
