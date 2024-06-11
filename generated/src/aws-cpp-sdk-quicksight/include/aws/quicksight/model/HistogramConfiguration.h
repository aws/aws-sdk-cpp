/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/HistogramFieldWells.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/HistogramBinOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
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
   * <p>The configuration for a <code>HistogramVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HistogramConfiguration">AWS
   * API Reference</a></p>
   */
  class HistogramConfiguration
  {
  public:
    AWS_QUICKSIGHT_API HistogramConfiguration();
    AWS_QUICKSIGHT_API HistogramConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline const HistogramFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const HistogramFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(HistogramFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline HistogramConfiguration& WithFieldWells(const HistogramFieldWells& value) { SetFieldWells(value); return *this;}
    inline HistogramConfiguration& WithFieldWells(HistogramFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const{ return m_xAxisDisplayOptions; }
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }
    inline void SetXAxisDisplayOptions(const AxisDisplayOptions& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = value; }
    inline void SetXAxisDisplayOptions(AxisDisplayOptions&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::move(value); }
    inline HistogramConfiguration& WithXAxisDisplayOptions(const AxisDisplayOptions& value) { SetXAxisDisplayOptions(value); return *this;}
    inline HistogramConfiguration& WithXAxisDisplayOptions(AxisDisplayOptions&& value) { SetXAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const{ return m_xAxisLabelOptions; }
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }
    inline void SetXAxisLabelOptions(const ChartAxisLabelOptions& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = value; }
    inline void SetXAxisLabelOptions(ChartAxisLabelOptions&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::move(value); }
    inline HistogramConfiguration& WithXAxisLabelOptions(const ChartAxisLabelOptions& value) { SetXAxisLabelOptions(value); return *this;}
    inline HistogramConfiguration& WithXAxisLabelOptions(ChartAxisLabelOptions&& value) { SetXAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline const AxisDisplayOptions& GetYAxisDisplayOptions() const{ return m_yAxisDisplayOptions; }
    inline bool YAxisDisplayOptionsHasBeenSet() const { return m_yAxisDisplayOptionsHasBeenSet; }
    inline void SetYAxisDisplayOptions(const AxisDisplayOptions& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = value; }
    inline void SetYAxisDisplayOptions(AxisDisplayOptions&& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = std::move(value); }
    inline HistogramConfiguration& WithYAxisDisplayOptions(const AxisDisplayOptions& value) { SetYAxisDisplayOptions(value); return *this;}
    inline HistogramConfiguration& WithYAxisDisplayOptions(AxisDisplayOptions&& value) { SetYAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline const HistogramBinOptions& GetBinOptions() const{ return m_binOptions; }
    inline bool BinOptionsHasBeenSet() const { return m_binOptionsHasBeenSet; }
    inline void SetBinOptions(const HistogramBinOptions& value) { m_binOptionsHasBeenSet = true; m_binOptions = value; }
    inline void SetBinOptions(HistogramBinOptions&& value) { m_binOptionsHasBeenSet = true; m_binOptions = std::move(value); }
    inline HistogramConfiguration& WithBinOptions(const HistogramBinOptions& value) { SetBinOptions(value); return *this;}
    inline HistogramConfiguration& WithBinOptions(HistogramBinOptions&& value) { SetBinOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }
    inline HistogramConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}
    inline HistogramConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }
    inline HistogramConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}
    inline HistogramConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }
    inline HistogramConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}
    inline HistogramConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline HistogramConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline HistogramConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}
  private:

    HistogramFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    AxisDisplayOptions m_xAxisDisplayOptions;
    bool m_xAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_xAxisLabelOptions;
    bool m_xAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_yAxisDisplayOptions;
    bool m_yAxisDisplayOptionsHasBeenSet = false;

    HistogramBinOptions m_binOptions;
    bool m_binOptionsHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
