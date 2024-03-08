/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/RecommendationCostOptimizingAggregates.h>
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
namespace TrustedAdvisor
{
namespace Model
{

  /**
   * <p>Recommendation pillar aggregates</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationPillarSpecificAggregates">AWS
   * API Reference</a></p>
   */
  class RecommendationPillarSpecificAggregates
  {
  public:
    AWS_TRUSTEDADVISOR_API RecommendationPillarSpecificAggregates();
    AWS_TRUSTEDADVISOR_API RecommendationPillarSpecificAggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationPillarSpecificAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Cost optimizing aggregates</p>
     */
    inline const RecommendationCostOptimizingAggregates& GetCostOptimizing() const{ return m_costOptimizing; }

    /**
     * <p>Cost optimizing aggregates</p>
     */
    inline bool CostOptimizingHasBeenSet() const { return m_costOptimizingHasBeenSet; }

    /**
     * <p>Cost optimizing aggregates</p>
     */
    inline void SetCostOptimizing(const RecommendationCostOptimizingAggregates& value) { m_costOptimizingHasBeenSet = true; m_costOptimizing = value; }

    /**
     * <p>Cost optimizing aggregates</p>
     */
    inline void SetCostOptimizing(RecommendationCostOptimizingAggregates&& value) { m_costOptimizingHasBeenSet = true; m_costOptimizing = std::move(value); }

    /**
     * <p>Cost optimizing aggregates</p>
     */
    inline RecommendationPillarSpecificAggregates& WithCostOptimizing(const RecommendationCostOptimizingAggregates& value) { SetCostOptimizing(value); return *this;}

    /**
     * <p>Cost optimizing aggregates</p>
     */
    inline RecommendationPillarSpecificAggregates& WithCostOptimizing(RecommendationCostOptimizingAggregates&& value) { SetCostOptimizing(std::move(value)); return *this;}

  private:

    RecommendationCostOptimizingAggregates m_costOptimizing;
    bool m_costOptimizingHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
