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
    AWS_QUICKSIGHT_API TopicIRContributionAnalysis();
    AWS_QUICKSIGHT_API TopicIRContributionAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRContributionAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The factors for a <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline const Aws::Vector<ContributionAnalysisFactor>& GetFactors() const{ return m_factors; }
    inline bool FactorsHasBeenSet() const { return m_factorsHasBeenSet; }
    inline void SetFactors(const Aws::Vector<ContributionAnalysisFactor>& value) { m_factorsHasBeenSet = true; m_factors = value; }
    inline void SetFactors(Aws::Vector<ContributionAnalysisFactor>&& value) { m_factorsHasBeenSet = true; m_factors = std::move(value); }
    inline TopicIRContributionAnalysis& WithFactors(const Aws::Vector<ContributionAnalysisFactor>& value) { SetFactors(value); return *this;}
    inline TopicIRContributionAnalysis& WithFactors(Aws::Vector<ContributionAnalysisFactor>&& value) { SetFactors(std::move(value)); return *this;}
    inline TopicIRContributionAnalysis& AddFactors(const ContributionAnalysisFactor& value) { m_factorsHasBeenSet = true; m_factors.push_back(value); return *this; }
    inline TopicIRContributionAnalysis& AddFactors(ContributionAnalysisFactor&& value) { m_factorsHasBeenSet = true; m_factors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time ranges for the <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline const ContributionAnalysisTimeRanges& GetTimeRanges() const{ return m_timeRanges; }
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }
    inline void SetTimeRanges(const ContributionAnalysisTimeRanges& value) { m_timeRangesHasBeenSet = true; m_timeRanges = value; }
    inline void SetTimeRanges(ContributionAnalysisTimeRanges&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::move(value); }
    inline TopicIRContributionAnalysis& WithTimeRanges(const ContributionAnalysisTimeRanges& value) { SetTimeRanges(value); return *this;}
    inline TopicIRContributionAnalysis& WithTimeRanges(ContributionAnalysisTimeRanges&& value) { SetTimeRanges(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction for the <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline const ContributionAnalysisDirection& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const ContributionAnalysisDirection& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(ContributionAnalysisDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline TopicIRContributionAnalysis& WithDirection(const ContributionAnalysisDirection& value) { SetDirection(value); return *this;}
    inline TopicIRContributionAnalysis& WithDirection(ContributionAnalysisDirection&& value) { SetDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort type for the <code>TopicIRContributionAnalysis</code>.</p>
     */
    inline const ContributionAnalysisSortType& GetSortType() const{ return m_sortType; }
    inline bool SortTypeHasBeenSet() const { return m_sortTypeHasBeenSet; }
    inline void SetSortType(const ContributionAnalysisSortType& value) { m_sortTypeHasBeenSet = true; m_sortType = value; }
    inline void SetSortType(ContributionAnalysisSortType&& value) { m_sortTypeHasBeenSet = true; m_sortType = std::move(value); }
    inline TopicIRContributionAnalysis& WithSortType(const ContributionAnalysisSortType& value) { SetSortType(value); return *this;}
    inline TopicIRContributionAnalysis& WithSortType(ContributionAnalysisSortType&& value) { SetSortType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContributionAnalysisFactor> m_factors;
    bool m_factorsHasBeenSet = false;

    ContributionAnalysisTimeRanges m_timeRanges;
    bool m_timeRangesHasBeenSet = false;

    ContributionAnalysisDirection m_direction;
    bool m_directionHasBeenSet = false;

    ContributionAnalysisSortType m_sortType;
    bool m_sortTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
