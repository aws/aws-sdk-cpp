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


    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline const HistogramFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline void SetFieldWells(const HistogramFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline void SetFieldWells(HistogramFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithFieldWells(const HistogramFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithFieldWells(HistogramFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const{ return m_xAxisDisplayOptions; }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline void SetXAxisDisplayOptions(const AxisDisplayOptions& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = value; }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline void SetXAxisDisplayOptions(AxisDisplayOptions&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline HistogramConfiguration& WithXAxisDisplayOptions(const AxisDisplayOptions& value) { SetXAxisDisplayOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline HistogramConfiguration& WithXAxisDisplayOptions(AxisDisplayOptions&& value) { SetXAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const{ return m_xAxisLabelOptions; }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline void SetXAxisLabelOptions(const ChartAxisLabelOptions& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = value; }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline void SetXAxisLabelOptions(ChartAxisLabelOptions&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline HistogramConfiguration& WithXAxisLabelOptions(const ChartAxisLabelOptions& value) { SetXAxisLabelOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline HistogramConfiguration& WithXAxisLabelOptions(ChartAxisLabelOptions&& value) { SetXAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline const AxisDisplayOptions& GetYAxisDisplayOptions() const{ return m_yAxisDisplayOptions; }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline bool YAxisDisplayOptionsHasBeenSet() const { return m_yAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline void SetYAxisDisplayOptions(const AxisDisplayOptions& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = value; }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline void SetYAxisDisplayOptions(AxisDisplayOptions&& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline HistogramConfiguration& WithYAxisDisplayOptions(const AxisDisplayOptions& value) { SetYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline HistogramConfiguration& WithYAxisDisplayOptions(AxisDisplayOptions&& value) { SetYAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline const HistogramBinOptions& GetBinOptions() const{ return m_binOptions; }

    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline bool BinOptionsHasBeenSet() const { return m_binOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline void SetBinOptions(const HistogramBinOptions& value) { m_binOptionsHasBeenSet = true; m_binOptions = value; }

    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline void SetBinOptions(HistogramBinOptions&& value) { m_binOptionsHasBeenSet = true; m_binOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline HistogramConfiguration& WithBinOptions(const HistogramBinOptions& value) { SetBinOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline HistogramConfiguration& WithBinOptions(HistogramBinOptions&& value) { SetBinOptions(std::move(value)); return *this;}


    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }

    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }

    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }

    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }

    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline HistogramConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
