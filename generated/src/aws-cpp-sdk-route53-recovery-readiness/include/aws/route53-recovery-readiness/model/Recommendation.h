/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>Recommendations that are provided to make an application more recovery
   * resilient.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API Recommendation() = default;
    AWS_ROUTE53RECOVERYREADINESS_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline const Aws::String& GetRecommendationText() const { return m_recommendationText; }
    inline bool RecommendationTextHasBeenSet() const { return m_recommendationTextHasBeenSet; }
    template<typename RecommendationTextT = Aws::String>
    void SetRecommendationText(RecommendationTextT&& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = std::forward<RecommendationTextT>(value); }
    template<typename RecommendationTextT = Aws::String>
    Recommendation& WithRecommendationText(RecommendationTextT&& value) { SetRecommendationText(std::forward<RecommendationTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationText;
    bool m_recommendationTextHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
