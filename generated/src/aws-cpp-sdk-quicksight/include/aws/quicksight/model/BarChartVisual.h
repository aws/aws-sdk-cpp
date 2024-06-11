﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/BarChartConfiguration.h>
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
   * <p>A bar chart.</p> <p>The <code>BarChartVisual</code> structure describes a
   * visual that is a member of the bar chart family. The following charts can be
   * described using this structure:</p> <ul> <li> <p>Horizontal bar chart</p> </li>
   * <li> <p>Vertical bar chart</p> </li> <li> <p>Horizontal stacked bar chart</p>
   * </li> <li> <p>Vertical stacked bar chart</p> </li> <li> <p>Horizontal stacked
   * 100% bar chart</p> </li> <li> <p>Vertical stacked 100% bar chart</p> </li> </ul>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
   * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartVisual">AWS
   * API Reference</a></p>
   */
  class BarChartVisual
  {
  public:
    AWS_QUICKSIGHT_API BarChartVisual();
    AWS_QUICKSIGHT_API BarChartVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }
    inline BarChartVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline BarChartVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline BarChartVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline BarChartVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}
    inline BarChartVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline BarChartVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}
    inline BarChartVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the visual.</p>
     */
    inline const BarChartConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    inline void SetChartConfiguration(const BarChartConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }
    inline void SetChartConfiguration(BarChartConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }
    inline BarChartVisual& WithChartConfiguration(const BarChartConfiguration& value) { SetChartConfiguration(value); return *this;}
    inline BarChartVisual& WithChartConfiguration(BarChartConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<VisualCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<VisualCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline BarChartVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}
    inline BarChartVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}
    inline BarChartVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline BarChartVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The column hierarchy that is used during drill-downs and drill-ups.</p>
     */
    inline const Aws::Vector<ColumnHierarchy>& GetColumnHierarchies() const{ return m_columnHierarchies; }
    inline bool ColumnHierarchiesHasBeenSet() const { return m_columnHierarchiesHasBeenSet; }
    inline void SetColumnHierarchies(const Aws::Vector<ColumnHierarchy>& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies = value; }
    inline void SetColumnHierarchies(Aws::Vector<ColumnHierarchy>&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies = std::move(value); }
    inline BarChartVisual& WithColumnHierarchies(const Aws::Vector<ColumnHierarchy>& value) { SetColumnHierarchies(value); return *this;}
    inline BarChartVisual& WithColumnHierarchies(Aws::Vector<ColumnHierarchy>&& value) { SetColumnHierarchies(std::move(value)); return *this;}
    inline BarChartVisual& AddColumnHierarchies(const ColumnHierarchy& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies.push_back(value); return *this; }
    inline BarChartVisual& AddColumnHierarchies(ColumnHierarchy&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    BarChartConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<ColumnHierarchy> m_columnHierarchies;
    bool m_columnHierarchiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
