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
    AWS_QUICKSIGHT_API GaugeChartConfiguration();
    AWS_QUICKSIGHT_API GaugeChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field well configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field well configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetFieldWells(const GaugeChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field well configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetFieldWells(GaugeChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithFieldWells(const GaugeChartFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithFieldWells(GaugeChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the
     * <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartOptions& GetGaugeChartOptions() const{ return m_gaugeChartOptions; }

    /**
     * <p>The options that determine the presentation of the
     * <code>GaugeChartVisual</code>.</p>
     */
    inline bool GaugeChartOptionsHasBeenSet() const { return m_gaugeChartOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the
     * <code>GaugeChartVisual</code>.</p>
     */
    inline void SetGaugeChartOptions(const GaugeChartOptions& value) { m_gaugeChartOptionsHasBeenSet = true; m_gaugeChartOptions = value; }

    /**
     * <p>The options that determine the presentation of the
     * <code>GaugeChartVisual</code>.</p>
     */
    inline void SetGaugeChartOptions(GaugeChartOptions&& value) { m_gaugeChartOptionsHasBeenSet = true; m_gaugeChartOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the
     * <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithGaugeChartOptions(const GaugeChartOptions& value) { SetGaugeChartOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the
     * <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithGaugeChartOptions(GaugeChartOptions&& value) { SetGaugeChartOptions(std::move(value)); return *this;}


    /**
     * <p>The data label configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }

    /**
     * <p>The data label configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }

    /**
     * <p>The data label configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }

    /**
     * <p>The data label configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }

    /**
     * <p>The data label configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The data label configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


    /**
     * <p>The tooltip configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const TooltipOptions& GetTooltipOptions() const{ return m_tooltipOptions; }

    /**
     * <p>The tooltip configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool TooltipOptionsHasBeenSet() const { return m_tooltipOptionsHasBeenSet; }

    /**
     * <p>The tooltip configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetTooltipOptions(const TooltipOptions& value) { m_tooltipOptionsHasBeenSet = true; m_tooltipOptions = value; }

    /**
     * <p>The tooltip configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetTooltipOptions(TooltipOptions&& value) { m_tooltipOptionsHasBeenSet = true; m_tooltipOptions = std::move(value); }

    /**
     * <p>The tooltip configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithTooltipOptions(const TooltipOptions& value) { SetTooltipOptions(value); return *this;}

    /**
     * <p>The tooltip configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithTooltipOptions(TooltipOptions&& value) { SetTooltipOptions(std::move(value)); return *this;}


    /**
     * <p>The visual palette configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    /**
     * <p>The visual palette configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    /**
     * <p>The visual palette configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    /**
     * <p>The visual palette configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    /**
     * <p>The visual palette configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The visual palette configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
