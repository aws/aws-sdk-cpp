/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WaterfallChartFieldWells.h>
#include <aws/quicksight/model/WaterfallChartSortConfiguration.h>
#include <aws/quicksight/model/WaterfallChartOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/WaterfallChartColorConfiguration.h>
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
   * <p>The configuration for a waterfall visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartConfiguration">AWS
   * API Reference</a></p>
   */
  class WaterfallChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartConfiguration() = default;
    AWS_QUICKSIGHT_API WaterfallChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = WaterfallChartFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = WaterfallChartFieldWells>
    WaterfallChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = WaterfallChartSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = WaterfallChartSortConfiguration>
    WaterfallChartConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline const WaterfallChartOptions& GetWaterfallChartOptions() const { return m_waterfallChartOptions; }
    inline bool WaterfallChartOptionsHasBeenSet() const { return m_waterfallChartOptionsHasBeenSet; }
    template<typename WaterfallChartOptionsT = WaterfallChartOptions>
    void SetWaterfallChartOptions(WaterfallChartOptionsT&& value) { m_waterfallChartOptionsHasBeenSet = true; m_waterfallChartOptions = std::forward<WaterfallChartOptionsT>(value); }
    template<typename WaterfallChartOptionsT = WaterfallChartOptions>
    WaterfallChartConfiguration& WithWaterfallChartOptions(WaterfallChartOptionsT&& value) { SetWaterfallChartOptions(std::forward<WaterfallChartOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryAxisLabelOptions() const { return m_categoryAxisLabelOptions; }
    inline bool CategoryAxisLabelOptionsHasBeenSet() const { return m_categoryAxisLabelOptionsHasBeenSet; }
    template<typename CategoryAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetCategoryAxisLabelOptions(CategoryAxisLabelOptionsT&& value) { m_categoryAxisLabelOptionsHasBeenSet = true; m_categoryAxisLabelOptions = std::forward<CategoryAxisLabelOptionsT>(value); }
    template<typename CategoryAxisLabelOptionsT = ChartAxisLabelOptions>
    WaterfallChartConfiguration& WithCategoryAxisLabelOptions(CategoryAxisLabelOptionsT&& value) { SetCategoryAxisLabelOptions(std::forward<CategoryAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxisDisplayOptions() const { return m_categoryAxisDisplayOptions; }
    inline bool CategoryAxisDisplayOptionsHasBeenSet() const { return m_categoryAxisDisplayOptionsHasBeenSet; }
    template<typename CategoryAxisDisplayOptionsT = AxisDisplayOptions>
    void SetCategoryAxisDisplayOptions(CategoryAxisDisplayOptionsT&& value) { m_categoryAxisDisplayOptionsHasBeenSet = true; m_categoryAxisDisplayOptions = std::forward<CategoryAxisDisplayOptionsT>(value); }
    template<typename CategoryAxisDisplayOptionsT = AxisDisplayOptions>
    WaterfallChartConfiguration& WithCategoryAxisDisplayOptions(CategoryAxisDisplayOptionsT&& value) { SetCategoryAxisDisplayOptions(std::forward<CategoryAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const { return m_primaryYAxisLabelOptions; }
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::forward<PrimaryYAxisLabelOptionsT>(value); }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    WaterfallChartConfiguration& WithPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { SetPrimaryYAxisLabelOptions(std::forward<PrimaryYAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline const AxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const { return m_primaryYAxisDisplayOptions; }
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }
    template<typename PrimaryYAxisDisplayOptionsT = AxisDisplayOptions>
    void SetPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::forward<PrimaryYAxisDisplayOptionsT>(value); }
    template<typename PrimaryYAxisDisplayOptionsT = AxisDisplayOptions>
    WaterfallChartConfiguration& WithPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { SetPrimaryYAxisDisplayOptions(std::forward<PrimaryYAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline const LegendOptions& GetLegend() const { return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    template<typename LegendT = LegendOptions>
    void SetLegend(LegendT&& value) { m_legendHasBeenSet = true; m_legend = std::forward<LegendT>(value); }
    template<typename LegendT = LegendOptions>
    WaterfallChartConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const { return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    template<typename DataLabelsT = DataLabelOptions>
    void SetDataLabels(DataLabelsT&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::forward<DataLabelsT>(value); }
    template<typename DataLabelsT = DataLabelOptions>
    WaterfallChartConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const { return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    template<typename VisualPaletteT = VisualPalette>
    void SetVisualPalette(VisualPaletteT&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::forward<VisualPaletteT>(value); }
    template<typename VisualPaletteT = VisualPalette>
    WaterfallChartConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartColorConfiguration& GetColorConfiguration() const { return m_colorConfiguration; }
    inline bool ColorConfigurationHasBeenSet() const { return m_colorConfigurationHasBeenSet; }
    template<typename ColorConfigurationT = WaterfallChartColorConfiguration>
    void SetColorConfiguration(ColorConfigurationT&& value) { m_colorConfigurationHasBeenSet = true; m_colorConfiguration = std::forward<ColorConfigurationT>(value); }
    template<typename ColorConfigurationT = WaterfallChartColorConfiguration>
    WaterfallChartConfiguration& WithColorConfiguration(ColorConfigurationT&& value) { SetColorConfiguration(std::forward<ColorConfigurationT>(value)); return *this;}
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
    WaterfallChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    WaterfallChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    WaterfallChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    WaterfallChartOptions m_waterfallChartOptions;
    bool m_waterfallChartOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_categoryAxisLabelOptions;
    bool m_categoryAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_categoryAxisDisplayOptions;
    bool m_categoryAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_primaryYAxisLabelOptions;
    bool m_primaryYAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_primaryYAxisDisplayOptions;
    bool m_primaryYAxisDisplayOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    WaterfallChartColorConfiguration m_colorConfiguration;
    bool m_colorConfigurationHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
