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
   * <p>The configuration of a <code>GeospatialMapVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapConfiguration">AWS
   * API Reference</a></p>
   */
  class GeospatialMapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapConfiguration() = default;
    AWS_QUICKSIGHT_API GeospatialMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const GeospatialMapFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = GeospatialMapFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = GeospatialMapFieldWells>
    GeospatialMapConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const { return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    template<typename LegendT = LegendOptions>
    void SetLegend(LegendT&& value) { m_legendHasBeenSet = true; m_legend = std::forward<LegendT>(value); }
    template<typename LegendT = LegendOptions>
    GeospatialMapConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = TooltipOptions>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = TooltipOptions>
    GeospatialMapConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The window options of the geospatial map.</p>
     */
    inline const GeospatialWindowOptions& GetWindowOptions() const { return m_windowOptions; }
    inline bool WindowOptionsHasBeenSet() const { return m_windowOptionsHasBeenSet; }
    template<typename WindowOptionsT = GeospatialWindowOptions>
    void SetWindowOptions(WindowOptionsT&& value) { m_windowOptionsHasBeenSet = true; m_windowOptions = std::forward<WindowOptionsT>(value); }
    template<typename WindowOptionsT = GeospatialWindowOptions>
    GeospatialMapConfiguration& WithWindowOptions(WindowOptionsT&& value) { SetWindowOptions(std::forward<WindowOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map style options of the geospatial map.</p>
     */
    inline const GeospatialMapStyleOptions& GetMapStyleOptions() const { return m_mapStyleOptions; }
    inline bool MapStyleOptionsHasBeenSet() const { return m_mapStyleOptionsHasBeenSet; }
    template<typename MapStyleOptionsT = GeospatialMapStyleOptions>
    void SetMapStyleOptions(MapStyleOptionsT&& value) { m_mapStyleOptionsHasBeenSet = true; m_mapStyleOptions = std::forward<MapStyleOptionsT>(value); }
    template<typename MapStyleOptionsT = GeospatialMapStyleOptions>
    GeospatialMapConfiguration& WithMapStyleOptions(MapStyleOptionsT&& value) { SetMapStyleOptions(std::forward<MapStyleOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point style options of the geospatial map.</p>
     */
    inline const GeospatialPointStyleOptions& GetPointStyleOptions() const { return m_pointStyleOptions; }
    inline bool PointStyleOptionsHasBeenSet() const { return m_pointStyleOptionsHasBeenSet; }
    template<typename PointStyleOptionsT = GeospatialPointStyleOptions>
    void SetPointStyleOptions(PointStyleOptionsT&& value) { m_pointStyleOptionsHasBeenSet = true; m_pointStyleOptions = std::forward<PointStyleOptionsT>(value); }
    template<typename PointStyleOptionsT = GeospatialPointStyleOptions>
    GeospatialMapConfiguration& WithPointStyleOptions(PointStyleOptionsT&& value) { SetPointStyleOptions(std::forward<PointStyleOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VisualPalette& GetVisualPalette() const { return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    template<typename VisualPaletteT = VisualPalette>
    void SetVisualPalette(VisualPaletteT&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::forward<VisualPaletteT>(value); }
    template<typename VisualPaletteT = VisualPalette>
    GeospatialMapConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
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
    GeospatialMapConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
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

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
