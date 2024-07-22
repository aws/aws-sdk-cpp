/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TopicSortClause.h>
#include <aws/quicksight/model/TopicIRContributionAnalysis.h>
#include <aws/quicksight/model/VisualOptions.h>
#include <aws/quicksight/model/TopicIRMetric.h>
#include <aws/quicksight/model/TopicIRGroupBy.h>
#include <aws/quicksight/model/TopicIRFilterOption.h>
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
   * <p>The definition for a <code>TopicIR</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicIR">AWS
   * API Reference</a></p>
   */
  class TopicIR
  {
  public:
    AWS_QUICKSIGHT_API TopicIR();
    AWS_QUICKSIGHT_API TopicIR(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIR& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metrics for the <code>TopicIR</code>.</p>
     */
    inline const Aws::Vector<TopicIRMetric>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Vector<TopicIRMetric>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Vector<TopicIRMetric>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline TopicIR& WithMetrics(const Aws::Vector<TopicIRMetric>& value) { SetMetrics(value); return *this;}
    inline TopicIR& WithMetrics(Aws::Vector<TopicIRMetric>&& value) { SetMetrics(std::move(value)); return *this;}
    inline TopicIR& AddMetrics(const TopicIRMetric& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    inline TopicIR& AddMetrics(TopicIRMetric&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The GroupBy list for the <code>TopicIR</code>.</p>
     */
    inline const Aws::Vector<TopicIRGroupBy>& GetGroupByList() const{ return m_groupByList; }
    inline bool GroupByListHasBeenSet() const { return m_groupByListHasBeenSet; }
    inline void SetGroupByList(const Aws::Vector<TopicIRGroupBy>& value) { m_groupByListHasBeenSet = true; m_groupByList = value; }
    inline void SetGroupByList(Aws::Vector<TopicIRGroupBy>&& value) { m_groupByListHasBeenSet = true; m_groupByList = std::move(value); }
    inline TopicIR& WithGroupByList(const Aws::Vector<TopicIRGroupBy>& value) { SetGroupByList(value); return *this;}
    inline TopicIR& WithGroupByList(Aws::Vector<TopicIRGroupBy>&& value) { SetGroupByList(std::move(value)); return *this;}
    inline TopicIR& AddGroupByList(const TopicIRGroupBy& value) { m_groupByListHasBeenSet = true; m_groupByList.push_back(value); return *this; }
    inline TopicIR& AddGroupByList(TopicIRGroupBy&& value) { m_groupByListHasBeenSet = true; m_groupByList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters for the <code>TopicIR</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<TopicIRFilterOption>>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Aws::Vector<TopicIRFilterOption>>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Aws::Vector<TopicIRFilterOption>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline TopicIR& WithFilters(const Aws::Vector<Aws::Vector<TopicIRFilterOption>>& value) { SetFilters(value); return *this;}
    inline TopicIR& WithFilters(Aws::Vector<Aws::Vector<TopicIRFilterOption>>&& value) { SetFilters(std::move(value)); return *this;}
    inline TopicIR& AddFilters(const Aws::Vector<TopicIRFilterOption>& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline TopicIR& AddFilters(Aws::Vector<TopicIRFilterOption>&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sort for the <code>TopicIR</code>.</p>
     */
    inline const TopicSortClause& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const TopicSortClause& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(TopicSortClause&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline TopicIR& WithSort(const TopicSortClause& value) { SetSort(value); return *this;}
    inline TopicIR& WithSort(TopicSortClause&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contribution analysis for the <code>TopicIR</code>.</p>
     */
    inline const TopicIRContributionAnalysis& GetContributionAnalysis() const{ return m_contributionAnalysis; }
    inline bool ContributionAnalysisHasBeenSet() const { return m_contributionAnalysisHasBeenSet; }
    inline void SetContributionAnalysis(const TopicIRContributionAnalysis& value) { m_contributionAnalysisHasBeenSet = true; m_contributionAnalysis = value; }
    inline void SetContributionAnalysis(TopicIRContributionAnalysis&& value) { m_contributionAnalysisHasBeenSet = true; m_contributionAnalysis = std::move(value); }
    inline TopicIR& WithContributionAnalysis(const TopicIRContributionAnalysis& value) { SetContributionAnalysis(value); return *this;}
    inline TopicIR& WithContributionAnalysis(TopicIRContributionAnalysis&& value) { SetContributionAnalysis(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual for the <code>TopicIR</code>.</p>
     */
    inline const VisualOptions& GetVisual() const{ return m_visual; }
    inline bool VisualHasBeenSet() const { return m_visualHasBeenSet; }
    inline void SetVisual(const VisualOptions& value) { m_visualHasBeenSet = true; m_visual = value; }
    inline void SetVisual(VisualOptions&& value) { m_visualHasBeenSet = true; m_visual = std::move(value); }
    inline TopicIR& WithVisual(const VisualOptions& value) { SetVisual(value); return *this;}
    inline TopicIR& WithVisual(VisualOptions&& value) { SetVisual(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TopicIRMetric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Vector<TopicIRGroupBy> m_groupByList;
    bool m_groupByListHasBeenSet = false;

    Aws::Vector<Aws::Vector<TopicIRFilterOption>> m_filters;
    bool m_filtersHasBeenSet = false;

    TopicSortClause m_sort;
    bool m_sortHasBeenSet = false;

    TopicIRContributionAnalysis m_contributionAnalysis;
    bool m_contributionAnalysisHasBeenSet = false;

    VisualOptions m_visual;
    bool m_visualHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
