/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ContributionAnalysisTimeRanges.h>
#include <aws/quicksight/model/ContributionAnalysisDirection.h>
#include <aws/quicksight/model/ContributionAnalysisSortType.h>
#include <aws/quicksight/model/ContributionAnalysisFactor.h>
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
   * <p>The definition for a <code>TopicIRContributionAnalysis</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicIRContributionAnalysis">AWS
   * API Reference</a></p>
   */
  class TopicIRContributionAnalysis
  {
  public:
    AWS_QUICKSIGHT_API TopicIRContributionAnalysis() = default;
    AWS_QUICKSIGHT_API TopicIRContributionAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRContributionAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The factors for a <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline const Aws::Vector<ContributionAnalysisFactor>& GetFactors() const { return m_factors; }
    inline bool FactorsHasBeenSet() const { return m_factorsHasBeenSet; }
    template<typename FactorsT = Aws::Vector<ContributionAnalysisFactor>>
    void SetFactors(FactorsT&& value) { m_factorsHasBeenSet = true; m_factors = std::forward<FactorsT>(value); }
    template<typename FactorsT = Aws::Vector<ContributionAnalysisFactor>>
    TopicIRContributionAnalysis& WithFactors(FactorsT&& value) { SetFactors(std::forward<FactorsT>(value)); return *this;}
    template<typename FactorsT = ContributionAnalysisFactor>
    TopicIRContributionAnalysis& AddFactors(FactorsT&& value) { m_factorsHasBeenSet = true; m_factors.emplace_back(std::forward<FactorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time ranges for the <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline const ContributionAnalysisTimeRanges& GetTimeRanges() const { return m_timeRanges; }
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }
    template<typename TimeRangesT = ContributionAnalysisTimeRanges>
    void SetTimeRanges(TimeRangesT&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::forward<TimeRangesT>(value); }
    template<typename TimeRangesT = ContributionAnalysisTimeRanges>
    TopicIRContributionAnalysis& WithTimeRanges(TimeRangesT&& value) { SetTimeRanges(std::forward<TimeRangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction for the <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline ContributionAnalysisDirection GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(ContributionAnalysisDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline TopicIRContributionAnalysis& WithDirection(ContributionAnalysisDirection value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort type for the <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline ContributionAnalysisSortType GetSortType() const { return m_sortType; }
    inline bool SortTypeHasBeenSet() const { return m_sortTypeHasBeenSet; }
    inline void SetSortType(ContributionAnalysisSortType value) { m_sortTypeHasBeenSet = true; m_sortType = value; }
    inline TopicIRContributionAnalysis& WithSortType(ContributionAnalysisSortType value) { SetSortType(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContributionAnalysisFactor> m_factors;
    bool m_factorsHasBeenSet = false;

    ContributionAnalysisTimeRanges m_timeRanges;
    bool m_timeRangesHasBeenSet = false;

    ContributionAnalysisDirection m_direction{ContributionAnalysisDirection::NOT_SET};
    bool m_directionHasBeenSet = false;

    ContributionAnalysisSortType m_sortType{ContributionAnalysisSortType::NOT_SET};
    bool m_sortTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
