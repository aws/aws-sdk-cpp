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
    AWS_QUICKSIGHT_API LayerMapVisual();
    AWS_QUICKSIGHT_API LayerMapVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LayerMapVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the visual.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }
    inline LayerMapVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline LayerMapVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline LayerMapVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline LayerMapVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}
    inline LayerMapVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline LayerMapVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}
    inline LayerMapVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the visual.</p>
     */
    inline const GeospatialLayerMapConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    inline void SetChartConfiguration(const GeospatialLayerMapConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }
    inline void SetChartConfiguration(GeospatialLayerMapConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }
    inline LayerMapVisual& WithChartConfiguration(const GeospatialLayerMapConfiguration& value) { SetChartConfiguration(value); return *this;}
    inline LayerMapVisual& WithChartConfiguration(GeospatialLayerMapConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset that is used to create the layer map visual. You can't create a
     * visual without a dataset.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const{ return m_dataSetIdentifier; }
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }
    inline void SetDataSetIdentifier(const Aws::String& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = value; }
    inline void SetDataSetIdentifier(Aws::String&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::move(value); }
    inline void SetDataSetIdentifier(const char* value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier.assign(value); }
    inline LayerMapVisual& WithDataSetIdentifier(const Aws::String& value) { SetDataSetIdentifier(value); return *this;}
    inline LayerMapVisual& WithDataSetIdentifier(Aws::String&& value) { SetDataSetIdentifier(std::move(value)); return *this;}
    inline LayerMapVisual& WithDataSetIdentifier(const char* value) { SetDataSetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alt text for the visual.</p>
     */
    inline const Aws::String& GetVisualContentAltText() const{ return m_visualContentAltText; }
    inline bool VisualContentAltTextHasBeenSet() const { return m_visualContentAltTextHasBeenSet; }
    inline void SetVisualContentAltText(const Aws::String& value) { m_visualContentAltTextHasBeenSet = true; m_visualContentAltText = value; }
    inline void SetVisualContentAltText(Aws::String&& value) { m_visualContentAltTextHasBeenSet = true; m_visualContentAltText = std::move(value); }
    inline void SetVisualContentAltText(const char* value) { m_visualContentAltTextHasBeenSet = true; m_visualContentAltText.assign(value); }
    inline LayerMapVisual& WithVisualContentAltText(const Aws::String& value) { SetVisualContentAltText(value); return *this;}
    inline LayerMapVisual& WithVisualContentAltText(Aws::String&& value) { SetVisualContentAltText(std::move(value)); return *this;}
    inline LayerMapVisual& WithVisualContentAltText(const char* value) { SetVisualContentAltText(value); return *this;}
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
