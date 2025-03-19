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
    AWS_RESILIENCEHUB_API ScoringComponentResiliencyScore() = default;
    AWS_RESILIENCEHUB_API ScoringComponentResiliencyScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ScoringComponentResiliencyScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of recommendations that were excluded from the assessment.</p> <p>For
     * example, if the <code>excludedCount</code> for Alarms coverage scoring component
     * is 7, it indicates that 7 Amazon CloudWatch alarms are excluded from the
     * assessment.</p>
     */
    inline long long GetExcludedCount() const { return m_excludedCount; }
    inline bool ExcludedCountHasBeenSet() const { return m_excludedCountHasBeenSet; }
    inline void SetExcludedCount(long long value) { m_excludedCountHasBeenSet = true; m_excludedCount = value; }
    inline ScoringComponentResiliencyScore& WithExcludedCount(long long value) { SetExcludedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of recommendations that must be implemented to obtain the maximum
     * possible score for the scoring component. For SOPs, alarms, and tests, these are
     * the number of recommendations that must be implemented. For compliance, these
     * are the number of Application Components that have breached the resiliency
     * policy.</p> <p>For example, if the <code>outstandingCount</code> for Alarms
     * coverage scoring component is 5, it indicates that 5 Amazon CloudWatch alarms
     * need to be implemented to achieve the maximum possible score.</p>
     */
    inline long long GetOutstandingCount() const { return m_outstandingCount; }
    inline bool OutstandingCountHasBeenSet() const { return m_outstandingCountHasBeenSet; }
    inline void SetOutstandingCount(long long value) { m_outstandingCountHasBeenSet = true; m_outstandingCount = value; }
    inline ScoringComponentResiliencyScore& WithOutstandingCount(long long value) { SetOutstandingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum possible score that can be obtained for the scoring component. </p>
     * <p>For example, if the <code>possibleScore</code> is 20 points, it indicates the
     * maximum possible score you can achieve for the scoring component when you run a
     * new assessment after implementing all the Resilience Hub recommendations.</p>
     */
    inline double GetPossibleScore() const { return m_possibleScore; }
    inline bool PossibleScoreHasBeenSet() const { return m_possibleScoreHasBeenSet; }
    inline void SetPossibleScore(double value) { m_possibleScoreHasBeenSet = true; m_possibleScore = value; }
    inline ScoringComponentResiliencyScore& WithPossibleScore(double value) { SetPossibleScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resiliency score points given for the scoring component. The score is always
     * less than or equal to the <code>possibleScore</code>.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline ScoringComponentResiliencyScore& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    long long m_excludedCount{0};
    bool m_excludedCountHasBeenSet = false;

    long long m_outstandingCount{0};
    bool m_outstandingCountHasBeenSet = false;

    double m_possibleScore{0.0};
    bool m_possibleScoreHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
