/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableVisual.h>
#include <aws/quicksight/model/PivotTableVisual.h>
#include <aws/quicksight/model/BarChartVisual.h>
#include <aws/quicksight/model/KPIVisual.h>
#include <aws/quicksight/model/PieChartVisual.h>
#include <aws/quicksight/model/GaugeChartVisual.h>
#include <aws/quicksight/model/LineChartVisual.h>
#include <aws/quicksight/model/HeatMapVisual.h>
#include <aws/quicksight/model/TreeMapVisual.h>
#include <aws/quicksight/model/GeospatialMapVisual.h>
#include <aws/quicksight/model/FilledMapVisual.h>
#include <aws/quicksight/model/LayerMapVisual.h>
#include <aws/quicksight/model/FunnelChartVisual.h>
#include <aws/quicksight/model/ScatterPlotVisual.h>
#include <aws/quicksight/model/ComboChartVisual.h>
#include <aws/quicksight/model/BoxPlotVisual.h>
#include <aws/quicksight/model/WaterfallVisual.h>
#include <aws/quicksight/model/HistogramVisual.h>
#include <aws/quicksight/model/WordCloudVisual.h>
#include <aws/quicksight/model/InsightVisual.h>
#include <aws/quicksight/model/SankeyDiagramVisual.h>
#include <aws/quicksight/model/CustomContentVisual.h>
#include <aws/quicksight/model/EmptyVisual.h>
#include <aws/quicksight/model/RadarChartVisual.h>
#include <aws/quicksight/model/PluginVisual.h>
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
   * <p>A visual displayed on a sheet in an analysis, dashboard, or template.</p>
   * <p>This is a union type structure. For this structure to be valid, only one of
   * the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Visual">AWS
   * API Reference</a></p>
   */
  class Visual
  {
  public:
    AWS_QUICKSIGHT_API Visual() = default;
    AWS_QUICKSIGHT_API Visual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Visual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A table visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
     * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const TableVisual& GetTableVisual() const { return m_tableVisual; }
    inline bool TableVisualHasBeenSet() const { return m_tableVisualHasBeenSet; }
    template<typename TableVisualT = TableVisual>
    void SetTableVisual(TableVisualT&& value) { m_tableVisualHasBeenSet = true; m_tableVisual = std::forward<TableVisualT>(value); }
    template<typename TableVisualT = TableVisual>
    Visual& WithTableVisual(TableVisualT&& value) { SetTableVisual(std::forward<TableVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pivot table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pivot-table.html">Using
     * pivot tables</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const PivotTableVisual& GetPivotTableVisual() const { return m_pivotTableVisual; }
    inline bool PivotTableVisualHasBeenSet() const { return m_pivotTableVisualHasBeenSet; }
    template<typename PivotTableVisualT = PivotTableVisual>
    void SetPivotTableVisual(PivotTableVisualT&& value) { m_pivotTableVisualHasBeenSet = true; m_pivotTableVisual = std::forward<PivotTableVisualT>(value); }
    template<typename PivotTableVisualT = PivotTableVisual>
    Visual& WithPivotTableVisual(PivotTableVisualT&& value) { SetPivotTableVisual(std::forward<PivotTableVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A bar chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
     * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const BarChartVisual& GetBarChartVisual() const { return m_barChartVisual; }
    inline bool BarChartVisualHasBeenSet() const { return m_barChartVisualHasBeenSet; }
    template<typename BarChartVisualT = BarChartVisual>
    void SetBarChartVisual(BarChartVisualT&& value) { m_barChartVisualHasBeenSet = true; m_barChartVisual = std::forward<BarChartVisualT>(value); }
    template<typename BarChartVisualT = BarChartVisual>
    Visual& WithBarChartVisual(BarChartVisualT&& value) { SetBarChartVisual(std::forward<BarChartVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
     * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const KPIVisual& GetKPIVisual() const { return m_kPIVisual; }
    inline bool KPIVisualHasBeenSet() const { return m_kPIVisualHasBeenSet; }
    template<typename KPIVisualT = KPIVisual>
    void SetKPIVisual(KPIVisualT&& value) { m_kPIVisualHasBeenSet = true; m_kPIVisual = std::forward<KPIVisualT>(value); }
    template<typename KPIVisualT = KPIVisual>
    Visual& WithKPIVisual(KPIVisualT&& value) { SetKPIVisual(std::forward<KPIVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pie or donut chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pie-chart.html">Using
     * pie charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const PieChartVisual& GetPieChartVisual() const { return m_pieChartVisual; }
    inline bool PieChartVisualHasBeenSet() const { return m_pieChartVisualHasBeenSet; }
    template<typename PieChartVisualT = PieChartVisual>
    void SetPieChartVisual(PieChartVisualT&& value) { m_pieChartVisualHasBeenSet = true; m_pieChartVisual = std::forward<PieChartVisualT>(value); }
    template<typename PieChartVisualT = PieChartVisual>
    Visual& WithPieChartVisual(PieChartVisualT&& value) { SetPieChartVisual(std::forward<PieChartVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A gauge chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
     * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const GaugeChartVisual& GetGaugeChartVisual() const { return m_gaugeChartVisual; }
    inline bool GaugeChartVisualHasBeenSet() const { return m_gaugeChartVisualHasBeenSet; }
    template<typename GaugeChartVisualT = GaugeChartVisual>
    void SetGaugeChartVisual(GaugeChartVisualT&& value) { m_gaugeChartVisualHasBeenSet = true; m_gaugeChartVisual = std::forward<GaugeChartVisualT>(value); }
    template<typename GaugeChartVisualT = GaugeChartVisual>
    Visual& WithGaugeChartVisual(GaugeChartVisualT&& value) { SetGaugeChartVisual(std::forward<GaugeChartVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A line chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/line-charts.html">Using
     * line charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const LineChartVisual& GetLineChartVisual() const { return m_lineChartVisual; }
    inline bool LineChartVisualHasBeenSet() const { return m_lineChartVisualHasBeenSet; }
    template<typename LineChartVisualT = LineChartVisual>
    void SetLineChartVisual(LineChartVisualT&& value) { m_lineChartVisualHasBeenSet = true; m_lineChartVisual = std::forward<LineChartVisualT>(value); }
    template<typename LineChartVisualT = LineChartVisual>
    Visual& WithLineChartVisual(LineChartVisualT&& value) { SetLineChartVisual(std::forward<LineChartVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A heat map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
     * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const HeatMapVisual& GetHeatMapVisual() const { return m_heatMapVisual; }
    inline bool HeatMapVisualHasBeenSet() const { return m_heatMapVisualHasBeenSet; }
    template<typename HeatMapVisualT = HeatMapVisual>
    void SetHeatMapVisual(HeatMapVisualT&& value) { m_heatMapVisualHasBeenSet = true; m_heatMapVisual = std::forward<HeatMapVisualT>(value); }
    template<typename HeatMapVisualT = HeatMapVisual>
    Visual& WithHeatMapVisual(HeatMapVisualT&& value) { SetHeatMapVisual(std::forward<HeatMapVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tree map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tree-map.html">Using
     * tree maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const TreeMapVisual& GetTreeMapVisual() const { return m_treeMapVisual; }
    inline bool TreeMapVisualHasBeenSet() const { return m_treeMapVisualHasBeenSet; }
    template<typename TreeMapVisualT = TreeMapVisual>
    void SetTreeMapVisual(TreeMapVisualT&& value) { m_treeMapVisualHasBeenSet = true; m_treeMapVisual = std::forward<TreeMapVisualT>(value); }
    template<typename TreeMapVisualT = TreeMapVisual>
    Visual& WithTreeMapVisual(TreeMapVisualT&& value) { SetTreeMapVisual(std::forward<TreeMapVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A geospatial map or a points on map visual.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/point-maps.html">Creating
     * point maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const GeospatialMapVisual& GetGeospatialMapVisual() const { return m_geospatialMapVisual; }
    inline bool GeospatialMapVisualHasBeenSet() const { return m_geospatialMapVisualHasBeenSet; }
    template<typename GeospatialMapVisualT = GeospatialMapVisual>
    void SetGeospatialMapVisual(GeospatialMapVisualT&& value) { m_geospatialMapVisualHasBeenSet = true; m_geospatialMapVisual = std::forward<GeospatialMapVisualT>(value); }
    template<typename GeospatialMapVisualT = GeospatialMapVisual>
    Visual& WithGeospatialMapVisual(GeospatialMapVisualT&& value) { SetGeospatialMapVisual(std::forward<GeospatialMapVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filled map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
     * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const FilledMapVisual& GetFilledMapVisual() const { return m_filledMapVisual; }
    inline bool FilledMapVisualHasBeenSet() const { return m_filledMapVisualHasBeenSet; }
    template<typename FilledMapVisualT = FilledMapVisual>
    void SetFilledMapVisual(FilledMapVisualT&& value) { m_filledMapVisualHasBeenSet = true; m_filledMapVisual = std::forward<FilledMapVisualT>(value); }
    template<typename FilledMapVisualT = FilledMapVisual>
    Visual& WithFilledMapVisual(FilledMapVisualT&& value) { SetFilledMapVisual(std::forward<FilledMapVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties for a layer map visual</p>
     */
    inline const LayerMapVisual& GetLayerMapVisual() const { return m_layerMapVisual; }
    inline bool LayerMapVisualHasBeenSet() const { return m_layerMapVisualHasBeenSet; }
    template<typename LayerMapVisualT = LayerMapVisual>
    void SetLayerMapVisual(LayerMapVisualT&& value) { m_layerMapVisualHasBeenSet = true; m_layerMapVisual = std::forward<LayerMapVisualT>(value); }
    template<typename LayerMapVisualT = LayerMapVisual>
    Visual& WithLayerMapVisual(LayerMapVisualT&& value) { SetLayerMapVisual(std::forward<LayerMapVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A funnel chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/funnel-visual-content.html">Using
     * funnel charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const FunnelChartVisual& GetFunnelChartVisual() const { return m_funnelChartVisual; }
    inline bool FunnelChartVisualHasBeenSet() const { return m_funnelChartVisualHasBeenSet; }
    template<typename FunnelChartVisualT = FunnelChartVisual>
    void SetFunnelChartVisual(FunnelChartVisualT&& value) { m_funnelChartVisualHasBeenSet = true; m_funnelChartVisual = std::forward<FunnelChartVisualT>(value); }
    template<typename FunnelChartVisualT = FunnelChartVisual>
    Visual& WithFunnelChartVisual(FunnelChartVisualT&& value) { SetFunnelChartVisual(std::forward<FunnelChartVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A scatter plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/scatter-plot.html">Using
     * scatter plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const ScatterPlotVisual& GetScatterPlotVisual() const { return m_scatterPlotVisual; }
    inline bool ScatterPlotVisualHasBeenSet() const { return m_scatterPlotVisualHasBeenSet; }
    template<typename ScatterPlotVisualT = ScatterPlotVisual>
    void SetScatterPlotVisual(ScatterPlotVisualT&& value) { m_scatterPlotVisualHasBeenSet = true; m_scatterPlotVisual = std::forward<ScatterPlotVisualT>(value); }
    template<typename ScatterPlotVisualT = ScatterPlotVisual>
    Visual& WithScatterPlotVisual(ScatterPlotVisualT&& value) { SetScatterPlotVisual(std::forward<ScatterPlotVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A combo chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/combo-charts.html">Using
     * combo charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const ComboChartVisual& GetComboChartVisual() const { return m_comboChartVisual; }
    inline bool ComboChartVisualHasBeenSet() const { return m_comboChartVisualHasBeenSet; }
    template<typename ComboChartVisualT = ComboChartVisual>
    void SetComboChartVisual(ComboChartVisualT&& value) { m_comboChartVisualHasBeenSet = true; m_comboChartVisual = std::forward<ComboChartVisualT>(value); }
    template<typename ComboChartVisualT = ComboChartVisual>
    Visual& WithComboChartVisual(ComboChartVisualT&& value) { SetComboChartVisual(std::forward<ComboChartVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A box plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/box-plots.html">Using
     * box plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const BoxPlotVisual& GetBoxPlotVisual() const { return m_boxPlotVisual; }
    inline bool BoxPlotVisualHasBeenSet() const { return m_boxPlotVisualHasBeenSet; }
    template<typename BoxPlotVisualT = BoxPlotVisual>
    void SetBoxPlotVisual(BoxPlotVisualT&& value) { m_boxPlotVisualHasBeenSet = true; m_boxPlotVisual = std::forward<BoxPlotVisualT>(value); }
    template<typename BoxPlotVisualT = BoxPlotVisual>
    Visual& WithBoxPlotVisual(BoxPlotVisualT&& value) { SetBoxPlotVisual(std::forward<BoxPlotVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A waterfall chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/waterfall-chart.html">Using
     * waterfall charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const WaterfallVisual& GetWaterfallVisual() const { return m_waterfallVisual; }
    inline bool WaterfallVisualHasBeenSet() const { return m_waterfallVisualHasBeenSet; }
    template<typename WaterfallVisualT = WaterfallVisual>
    void SetWaterfallVisual(WaterfallVisualT&& value) { m_waterfallVisualHasBeenSet = true; m_waterfallVisual = std::forward<WaterfallVisualT>(value); }
    template<typename WaterfallVisualT = WaterfallVisual>
    Visual& WithWaterfallVisual(WaterfallVisualT&& value) { SetWaterfallVisual(std::forward<WaterfallVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A histogram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
     * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const HistogramVisual& GetHistogramVisual() const { return m_histogramVisual; }
    inline bool HistogramVisualHasBeenSet() const { return m_histogramVisualHasBeenSet; }
    template<typename HistogramVisualT = HistogramVisual>
    void SetHistogramVisual(HistogramVisualT&& value) { m_histogramVisualHasBeenSet = true; m_histogramVisual = std::forward<HistogramVisualT>(value); }
    template<typename HistogramVisualT = HistogramVisual>
    Visual& WithHistogramVisual(HistogramVisualT&& value) { SetHistogramVisual(std::forward<HistogramVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A word cloud.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/word-cloud.html">Using
     * word clouds</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const WordCloudVisual& GetWordCloudVisual() const { return m_wordCloudVisual; }
    inline bool WordCloudVisualHasBeenSet() const { return m_wordCloudVisualHasBeenSet; }
    template<typename WordCloudVisualT = WordCloudVisual>
    void SetWordCloudVisual(WordCloudVisualT&& value) { m_wordCloudVisualHasBeenSet = true; m_wordCloudVisual = std::forward<WordCloudVisualT>(value); }
    template<typename WordCloudVisualT = WordCloudVisual>
    Visual& WithWordCloudVisual(WordCloudVisualT&& value) { SetWordCloudVisual(std::forward<WordCloudVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An insight visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/computational-insights.html">Working
     * with insights</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const InsightVisual& GetInsightVisual() const { return m_insightVisual; }
    inline bool InsightVisualHasBeenSet() const { return m_insightVisualHasBeenSet; }
    template<typename InsightVisualT = InsightVisual>
    void SetInsightVisual(InsightVisualT&& value) { m_insightVisualHasBeenSet = true; m_insightVisual = std::forward<InsightVisualT>(value); }
    template<typename InsightVisualT = InsightVisual>
    Visual& WithInsightVisual(InsightVisualT&& value) { SetInsightVisual(std::forward<InsightVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sankey diagram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sankey-diagram.html">Using
     * Sankey diagrams</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const SankeyDiagramVisual& GetSankeyDiagramVisual() const { return m_sankeyDiagramVisual; }
    inline bool SankeyDiagramVisualHasBeenSet() const { return m_sankeyDiagramVisualHasBeenSet; }
    template<typename SankeyDiagramVisualT = SankeyDiagramVisual>
    void SetSankeyDiagramVisual(SankeyDiagramVisualT&& value) { m_sankeyDiagramVisualHasBeenSet = true; m_sankeyDiagramVisual = std::forward<SankeyDiagramVisualT>(value); }
    template<typename SankeyDiagramVisualT = SankeyDiagramVisual>
    Visual& WithSankeyDiagramVisual(SankeyDiagramVisualT&& value) { SetSankeyDiagramVisual(std::forward<SankeyDiagramVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A visual that contains custom content.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
     * custom visual content</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const CustomContentVisual& GetCustomContentVisual() const { return m_customContentVisual; }
    inline bool CustomContentVisualHasBeenSet() const { return m_customContentVisualHasBeenSet; }
    template<typename CustomContentVisualT = CustomContentVisual>
    void SetCustomContentVisual(CustomContentVisualT&& value) { m_customContentVisualHasBeenSet = true; m_customContentVisual = std::forward<CustomContentVisualT>(value); }
    template<typename CustomContentVisualT = CustomContentVisual>
    Visual& WithCustomContentVisual(CustomContentVisualT&& value) { SetCustomContentVisual(std::forward<CustomContentVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An empty visual.</p>
     */
    inline const EmptyVisual& GetEmptyVisual() const { return m_emptyVisual; }
    inline bool EmptyVisualHasBeenSet() const { return m_emptyVisualHasBeenSet; }
    template<typename EmptyVisualT = EmptyVisual>
    void SetEmptyVisual(EmptyVisualT&& value) { m_emptyVisualHasBeenSet = true; m_emptyVisual = std::forward<EmptyVisualT>(value); }
    template<typename EmptyVisualT = EmptyVisual>
    Visual& WithEmptyVisual(EmptyVisualT&& value) { SetEmptyVisual(std::forward<EmptyVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A radar chart visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/radar-chart.html">Using
     * radar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const RadarChartVisual& GetRadarChartVisual() const { return m_radarChartVisual; }
    inline bool RadarChartVisualHasBeenSet() const { return m_radarChartVisualHasBeenSet; }
    template<typename RadarChartVisualT = RadarChartVisual>
    void SetRadarChartVisual(RadarChartVisualT&& value) { m_radarChartVisualHasBeenSet = true; m_radarChartVisual = std::forward<RadarChartVisualT>(value); }
    template<typename RadarChartVisualT = RadarChartVisual>
    Visual& WithRadarChartVisual(RadarChartVisualT&& value) { SetRadarChartVisual(std::forward<RadarChartVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom plugin visual type.</p>
     */
    inline const PluginVisual& GetPluginVisual() const { return m_pluginVisual; }
    inline bool PluginVisualHasBeenSet() const { return m_pluginVisualHasBeenSet; }
    template<typename PluginVisualT = PluginVisual>
    void SetPluginVisual(PluginVisualT&& value) { m_pluginVisualHasBeenSet = true; m_pluginVisual = std::forward<PluginVisualT>(value); }
    template<typename PluginVisualT = PluginVisual>
    Visual& WithPluginVisual(PluginVisualT&& value) { SetPluginVisual(std::forward<PluginVisualT>(value)); return *this;}
    ///@}
  private:

    TableVisual m_tableVisual;
    bool m_tableVisualHasBeenSet = false;

    PivotTableVisual m_pivotTableVisual;
    bool m_pivotTableVisualHasBeenSet = false;

    BarChartVisual m_barChartVisual;
    bool m_barChartVisualHasBeenSet = false;

    KPIVisual m_kPIVisual;
    bool m_kPIVisualHasBeenSet = false;

    PieChartVisual m_pieChartVisual;
    bool m_pieChartVisualHasBeenSet = false;

    GaugeChartVisual m_gaugeChartVisual;
    bool m_gaugeChartVisualHasBeenSet = false;

    LineChartVisual m_lineChartVisual;
    bool m_lineChartVisualHasBeenSet = false;

    HeatMapVisual m_heatMapVisual;
    bool m_heatMapVisualHasBeenSet = false;

    TreeMapVisual m_treeMapVisual;
    bool m_treeMapVisualHasBeenSet = false;

    GeospatialMapVisual m_geospatialMapVisual;
    bool m_geospatialMapVisualHasBeenSet = false;

    FilledMapVisual m_filledMapVisual;
    bool m_filledMapVisualHasBeenSet = false;

    LayerMapVisual m_layerMapVisual;
    bool m_layerMapVisualHasBeenSet = false;

    FunnelChartVisual m_funnelChartVisual;
    bool m_funnelChartVisualHasBeenSet = false;

    ScatterPlotVisual m_scatterPlotVisual;
    bool m_scatterPlotVisualHasBeenSet = false;

    ComboChartVisual m_comboChartVisual;
    bool m_comboChartVisualHasBeenSet = false;

    BoxPlotVisual m_boxPlotVisual;
    bool m_boxPlotVisualHasBeenSet = false;

    WaterfallVisual m_waterfallVisual;
    bool m_waterfallVisualHasBeenSet = false;

    HistogramVisual m_histogramVisual;
    bool m_histogramVisualHasBeenSet = false;

    WordCloudVisual m_wordCloudVisual;
    bool m_wordCloudVisualHasBeenSet = false;

    InsightVisual m_insightVisual;
    bool m_insightVisualHasBeenSet = false;

    SankeyDiagramVisual m_sankeyDiagramVisual;
    bool m_sankeyDiagramVisualHasBeenSet = false;

    CustomContentVisual m_customContentVisual;
    bool m_customContentVisualHasBeenSet = false;

    EmptyVisual m_emptyVisual;
    bool m_emptyVisualHasBeenSet = false;

    RadarChartVisual m_radarChartVisual;
    bool m_radarChartVisualHasBeenSet = false;

    PluginVisual m_pluginVisual;
    bool m_pluginVisualHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
