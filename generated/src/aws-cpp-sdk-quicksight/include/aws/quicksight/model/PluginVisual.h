/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/PluginVisualConfiguration.h>
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
   * <p>A flexible visualization type that allows engineers to create new custom
   * charts in Amazon QuickSight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PluginVisual">AWS
   * API Reference</a></p>
   */
  class PluginVisual
  {
  public:
    AWS_QUICKSIGHT_API PluginVisual();
    AWS_QUICKSIGHT_API PluginVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the visual that you want to use.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }
    inline PluginVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline PluginVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline PluginVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that reflects the plugin and version.</p>
     */
    inline const Aws::String& GetPluginArn() const{ return m_pluginArn; }
    inline bool PluginArnHasBeenSet() const { return m_pluginArnHasBeenSet; }
    inline void SetPluginArn(const Aws::String& value) { m_pluginArnHasBeenSet = true; m_pluginArn = value; }
    inline void SetPluginArn(Aws::String&& value) { m_pluginArnHasBeenSet = true; m_pluginArn = std::move(value); }
    inline void SetPluginArn(const char* value) { m_pluginArnHasBeenSet = true; m_pluginArn.assign(value); }
    inline PluginVisual& WithPluginArn(const Aws::String& value) { SetPluginArn(value); return *this;}
    inline PluginVisual& WithPluginArn(Aws::String&& value) { SetPluginArn(std::move(value)); return *this;}
    inline PluginVisual& WithPluginArn(const char* value) { SetPluginArn(value); return *this;}
    ///@}

    ///@{
    
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline PluginVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}
    inline PluginVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline PluginVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}
    inline PluginVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the plugin field wells and their persisted properties. </p>
     */
    inline const PluginVisualConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    inline void SetChartConfiguration(const PluginVisualConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }
    inline void SetChartConfiguration(PluginVisualConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }
    inline PluginVisual& WithChartConfiguration(const PluginVisualConfiguration& value) { SetChartConfiguration(value); return *this;}
    inline PluginVisual& WithChartConfiguration(PluginVisualConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}
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
    inline PluginVisual& WithVisualContentAltText(const Aws::String& value) { SetVisualContentAltText(value); return *this;}
    inline PluginVisual& WithVisualContentAltText(Aws::String&& value) { SetVisualContentAltText(std::move(value)); return *this;}
    inline PluginVisual& WithVisualContentAltText(const char* value) { SetVisualContentAltText(value); return *this;}
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    Aws::String m_pluginArn;
    bool m_pluginArnHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    PluginVisualConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    Aws::String m_visualContentAltText;
    bool m_visualContentAltTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
