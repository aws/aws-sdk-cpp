/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/GeospatialLayerMapConfiguration.h>
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
   * <p>A layer map visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LayerMapVisual">AWS
   * API Reference</a></p>
   */
  class LayerMapVisual
  {
  public:
    AWS_QUICKSIGHT_API LayerMapVisual() = default;
    AWS_QUICKSIGHT_API LayerMapVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LayerMapVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the visual.</p>
     */
    inline const Aws::String& GetVisualId() const { return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    template<typename VisualIdT = Aws::String>
    void SetVisualId(VisualIdT&& value) { m_visualIdHasBeenSet = true; m_visualId = std::forward<VisualIdT>(value); }
    template<typename VisualIdT = Aws::String>
    LayerMapVisual& WithVisualId(VisualIdT&& value) { SetVisualId(std::forward<VisualIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VisualTitleLabelOptions& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = VisualTitleLabelOptions>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = VisualTitleLabelOptions>
    LayerMapVisual& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VisualSubtitleLabelOptions& GetSubtitle() const { return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    template<typename SubtitleT = VisualSubtitleLabelOptions>
    void SetSubtitle(SubtitleT&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::forward<SubtitleT>(value); }
    template<typename SubtitleT = VisualSubtitleLabelOptions>
    LayerMapVisual& WithSubtitle(SubtitleT&& value) { SetSubtitle(std::forward<SubtitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the visual.</p>
     */
    inline const GeospatialLayerMapConfiguration& GetChartConfiguration() const { return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    template<typename ChartConfigurationT = GeospatialLayerMapConfiguration>
    void SetChartConfiguration(ChartConfigurationT&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::forward<ChartConfigurationT>(value); }
    template<typename ChartConfigurationT = GeospatialLayerMapConfiguration>
    LayerMapVisual& WithChartConfiguration(ChartConfigurationT&& value) { SetChartConfiguration(std::forward<ChartConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset that is used to create the layer map visual. You can't create a
     * visual without a dataset.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const { return m_dataSetIdentifier; }
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }
    template<typename DataSetIdentifierT = Aws::String>
    void SetDataSetIdentifier(DataSetIdentifierT&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::forward<DataSetIdentifierT>(value); }
    template<typename DataSetIdentifierT = Aws::String>
    LayerMapVisual& WithDataSetIdentifier(DataSetIdentifierT&& value) { SetDataSetIdentifier(std::forward<DataSetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alt text for the visual.</p>
     */
    inline const Aws::String& GetVisualContentAltText() const { return m_visualContentAltText; }
    inline bool VisualContentAltTextHasBeenSet() const { return m_visualContentAltTextHasBeenSet; }
    template<typename VisualContentAltTextT = Aws::String>
    void SetVisualContentAltText(VisualContentAltTextT&& value) { m_visualContentAltTextHasBeenSet = true; m_visualContentAltText = std::forward<VisualContentAltTextT>(value); }
    template<typename VisualContentAltTextT = Aws::String>
    LayerMapVisual& WithVisualContentAltText(VisualContentAltTextT&& value) { SetVisualContentAltText(std::forward<VisualContentAltTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    GeospatialLayerMapConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;

    Aws::String m_visualContentAltText;
    bool m_visualContentAltTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
