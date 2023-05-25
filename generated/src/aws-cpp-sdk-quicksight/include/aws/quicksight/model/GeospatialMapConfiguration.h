/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialMapFieldWells.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/GeospatialWindowOptions.h>
#include <aws/quicksight/model/GeospatialMapStyleOptions.h>
#include <aws/quicksight/model/GeospatialPointStyleOptions.h>
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
   * <p>The configuration of a <code>GeospatialMapVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapConfiguration">AWS
   * API Reference</a></p>
   */
  class GeospatialMapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapConfiguration();
    AWS_QUICKSIGHT_API GeospatialMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const GeospatialMapFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const GeospatialMapFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(GeospatialMapFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline GeospatialMapConfiguration& WithFieldWells(const GeospatialMapFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline GeospatialMapConfiguration& WithFieldWells(GeospatialMapFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline GeospatialMapConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline GeospatialMapConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline GeospatialMapConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline GeospatialMapConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


    /**
     * <p>The window options of the geospatial map.</p>
     */
    inline const GeospatialWindowOptions& GetWindowOptions() const{ return m_windowOptions; }

    /**
     * <p>The window options of the geospatial map.</p>
     */
    inline bool WindowOptionsHasBeenSet() const { return m_windowOptionsHasBeenSet; }

    /**
     * <p>The window options of the geospatial map.</p>
     */
    inline void SetWindowOptions(const GeospatialWindowOptions& value) { m_windowOptionsHasBeenSet = true; m_windowOptions = value; }

    /**
     * <p>The window options of the geospatial map.</p>
     */
    inline void SetWindowOptions(GeospatialWindowOptions&& value) { m_windowOptionsHasBeenSet = true; m_windowOptions = std::move(value); }

    /**
     * <p>The window options of the geospatial map.</p>
     */
    inline GeospatialMapConfiguration& WithWindowOptions(const GeospatialWindowOptions& value) { SetWindowOptions(value); return *this;}

    /**
     * <p>The window options of the geospatial map.</p>
     */
    inline GeospatialMapConfiguration& WithWindowOptions(GeospatialWindowOptions&& value) { SetWindowOptions(std::move(value)); return *this;}


    /**
     * <p>The map style options of the geospatial map.</p>
     */
    inline const GeospatialMapStyleOptions& GetMapStyleOptions() const{ return m_mapStyleOptions; }

    /**
     * <p>The map style options of the geospatial map.</p>
     */
    inline bool MapStyleOptionsHasBeenSet() const { return m_mapStyleOptionsHasBeenSet; }

    /**
     * <p>The map style options of the geospatial map.</p>
     */
    inline void SetMapStyleOptions(const GeospatialMapStyleOptions& value) { m_mapStyleOptionsHasBeenSet = true; m_mapStyleOptions = value; }

    /**
     * <p>The map style options of the geospatial map.</p>
     */
    inline void SetMapStyleOptions(GeospatialMapStyleOptions&& value) { m_mapStyleOptionsHasBeenSet = true; m_mapStyleOptions = std::move(value); }

    /**
     * <p>The map style options of the geospatial map.</p>
     */
    inline GeospatialMapConfiguration& WithMapStyleOptions(const GeospatialMapStyleOptions& value) { SetMapStyleOptions(value); return *this;}

    /**
     * <p>The map style options of the geospatial map.</p>
     */
    inline GeospatialMapConfiguration& WithMapStyleOptions(GeospatialMapStyleOptions&& value) { SetMapStyleOptions(std::move(value)); return *this;}


    /**
     * <p>The point style options of the geospatial map.</p>
     */
    inline const GeospatialPointStyleOptions& GetPointStyleOptions() const{ return m_pointStyleOptions; }

    /**
     * <p>The point style options of the geospatial map.</p>
     */
    inline bool PointStyleOptionsHasBeenSet() const { return m_pointStyleOptionsHasBeenSet; }

    /**
     * <p>The point style options of the geospatial map.</p>
     */
    inline void SetPointStyleOptions(const GeospatialPointStyleOptions& value) { m_pointStyleOptionsHasBeenSet = true; m_pointStyleOptions = value; }

    /**
     * <p>The point style options of the geospatial map.</p>
     */
    inline void SetPointStyleOptions(GeospatialPointStyleOptions&& value) { m_pointStyleOptionsHasBeenSet = true; m_pointStyleOptions = std::move(value); }

    /**
     * <p>The point style options of the geospatial map.</p>
     */
    inline GeospatialMapConfiguration& WithPointStyleOptions(const GeospatialPointStyleOptions& value) { SetPointStyleOptions(value); return *this;}

    /**
     * <p>The point style options of the geospatial map.</p>
     */
    inline GeospatialMapConfiguration& WithPointStyleOptions(GeospatialPointStyleOptions&& value) { SetPointStyleOptions(std::move(value)); return *this;}


    
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    
    inline GeospatialMapConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    
    inline GeospatialMapConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

  private:

    GeospatialMapFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    GeospatialWindowOptions m_windowOptions;
    bool m_windowOptionsHasBeenSet = false;

    GeospatialMapStyleOptions m_mapStyleOptions;
    bool m_mapStyleOptionsHasBeenSet = false;

    GeospatialPointStyleOptions m_pointStyleOptions;
    bool m_pointStyleOptionsHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
