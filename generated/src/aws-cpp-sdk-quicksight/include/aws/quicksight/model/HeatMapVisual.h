﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/HeatMapConfiguration.h>
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
   * <p>A heat map.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
   * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HeatMapVisual">AWS
   * API Reference</a></p>
   */
  class HeatMapVisual
  {
  public:
    AWS_QUICKSIGHT_API HeatMapVisual();
    AWS_QUICKSIGHT_API HeatMapVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeatMapVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline HeatMapVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline HeatMapVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline HeatMapVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline HeatMapVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}
    inline HeatMapVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline HeatMapVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}
    inline HeatMapVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a heat map.</p>
     */
    inline const HeatMapConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }
    inline void SetChartConfiguration(const HeatMapConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }
    inline void SetChartConfiguration(HeatMapConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }
    inline HeatMapVisual& WithChartConfiguration(const HeatMapConfiguration& value) { SetChartConfiguration(value); return *this;}
    inline HeatMapVisual& WithChartConfiguration(HeatMapConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column hierarchy that is used during drill-downs and drill-ups.</p>
     */
    inline const Aws::Vector<ColumnHierarchy>& GetColumnHierarchies() const{ return m_columnHierarchies; }
    inline bool ColumnHierarchiesHasBeenSet() const { return m_columnHierarchiesHasBeenSet; }
    inline void SetColumnHierarchies(const Aws::Vector<ColumnHierarchy>& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies = value; }
    inline void SetColumnHierarchies(Aws::Vector<ColumnHierarchy>&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies = std::move(value); }
    inline HeatMapVisual& WithColumnHierarchies(const Aws::Vector<ColumnHierarchy>& value) { SetColumnHierarchies(value); return *this;}
    inline HeatMapVisual& WithColumnHierarchies(Aws::Vector<ColumnHierarchy>&& value) { SetColumnHierarchies(std::move(value)); return *this;}
    inline HeatMapVisual& AddColumnHierarchies(const ColumnHierarchy& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies.push_back(value); return *this; }
    inline HeatMapVisual& AddColumnHierarchies(ColumnHierarchy&& value) { m_columnHierarchiesHasBeenSet = true; m_columnHierarchies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<VisualCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<VisualCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline HeatMapVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}
    inline HeatMapVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}
    inline HeatMapVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline HeatMapVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    HeatMapConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    Aws::Vector<ColumnHierarchy> m_columnHierarchies;
    bool m_columnHierarchiesHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
