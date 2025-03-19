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
    AWS_QUICKSIGHT_API TopicIR() = default;
    AWS_QUICKSIGHT_API TopicIR(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIR& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metrics for the <code>TopicIR</code>.</p>
     */
    inline const Aws::Vector<TopicIRMetric>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<TopicIRMetric>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<TopicIRMetric>>
    TopicIR& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = TopicIRMetric>
    TopicIR& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The GroupBy list for the <code>TopicIR</code>.</p>
     */
    inline const Aws::Vector<TopicIRGroupBy>& GetGroupByList() const { return m_groupByList; }
    inline bool GroupByListHasBeenSet() const { return m_groupByListHasBeenSet; }
    template<typename GroupByListT = Aws::Vector<TopicIRGroupBy>>
    void SetGroupByList(GroupByListT&& value) { m_groupByListHasBeenSet = true; m_groupByList = std::forward<GroupByListT>(value); }
    template<typename GroupByListT = Aws::Vector<TopicIRGroupBy>>
    TopicIR& WithGroupByList(GroupByListT&& value) { SetGroupByList(std::forward<GroupByListT>(value)); return *this;}
    template<typename GroupByListT = TopicIRGroupBy>
    TopicIR& AddGroupByList(GroupByListT&& value) { m_groupByListHasBeenSet = true; m_groupByList.emplace_back(std::forward<GroupByListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters for the <code>TopicIR</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<TopicIRFilterOption>>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Aws::Vector<TopicIRFilterOption>>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Aws::Vector<TopicIRFilterOption>>>
    TopicIR& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Aws::Vector<TopicIRFilterOption>>
    TopicIR& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sort for the <code>TopicIR</code>.</p>
     */
    inline const TopicSortClause& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = TopicSortClause>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = TopicSortClause>
    TopicIR& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contribution analysis for the <code>TopicIR</code>.</p>
     */
    inline const TopicIRContributionAnalysis& GetContributionAnalysis() const { return m_contributionAnalysis; }
    inline bool ContributionAnalysisHasBeenSet() const { return m_contributionAnalysisHasBeenSet; }
    template<typename ContributionAnalysisT = TopicIRContributionAnalysis>
    void SetContributionAnalysis(ContributionAnalysisT&& value) { m_contributionAnalysisHasBeenSet = true; m_contributionAnalysis = std::forward<ContributionAnalysisT>(value); }
    template<typename ContributionAnalysisT = TopicIRContributionAnalysis>
    TopicIR& WithContributionAnalysis(ContributionAnalysisT&& value) { SetContributionAnalysis(std::forward<ContributionAnalysisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual for the <code>TopicIR</code>.</p>
     */
    inline const VisualOptions& GetVisual() const { return m_visual; }
    inline bool VisualHasBeenSet() const { return m_visualHasBeenSet; }
    template<typename VisualT = VisualOptions>
    void SetVisual(VisualT&& value) { m_visualHasBeenSet = true; m_visual = std::forward<VisualT>(value); }
    template<typename VisualT = VisualOptions>
    TopicIR& WithVisual(VisualT&& value) { SetVisual(std::forward<VisualT>(value)); return *this;}
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
