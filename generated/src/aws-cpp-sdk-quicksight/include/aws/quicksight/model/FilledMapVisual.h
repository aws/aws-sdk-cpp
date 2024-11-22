/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/FilledMapConfiguration.h>
#include <aws/quicksight/model/FilledMapConditionalFormatting.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnHierarchy.h>
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
   * <p>A filled map.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
   * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapVisual">AWS
   * API Reference</a></p>
   */
  class FilledMapVisual
  {
  public:
    AWS_QUICKSIGHT_API FilledMapVisual();
    AWS_QUICKSIGHT_API FilledMapVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline FilledMapVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline FilledMapVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline FilledMapVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline FilledMapVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}
    inline FilledMapVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline FilledMapVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}
    inline FilledMapVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the visual.</p>
     */
    inline const FilledMapConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    inline void SetChartConfiguration(const FilledMapConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }
    inline void SetChartConfiguration(FilledMapConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }
    inline FilledMapVisual& WithChartConfiguration(const FilledMapConfiguration& value) { SetChartConfiguration(value); return *this;}
    inline FilledMapVisual& WithChartConfiguration(FilledMapConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting of a <code>FilledMapVisual</code>.</p>
     */
    inline const FilledMapConditionalFormatting& GetConditionalFormatting() const{ return m_conditionalFormatting; }
    inline bool ConditionalFormattingHasBeenSet() const { return m_conditionalFormattingHasBeenSet; }
    inline void SetConditionalFormatting(const FilledMapConditionalFormatting& value) { m_conditionalFormattingHasBeenSet = true; m_conditionalFormatting = value; }
    inline void SetConditionalFormatting(FilledMapConditionalFormatting&& value) { m_conditionalFormattingHasBeenSet = true; m_conditionalFormatting = std::move(value); }
    inline FilledMapVisual& WithConditionalFormatting(const FilledMapConditionalFormatting& value) { SetConditionalFormatting(value); return *this;}
    inline FilledMapVisual& WithConditionalFormatting(FilledMapConditionalFormatting&& value) { SetConditionalFormatting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column hierarchy that is used during drill-downs and drill-ups.</p>
     */
    inline const Aws::Vector<ColumnHierarchy>& GetColumnHierarchies() const{ return m_columnHierarchies; }
    inline bool ColumnHierarchiesHasBeenSet() const { return m_columnHierarchiesHasBeenSet; }
    inline void SetColumnHierarchies(const Aws::Vector<ColumnHierarchy>& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies = value; }
    inline void SetColumnHierarchies(Aws::Vector<ColumnHierarchy>&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies = std::move(value); }
    inline FilledMapVisual& WithColumnHierarchies(const Aws::Vector<ColumnHierarchy>& value) { SetColumnHierarchies(value); return *this;}
    inline FilledMapVisual& WithColumnHierarchies(Aws::Vector<ColumnHierarchy>&& value) { SetColumnHierarchies(std::move(value)); return *this;}
    inline FilledMapVisual& AddColumnHierarchies(const ColumnHierarchy& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies.push_back(value); return *this; }
    inline FilledMapVisual& AddColumnHierarchies(ColumnHierarchy&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<VisualCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<VisualCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline FilledMapVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}
    inline FilledMapVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}
    inline FilledMapVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline FilledMapVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
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
    inline FilledMapVisual& WithVisualContentAltText(const Aws::String& value) { SetVisualContentAltText(value); return *this;}
    inline FilledMapVisual& WithVisualContentAltText(Aws::String&& value) { SetVisualContentAltText(std::move(value)); return *this;}
    inline FilledMapVisual& WithVisualContentAltText(const char* value) { SetVisualContentAltText(value); return *this;}
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    FilledMapConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    FilledMapConditionalFormatting m_conditionalFormatting;
    bool m_conditionalFormattingHasBeenSet = false;

    Aws::Vector<ColumnHierarchy> m_columnHierarchies;
    bool m_columnHierarchiesHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_visualContentAltText;
    bool m_visualContentAltTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
