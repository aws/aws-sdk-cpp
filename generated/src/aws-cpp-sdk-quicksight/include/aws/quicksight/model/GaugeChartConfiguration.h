/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GaugeChartFieldWells.h>
#include <aws/quicksight/model/GaugeChartOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/GaugeChartColorConfiguration.h>
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
   * <p>The configuration of a <code>GaugeChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartConfiguration">AWS
   * API Reference</a></p>
   */
  class GaugeChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartConfiguration() = default;
    AWS_QUICKSIGHT_API GaugeChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = GaugeChartFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = GaugeChartFieldWells>
    GaugeChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the
     * <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartOptions& GetGaugeChartOptions() const { return m_gaugeChartOptions; }
    inline bool GaugeChartOptionsHasBeenSet() const { return m_gaugeChartOptionsHasBeenSet; }
    template<typename GaugeChartOptionsT = GaugeChartOptions>
    void SetGaugeChartOptions(GaugeChartOptionsT&& value) { m_gaugeChartOptionsHasBeenSet = true; m_gaugeChartOptions = std::forward<GaugeChartOptionsT>(value); }
    template<typename GaugeChartOptionsT = GaugeChartOptions>
    GaugeChartConfiguration& WithGaugeChartOptions(GaugeChartOptionsT&& value) { SetGaugeChartOptions(std::forward<GaugeChartOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const { return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    template<typename DataLabelsT = DataLabelOptions>
    void SetDataLabels(DataLabelsT&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::forward<DataLabelsT>(value); }
    template<typename DataLabelsT = DataLabelOptions>
    GaugeChartConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const TooltipOptions& GetTooltipOptions() const { return m_tooltipOptions; }
    inline bool TooltipOptionsHasBeenSet() const { return m_tooltipOptionsHasBeenSet; }
    template<typename TooltipOptionsT = TooltipOptions>
    void SetTooltipOptions(TooltipOptionsT&& value) { m_tooltipOptionsHasBeenSet = true; m_tooltipOptions = std::forward<TooltipOptionsT>(value); }
    template<typename TooltipOptionsT = TooltipOptions>
    GaugeChartConfiguration& WithTooltipOptions(TooltipOptionsT&& value) { SetTooltipOptions(std::forward<TooltipOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual palette configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const VisualPalette& GetVisualPalette() const { return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    template<typename VisualPaletteT = VisualPalette>
    void SetVisualPalette(VisualPaletteT&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::forward<VisualPaletteT>(value); }
    template<typename VisualPaletteT = VisualPalette>
    GaugeChartConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartColorConfiguration& GetColorConfiguration() const { return m_colorConfiguration; }
    inline bool ColorConfigurationHasBeenSet() const { return m_colorConfigurationHasBeenSet; }
    template<typename ColorConfigurationT = GaugeChartColorConfiguration>
    void SetColorConfiguration(ColorConfigurationT&& value) { m_colorConfigurationHasBeenSet = true; m_colorConfiguration = std::forward<ColorConfigurationT>(value); }
    template<typename ColorConfigurationT = GaugeChartColorConfiguration>
    GaugeChartConfiguration& WithColorConfiguration(ColorConfigurationT&& value) { SetColorConfiguration(std::forward<ColorConfigurationT>(value)); return *this;}
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
    GaugeChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    GaugeChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    GaugeChartOptions m_gaugeChartOptions;
    bool m_gaugeChartOptionsHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltipOptions;
    bool m_tooltipOptionsHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    GaugeChartColorConfiguration m_colorConfiguration;
    bool m_colorConfigurationHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
