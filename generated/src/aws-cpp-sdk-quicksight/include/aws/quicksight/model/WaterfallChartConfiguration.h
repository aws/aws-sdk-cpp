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
    AWS_QUICKSIGHT_API WaterfallChartConfiguration();
    AWS_QUICKSIGHT_API WaterfallChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const WaterfallChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(WaterfallChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline WaterfallChartConfiguration& WithFieldWells(const WaterfallChartFieldWells& value) { SetFieldWells(value); return *this;}
    inline WaterfallChartConfiguration& WithFieldWells(WaterfallChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const WaterfallChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(WaterfallChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline WaterfallChartConfiguration& WithSortConfiguration(const WaterfallChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline WaterfallChartConfiguration& WithSortConfiguration(WaterfallChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline const WaterfallChartOptions& GetWaterfallChartOptions() const{ return m_waterfallChartOptions; }
    inline bool WaterfallChartOptionsHasBeenSet() const { return m_waterfallChartOptionsHasBeenSet; }
    inline void SetWaterfallChartOptions(const WaterfallChartOptions& value) { m_waterfallChartOptionsHasBeenSet = true; m_waterfallChartOptions = value; }
    inline void SetWaterfallChartOptions(WaterfallChartOptions&& value) { m_waterfallChartOptionsHasBeenSet = true; m_waterfallChartOptions = std::move(value); }
    inline WaterfallChartConfiguration& WithWaterfallChartOptions(const WaterfallChartOptions& value) { SetWaterfallChartOptions(value); return *this;}
    inline WaterfallChartConfiguration& WithWaterfallChartOptions(WaterfallChartOptions&& value) { SetWaterfallChartOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryAxisLabelOptions() const{ return m_categoryAxisLabelOptions; }
    inline bool CategoryAxisLabelOptionsHasBeenSet() const { return m_categoryAxisLabelOptionsHasBeenSet; }
    inline void SetCategoryAxisLabelOptions(const ChartAxisLabelOptions& value) { m_categoryAxisLabelOptionsHasBeenSet = true; m_categoryAxisLabelOptions = value; }
    inline void SetCategoryAxisLabelOptions(ChartAxisLabelOptions&& value) { m_categoryAxisLabelOptionsHasBeenSet = true; m_categoryAxisLabelOptions = std::move(value); }
    inline WaterfallChartConfiguration& WithCategoryAxisLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryAxisLabelOptions(value); return *this;}
    inline WaterfallChartConfiguration& WithCategoryAxisLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxisDisplayOptions() const{ return m_categoryAxisDisplayOptions; }
    inline bool CategoryAxisDisplayOptionsHasBeenSet() const { return m_categoryAxisDisplayOptionsHasBeenSet; }
    inline void SetCategoryAxisDisplayOptions(const AxisDisplayOptions& value) { m_categoryAxisDisplayOptionsHasBeenSet = true; m_categoryAxisDisplayOptions = value; }
    inline void SetCategoryAxisDisplayOptions(AxisDisplayOptions&& value) { m_categoryAxisDisplayOptionsHasBeenSet = true; m_categoryAxisDisplayOptions = std::move(value); }
    inline WaterfallChartConfiguration& WithCategoryAxisDisplayOptions(const AxisDisplayOptions& value) { SetCategoryAxisDisplayOptions(value); return *this;}
    inline WaterfallChartConfiguration& WithCategoryAxisDisplayOptions(AxisDisplayOptions&& value) { SetCategoryAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const{ return m_primaryYAxisLabelOptions; }
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }
    inline void SetPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = value; }
    inline void SetPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::move(value); }
    inline WaterfallChartConfiguration& WithPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetPrimaryYAxisLabelOptions(value); return *this;}
    inline WaterfallChartConfiguration& WithPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetPrimaryYAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline const AxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const{ return m_primaryYAxisDisplayOptions; }
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }
    inline void SetPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = value; }
    inline void SetPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::move(value); }
    inline WaterfallChartConfiguration& WithPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { SetPrimaryYAxisDisplayOptions(value); return *this;}
    inline WaterfallChartConfiguration& WithPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { SetPrimaryYAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }
    inline WaterfallChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}
    inline WaterfallChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }
    inline WaterfallChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}
    inline WaterfallChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }
    inline WaterfallChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}
    inline WaterfallChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartColorConfiguration& GetColorConfiguration() const{ return m_colorConfiguration; }
    inline bool ColorConfigurationHasBeenSet() const { return m_colorConfigurationHasBeenSet; }
    inline void SetColorConfiguration(const WaterfallChartColorConfiguration& value) { m_colorConfigurationHasBeenSet = true; m_colorConfiguration = value; }
    inline void SetColorConfiguration(WaterfallChartColorConfiguration&& value) { m_colorConfigurationHasBeenSet = true; m_colorConfiguration = std::move(value); }
    inline WaterfallChartConfiguration& WithColorConfiguration(const WaterfallChartColorConfiguration& value) { SetColorConfiguration(value); return *this;}
    inline WaterfallChartConfiguration& WithColorConfiguration(WaterfallChartColorConfiguration&& value) { SetColorConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline WaterfallChartConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline WaterfallChartConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
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
