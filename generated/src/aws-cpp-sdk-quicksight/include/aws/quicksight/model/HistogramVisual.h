/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/HistogramConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualCustomAction.h>
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
   * <p>A histogram.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
   * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HistogramVisual">AWS
   * API Reference</a></p>
   */
  class HistogramVisual
  {
  public:
    AWS_QUICKSIGHT_API HistogramVisual();
    AWS_QUICKSIGHT_API HistogramVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline HistogramVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline HistogramVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline HistogramVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}


    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline HistogramVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline HistogramVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}


    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline HistogramVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline HistogramVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}


    /**
     * <p>The configuration for a <code>HistogramVisual</code>.</p>
     */
    inline const HistogramConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }

    /**
     * <p>The configuration for a <code>HistogramVisual</code>.</p>
     */
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a <code>HistogramVisual</code>.</p>
     */
    inline void SetChartConfiguration(const HistogramConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }

    /**
     * <p>The configuration for a <code>HistogramVisual</code>.</p>
     */
    inline void SetChartConfiguration(HistogramConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }

    /**
     * <p>The configuration for a <code>HistogramVisual</code>.</p>
     */
    inline HistogramVisual& WithChartConfiguration(const HistogramConfiguration& value) { SetChartConfiguration(value); return *this;}

    /**
     * <p>The configuration for a <code>HistogramVisual</code>.</p>
     */
    inline HistogramVisual& WithChartConfiguration(HistogramConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}


    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline void SetActions(const Aws::Vector<VisualCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline void SetActions(Aws::Vector<VisualCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline HistogramVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline HistogramVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline HistogramVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline HistogramVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    HistogramConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
