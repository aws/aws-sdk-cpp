/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/TrustedAdvisorCostOptimizingSummary.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The container for summary information that relates to the category of the
   * Trusted Advisor check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCategorySpecificSummary">AWS
   * API Reference</a></p>
   */
  class TrustedAdvisorCategorySpecificSummary
  {
  public:
    AWS_SUPPORT_API TrustedAdvisorCategorySpecificSummary() = default;
    AWS_SUPPORT_API TrustedAdvisorCategorySpecificSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API TrustedAdvisorCategorySpecificSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The summary information about cost savings for a Trusted Advisor check that
     * is in the Cost Optimizing category.</p>
     */
    inline const TrustedAdvisorCostOptimizingSummary& GetCostOptimizing() const { return m_costOptimizing; }
    inline bool CostOptimizingHasBeenSet() const { return m_costOptimizingHasBeenSet; }
    template<typename CostOptimizingT = TrustedAdvisorCostOptimizingSummary>
    void SetCostOptimizing(CostOptimizingT&& value) { m_costOptimizingHasBeenSet = true; m_costOptimizing = std::forward<CostOptimizingT>(value); }
    template<typename CostOptimizingT = TrustedAdvisorCostOptimizingSummary>
    TrustedAdvisorCategorySpecificSummary& WithCostOptimizing(CostOptimizingT&& value) { SetCostOptimizing(std::forward<CostOptimizingT>(value)); return *this;}
    ///@}
  private:

    TrustedAdvisorCostOptimizingSummary m_costOptimizing;
    bool m_costOptimizingHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
