/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/TableConfiguration.h>
#include <aws/quicksight/model/TableConditionalFormatting.h>
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
   * <p>A table visual.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
   * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableVisual">AWS
   * API Reference</a></p>
   */
  class TableVisual
  {
  public:
    AWS_QUICKSIGHT_API TableVisual();
    AWS_QUICKSIGHT_API TableVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers..</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }
    inline TableVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline TableVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline TableVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline TableVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}
    inline TableVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline TableVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}
    inline TableVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the visual.</p>
     */
    inline const TableConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    inline void SetChartConfiguration(const TableConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }
    inline void SetChartConfiguration(TableConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }
    inline TableVisual& WithChartConfiguration(const TableConfiguration& value) { SetChartConfiguration(value); return *this;}
    inline TableVisual& WithChartConfiguration(TableConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting for a <code>PivotTableVisual</code>.</p>
     */
    inline const TableConditionalFormatting& GetConditionalFormatting() const{ return m_conditionalFormatting; }
    inline bool ConditionalFormattingHasBeenSet() const { return m_conditionalFormattingHasBeenSet; }
    inline void SetConditionalFormatting(const TableConditionalFormatting& value) { m_conditionalFormattingHasBeenSet = true; m_conditionalFormatting = value; }
    inline void SetConditionalFormatting(TableConditionalFormatting&& value) { m_conditionalFormattingHasBeenSet = true; m_conditionalFormatting = std::move(value); }
    inline TableVisual& WithConditionalFormatting(const TableConditionalFormatting& value) { SetConditionalFormatting(value); return *this;}
    inline TableVisual& WithConditionalFormatting(TableConditionalFormatting&& value) { SetConditionalFormatting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<VisualCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<VisualCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline TableVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}
    inline TableVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}
    inline TableVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline TableVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
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
    inline TableVisual& WithVisualContentAltText(const Aws::String& value) { SetVisualContentAltText(value); return *this;}
    inline TableVisual& WithVisualContentAltText(Aws::String&& value) { SetVisualContentAltText(std::move(value)); return *this;}
    inline TableVisual& WithVisualContentAltText(const char* value) { SetVisualContentAltText(value); return *this;}
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    TableConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    TableConditionalFormatting m_conditionalFormatting;
    bool m_conditionalFormattingHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_visualContentAltText;
    bool m_visualContentAltTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
