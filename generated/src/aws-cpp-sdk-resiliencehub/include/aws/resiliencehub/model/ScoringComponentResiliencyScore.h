/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Resiliency score of each scoring component. For more information about
   * scoring component, see <a
   * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/calculate-score.html">Calculating
   * resiliency score</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ScoringComponentResiliencyScore">AWS
   * API Reference</a></p>
   */
  class ScoringComponentResiliencyScore
  {
  public:
    AWS_RESILIENCEHUB_API ScoringComponentResiliencyScore();
    AWS_RESILIENCEHUB_API ScoringComponentResiliencyScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ScoringComponentResiliencyScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of recommendations that were excluded from the assessment.</p> <p>For
     * example, if the <code>Excluded count</code> for Resilience Hub recommended
     * Amazon CloudWatch alarms is 7, it indicates that 7 Amazon CloudWatch alarms are
     * excluded from the assessment.</p>
     */
    inline long long GetExcludedCount() const{ return m_excludedCount; }

    /**
     * <p>Number of recommendations that were excluded from the assessment.</p> <p>For
     * example, if the <code>Excluded count</code> for Resilience Hub recommended
     * Amazon CloudWatch alarms is 7, it indicates that 7 Amazon CloudWatch alarms are
     * excluded from the assessment.</p>
     */
    inline bool ExcludedCountHasBeenSet() const { return m_excludedCountHasBeenSet; }

    /**
     * <p>Number of recommendations that were excluded from the assessment.</p> <p>For
     * example, if the <code>Excluded count</code> for Resilience Hub recommended
     * Amazon CloudWatch alarms is 7, it indicates that 7 Amazon CloudWatch alarms are
     * excluded from the assessment.</p>
     */
    inline void SetExcludedCount(long long value) { m_excludedCountHasBeenSet = true; m_excludedCount = value; }

    /**
     * <p>Number of recommendations that were excluded from the assessment.</p> <p>For
     * example, if the <code>Excluded count</code> for Resilience Hub recommended
     * Amazon CloudWatch alarms is 7, it indicates that 7 Amazon CloudWatch alarms are
     * excluded from the assessment.</p>
     */
    inline ScoringComponentResiliencyScore& WithExcludedCount(long long value) { SetExcludedCount(value); return *this;}


    /**
     * <p>Number of issues that must be resolved to obtain the maximum possible score
     * for the scoring component. For SOPs, alarms, and FIS experiments, these are the
     * number of recommendations that must be implemented. For compliance, it is the
     * number of Application Components that has breached the resiliency policy.</p>
     * <p>For example, if the <code>Outstanding count</code> for Resilience Hub
     * recommended Amazon CloudWatch alarms is 5, it indicates that 5 Amazon CloudWatch
     * alarms must be fixed to achieve the maximum possible score.</p>
     */
    inline long long GetOutstandingCount() const{ return m_outstandingCount; }

    /**
     * <p>Number of issues that must be resolved to obtain the maximum possible score
     * for the scoring component. For SOPs, alarms, and FIS experiments, these are the
     * number of recommendations that must be implemented. For compliance, it is the
     * number of Application Components that has breached the resiliency policy.</p>
     * <p>For example, if the <code>Outstanding count</code> for Resilience Hub
     * recommended Amazon CloudWatch alarms is 5, it indicates that 5 Amazon CloudWatch
     * alarms must be fixed to achieve the maximum possible score.</p>
     */
    inline bool OutstandingCountHasBeenSet() const { return m_outstandingCountHasBeenSet; }

    /**
     * <p>Number of issues that must be resolved to obtain the maximum possible score
     * for the scoring component. For SOPs, alarms, and FIS experiments, these are the
     * number of recommendations that must be implemented. For compliance, it is the
     * number of Application Components that has breached the resiliency policy.</p>
     * <p>For example, if the <code>Outstanding count</code> for Resilience Hub
     * recommended Amazon CloudWatch alarms is 5, it indicates that 5 Amazon CloudWatch
     * alarms must be fixed to achieve the maximum possible score.</p>
     */
    inline void SetOutstandingCount(long long value) { m_outstandingCountHasBeenSet = true; m_outstandingCount = value; }

    /**
     * <p>Number of issues that must be resolved to obtain the maximum possible score
     * for the scoring component. For SOPs, alarms, and FIS experiments, these are the
     * number of recommendations that must be implemented. For compliance, it is the
     * number of Application Components that has breached the resiliency policy.</p>
     * <p>For example, if the <code>Outstanding count</code> for Resilience Hub
     * recommended Amazon CloudWatch alarms is 5, it indicates that 5 Amazon CloudWatch
     * alarms must be fixed to achieve the maximum possible score.</p>
     */
    inline ScoringComponentResiliencyScore& WithOutstandingCount(long long value) { SetOutstandingCount(value); return *this;}


    /**
     * <p>Maximum possible score that can be obtained for the scoring component. If the
     * <code>Possible score</code> is 20 points, it indicates the maximum possible
     * score you can achieve for your application when you run a new assessment after
     * implementing all the Resilience Hub recommendations.</p>
     */
    inline double GetPossibleScore() const{ return m_possibleScore; }

    /**
     * <p>Maximum possible score that can be obtained for the scoring component. If the
     * <code>Possible score</code> is 20 points, it indicates the maximum possible
     * score you can achieve for your application when you run a new assessment after
     * implementing all the Resilience Hub recommendations.</p>
     */
    inline bool PossibleScoreHasBeenSet() const { return m_possibleScoreHasBeenSet; }

    /**
     * <p>Maximum possible score that can be obtained for the scoring component. If the
     * <code>Possible score</code> is 20 points, it indicates the maximum possible
     * score you can achieve for your application when you run a new assessment after
     * implementing all the Resilience Hub recommendations.</p>
     */
    inline void SetPossibleScore(double value) { m_possibleScoreHasBeenSet = true; m_possibleScore = value; }

    /**
     * <p>Maximum possible score that can be obtained for the scoring component. If the
     * <code>Possible score</code> is 20 points, it indicates the maximum possible
     * score you can achieve for your application when you run a new assessment after
     * implementing all the Resilience Hub recommendations.</p>
     */
    inline ScoringComponentResiliencyScore& WithPossibleScore(double value) { SetPossibleScore(value); return *this;}


    /**
     * <p>Resiliency score of your application.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>Resiliency score of your application.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>Resiliency score of your application.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>Resiliency score of your application.</p>
     */
    inline ScoringComponentResiliencyScore& WithScore(double value) { SetScore(value); return *this;}

  private:

    long long m_excludedCount;
    bool m_excludedCountHasBeenSet = false;

    long long m_outstandingCount;
    bool m_outstandingCountHasBeenSet = false;

    double m_possibleScore;
    bool m_possibleScoreHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
