/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/GaugeChartConfiguration.h>
#include <aws/quicksight/model/GaugeChartConditionalFormatting.h>
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
   * <p>A gauge chart.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
   * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartVisual">AWS
   * API Reference</a></p>
   */
  class GaugeChartVisual
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartVisual();
    AWS_QUICKSIGHT_API GaugeChartVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline GaugeChartVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline GaugeChartVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline GaugeChartVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}


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
    inline GaugeChartVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline GaugeChartVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}


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
    inline GaugeChartVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline GaugeChartVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}


    /**
     * <p>The configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }

    /**
     * <p>The configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }

    /**
     * <p>The configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetChartConfiguration(const GaugeChartConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }

    /**
     * <p>The configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetChartConfiguration(GaugeChartConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }

    /**
     * <p>The configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartVisual& WithChartConfiguration(const GaugeChartConfiguration& value) { SetChartConfiguration(value); return *this;}

    /**
     * <p>The configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartVisual& WithChartConfiguration(GaugeChartConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}


    /**
     * <p>The conditional formatting of a <code>GaugeChartVisual</code>.</p>
     */
    inline const GaugeChartConditionalFormatting& GetConditionalFormatting() const{ return m_conditionalFormatting; }

    /**
     * <p>The conditional formatting of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ConditionalFormattingHasBeenSet() const { return m_conditionalFormattingHasBeenSet; }

    /**
     * <p>The conditional formatting of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetConditionalFormatting(const GaugeChartConditionalFormatting& value) { m_conditionalFormattingHasBeenSet = true; m_conditionalFormatting = value; }

    /**
     * <p>The conditional formatting of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetConditionalFormatting(GaugeChartConditionalFormatting&& value) { m_conditionalFormattingHasBeenSet = true; m_conditionalFormatting = std::move(value); }

    /**
     * <p>The conditional formatting of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartVisual& WithConditionalFormatting(const GaugeChartConditionalFormatting& value) { SetConditionalFormatting(value); return *this;}

    /**
     * <p>The conditional formatting of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartVisual& WithConditionalFormatting(GaugeChartConditionalFormatting&& value) { SetConditionalFormatting(std::move(value)); return *this;}


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
    inline GaugeChartVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline GaugeChartVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline GaugeChartVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline GaugeChartVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    GaugeChartConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    GaugeChartConditionalFormatting m_conditionalFormatting;
    bool m_conditionalFormattingHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
