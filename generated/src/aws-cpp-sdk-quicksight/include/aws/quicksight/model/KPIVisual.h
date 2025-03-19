/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/KPIConfiguration.h>
#include <aws/quicksight/model/KPIConditionalFormatting.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualCustomAction.h>
#include <aws/quicksight/model/ColumnHierarchy.h>
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
   * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
   * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIVisual">AWS
   * API Reference</a></p>
   */
  class KPIVisual
  {
  public:
    AWS_QUICKSIGHT_API KPIVisual() = default;
    AWS_QUICKSIGHT_API KPIVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline const Aws::String& GetVisualId() const { return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    template<typename VisualIdT = Aws::String>
    void SetVisualId(VisualIdT&& value) { m_visualIdHasBeenSet = true; m_visualId = std::forward<VisualIdT>(value); }
    template<typename VisualIdT = Aws::String>
    KPIVisual& WithVisualId(VisualIdT&& value) { SetVisualId(std::forward<VisualIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline const VisualTitleLabelOptions& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = VisualTitleLabelOptions>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = VisualTitleLabelOptions>
    KPIVisual& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline const VisualSubtitleLabelOptions& GetSubtitle() const { return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    template<typename SubtitleT = VisualSubtitleLabelOptions>
    void SetSubtitle(SubtitleT&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::forward<SubtitleT>(value); }
    template<typename SubtitleT = VisualSubtitleLabelOptions>
    KPIVisual& WithSubtitle(SubtitleT&& value) { SetSubtitle(std::forward<SubtitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a KPI visual.</p>
     */
    inline const KPIConfiguration& GetChartConfiguration() const { return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    template<typename ChartConfigurationT = KPIConfiguration>
    void SetChartConfiguration(ChartConfigurationT&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::forward<ChartConfigurationT>(value); }
    template<typename ChartConfigurationT = KPIConfiguration>
    KPIVisual& WithChartConfiguration(ChartConfigurationT&& value) { SetChartConfiguration(std::forward<ChartConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting of a KPI visual.</p>
     */
    inline const KPIConditionalFormatting& GetConditionalFormatting() const { return m_conditionalFormatting; }
    inline bool ConditionalFormattingHasBeenSet() const { return m_conditionalFormattingHasBeenSet; }
    template<typename ConditionalFormattingT = KPIConditionalFormatting>
    void SetConditionalFormatting(ConditionalFormattingT&& value) { m_conditionalFormattingHasBeenSet = true; m_conditionalFormatting = std::forward<ConditionalFormattingT>(value); }
    template<typename ConditionalFormattingT = KPIConditionalFormatting>
    KPIVisual& WithConditionalFormatting(ConditionalFormattingT&& value) { SetConditionalFormatting(std::forward<ConditionalFormattingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<VisualCustomAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<VisualCustomAction>>
    KPIVisual& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = VisualCustomAction>
    KPIVisual& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The column hierarchy that is used during drill-downs and drill-ups.</p>
     */
    inline const Aws::Vector<ColumnHierarchy>& GetColumnHierarchies() const { return m_columnHierarchies; }
    inline bool ColumnHierarchiesHasBeenSet() const { return m_columnHierarchiesHasBeenSet; }
    template<typename ColumnHierarchiesT = Aws::Vector<ColumnHierarchy>>
    void SetColumnHierarchies(ColumnHierarchiesT&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies = std::forward<ColumnHierarchiesT>(value); }
    template<typename ColumnHierarchiesT = Aws::Vector<ColumnHierarchy>>
    KPIVisual& WithColumnHierarchies(ColumnHierarchiesT&& value) { SetColumnHierarchies(std::forward<ColumnHierarchiesT>(value)); return *this;}
    template<typename ColumnHierarchiesT = ColumnHierarchy>
    KPIVisual& AddColumnHierarchies(ColumnHierarchiesT&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies.emplace_back(std::forward<ColumnHierarchiesT>(value)); return *this; }
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
    KPIVisual& WithVisualContentAltText(VisualContentAltTextT&& value) { SetVisualContentAltText(std::forward<VisualContentAltTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    KPIConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    KPIConditionalFormatting m_conditionalFormatting;
    bool m_conditionalFormattingHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<ColumnHierarchy> m_columnHierarchies;
    bool m_columnHierarchiesHasBeenSet = false;

    Aws::String m_visualContentAltText;
    bool m_visualContentAltTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
