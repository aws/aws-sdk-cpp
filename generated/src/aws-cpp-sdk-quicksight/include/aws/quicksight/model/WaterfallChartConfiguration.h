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


    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline void SetFieldWells(const WaterfallChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline void SetFieldWells(WaterfallChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithFieldWells(const WaterfallChartFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithFieldWells(WaterfallChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline void SetSortConfiguration(const WaterfallChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline void SetSortConfiguration(WaterfallChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithSortConfiguration(const WaterfallChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithSortConfiguration(WaterfallChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline const WaterfallChartOptions& GetWaterfallChartOptions() const{ return m_waterfallChartOptions; }

    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline bool WaterfallChartOptionsHasBeenSet() const { return m_waterfallChartOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline void SetWaterfallChartOptions(const WaterfallChartOptions& value) { m_waterfallChartOptionsHasBeenSet = true; m_waterfallChartOptions = value; }

    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline void SetWaterfallChartOptions(WaterfallChartOptions&& value) { m_waterfallChartOptionsHasBeenSet = true; m_waterfallChartOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithWaterfallChartOptions(const WaterfallChartOptions& value) { SetWaterfallChartOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithWaterfallChartOptions(WaterfallChartOptions&& value) { SetWaterfallChartOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryAxisLabelOptions() const{ return m_categoryAxisLabelOptions; }

    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline bool CategoryAxisLabelOptionsHasBeenSet() const { return m_categoryAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline void SetCategoryAxisLabelOptions(const ChartAxisLabelOptions& value) { m_categoryAxisLabelOptionsHasBeenSet = true; m_categoryAxisLabelOptions = value; }

    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline void SetCategoryAxisLabelOptions(ChartAxisLabelOptions&& value) { m_categoryAxisLabelOptionsHasBeenSet = true; m_categoryAxisLabelOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline WaterfallChartConfiguration& WithCategoryAxisLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryAxisLabelOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the category axis label.</p>
     */
    inline WaterfallChartConfiguration& WithCategoryAxisLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxisDisplayOptions() const{ return m_categoryAxisDisplayOptions; }

    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline bool CategoryAxisDisplayOptionsHasBeenSet() const { return m_categoryAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline void SetCategoryAxisDisplayOptions(const AxisDisplayOptions& value) { m_categoryAxisDisplayOptionsHasBeenSet = true; m_categoryAxisDisplayOptions = value; }

    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline void SetCategoryAxisDisplayOptions(AxisDisplayOptions&& value) { m_categoryAxisDisplayOptionsHasBeenSet = true; m_categoryAxisDisplayOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline WaterfallChartConfiguration& WithCategoryAxisDisplayOptions(const AxisDisplayOptions& value) { SetCategoryAxisDisplayOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the category axis.</p>
     */
    inline WaterfallChartConfiguration& WithCategoryAxisDisplayOptions(AxisDisplayOptions&& value) { SetCategoryAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const{ return m_primaryYAxisLabelOptions; }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = value; }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline WaterfallChartConfiguration& WithPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetPrimaryYAxisLabelOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline WaterfallChartConfiguration& WithPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetPrimaryYAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline const AxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const{ return m_primaryYAxisDisplayOptions; }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = value; }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline WaterfallChartConfiguration& WithPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { SetPrimaryYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the y-axis.</p>
     */
    inline WaterfallChartConfiguration& WithPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { SetPrimaryYAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }

    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }

    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }

    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }

    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }

    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }

    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }

    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }

    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The data label configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The visual palette configuration of a waterfall visual.</p>
     */
    inline WaterfallChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
