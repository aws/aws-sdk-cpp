/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>

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
namespace TrustedAdvisor
{
namespace Model
{

  /**
   * <p>Cost optimizing aggregates for a Recommendation</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationCostOptimizingAggregates">AWS
   * API Reference</a></p>
   */
  class RecommendationCostOptimizingAggregates
  {
  public:
    AWS_TRUSTEDADVISOR_API RecommendationCostOptimizingAggregates();
    AWS_TRUSTEDADVISOR_API RecommendationCostOptimizingAggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationCostOptimizingAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The estimated monthly savings</p>
     */
    inline double GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }

    /**
     * <p>The estimated monthly savings</p>
     */
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }

    /**
     * <p>The estimated monthly savings</p>
     */
    inline void SetEstimatedMonthlySavings(double value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }

    /**
     * <p>The estimated monthly savings</p>
     */
    inline RecommendationCostOptimizingAggregates& WithEstimatedMonthlySavings(double value) { SetEstimatedMonthlySavings(value); return *this;}


    /**
     * <p>The estimated percently monthly savings</p>
     */
    inline double GetEstimatedPercentMonthlySavings() const{ return m_estimatedPercentMonthlySavings; }

    /**
     * <p>The estimated percently monthly savings</p>
     */
    inline bool EstimatedPercentMonthlySavingsHasBeenSet() const { return m_estimatedPercentMonthlySavingsHasBeenSet; }

    /**
     * <p>The estimated percently monthly savings</p>
     */
    inline void SetEstimatedPercentMonthlySavings(double value) { m_estimatedPercentMonthlySavingsHasBeenSet = true; m_estimatedPercentMonthlySavings = value; }

    /**
     * <p>The estimated percently monthly savings</p>
     */
    inline RecommendationCostOptimizingAggregates& WithEstimatedPercentMonthlySavings(double value) { SetEstimatedPercentMonthlySavings(value); return *this;}

  private:

    double m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    double m_estimatedPercentMonthlySavings;
    bool m_estimatedPercentMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
