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
    AWS_QUICKSIGHT_API HistogramConfiguration() = default;
    AWS_QUICKSIGHT_API HistogramConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline const HistogramFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = HistogramFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = HistogramFieldWells>
    HistogramConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const { return m_xAxisDisplayOptions; }
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }
    template<typename XAxisDisplayOptionsT = AxisDisplayOptions>
    void SetXAxisDisplayOptions(XAxisDisplayOptionsT&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::forward<XAxisDisplayOptionsT>(value); }
    template<typename XAxisDisplayOptionsT = AxisDisplayOptions>
    HistogramConfiguration& WithXAxisDisplayOptions(XAxisDisplayOptionsT&& value) { SetXAxisDisplayOptions(std::forward<XAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const { return m_xAxisLabelOptions; }
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }
    template<typename XAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetXAxisLabelOptions(XAxisLabelOptionsT&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::forward<XAxisLabelOptionsT>(value); }
    template<typename XAxisLabelOptionsT = ChartAxisLabelOptions>
    HistogramConfiguration& WithXAxisLabelOptions(XAxisLabelOptionsT&& value) { SetXAxisLabelOptions(std::forward<XAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline const AxisDisplayOptions& GetYAxisDisplayOptions() const { return m_yAxisDisplayOptions; }
    inline bool YAxisDisplayOptionsHasBeenSet() const { return m_yAxisDisplayOptionsHasBeenSet; }
    template<typename YAxisDisplayOptionsT = AxisDisplayOptions>
    void SetYAxisDisplayOptions(YAxisDisplayOptionsT&& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = std::forward<YAxisDisplayOptionsT>(value); }
    template<typename YAxisDisplayOptionsT = AxisDisplayOptions>
    HistogramConfiguration& WithYAxisDisplayOptions(YAxisDisplayOptionsT&& value) { SetYAxisDisplayOptions(std::forward<YAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of histogram bins.</p>
     */
    inline const HistogramBinOptions& GetBinOptions() const { return m_binOptions; }
    inline bool BinOptionsHasBeenSet() const { return m_binOptionsHasBeenSet; }
    template<typename BinOptionsT = HistogramBinOptions>
    void SetBinOptions(BinOptionsT&& value) { m_binOptionsHasBeenSet = true; m_binOptions = std::forward<BinOptionsT>(value); }
    template<typename BinOptionsT = HistogramBinOptions>
    HistogramConfiguration& WithBinOptions(BinOptionsT&& value) { SetBinOptions(std::forward<BinOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a histogram.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const { return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    template<typename DataLabelsT = DataLabelOptions>
    void SetDataLabels(DataLabelsT&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::forward<DataLabelsT>(value); }
    template<typename DataLabelsT = DataLabelOptions>
    HistogramConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip configuration of a histogram.</p>
     */
    inline const TooltipOptions& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = TooltipOptions>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = TooltipOptions>
    HistogramConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual palette configuration of a histogram.</p>
     */
    inline const VisualPalette& GetVisualPalette() const { return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    template<typename VisualPaletteT = VisualPalette>
    void SetVisualPalette(VisualPaletteT&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::forward<VisualPaletteT>(value); }
    template<typename VisualPaletteT = VisualPalette>
    HistogramConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = VisualInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = VisualInteractionOptions>
    HistogramConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
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
