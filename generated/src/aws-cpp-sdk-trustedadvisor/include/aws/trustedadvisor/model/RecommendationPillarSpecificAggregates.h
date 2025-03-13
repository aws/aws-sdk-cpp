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
    AWS_TRUSTEDADVISOR_API RecommendationPillarSpecificAggregates() = default;
    AWS_TRUSTEDADVISOR_API RecommendationPillarSpecificAggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationPillarSpecificAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Cost optimizing aggregates</p>
     */
    inline const RecommendationCostOptimizingAggregates& GetCostOptimizing() const { return m_costOptimizing; }
    inline bool CostOptimizingHasBeenSet() const { return m_costOptimizingHasBeenSet; }
    template<typename CostOptimizingT = RecommendationCostOptimizingAggregates>
    void SetCostOptimizing(CostOptimizingT&& value) { m_costOptimizingHasBeenSet = true; m_costOptimizing = std::forward<CostOptimizingT>(value); }
    template<typename CostOptimizingT = RecommendationCostOptimizingAggregates>
    RecommendationPillarSpecificAggregates& WithCostOptimizing(CostOptimizingT&& value) { SetCostOptimizing(std::forward<CostOptimizingT>(value)); return *this;}
    ///@}
  private:

    RecommendationCostOptimizingAggregates m_costOptimizing;
    bool m_costOptimizingHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
