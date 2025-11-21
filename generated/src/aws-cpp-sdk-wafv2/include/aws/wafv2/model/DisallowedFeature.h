/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>A WAF feature that is not supported by the CloudFront pricing plan associated
 * with the web ACL.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DisallowedFeature">AWS
 * API Reference</a></p>
 */
class DisallowedFeature {
 public:
  AWS_WAFV2_API DisallowedFeature() = default;
  AWS_WAFV2_API DisallowedFeature(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API DisallowedFeature& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the disallowed WAF feature.</p>
   */
  inline const Aws::String& GetFeature() const { return m_feature; }
  inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
  template <typename FeatureT = Aws::String>
  void SetFeature(FeatureT&& value) {
    m_featureHasBeenSet = true;
    m_feature = std::forward<FeatureT>(value);
  }
  template <typename FeatureT = Aws::String>
  DisallowedFeature& WithFeature(FeatureT&& value) {
    SetFeature(std::forward<FeatureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudFront pricing plan required to use the WAF feature.</p>
   */
  inline const Aws::String& GetRequiredPricingPlan() const { return m_requiredPricingPlan; }
  inline bool RequiredPricingPlanHasBeenSet() const { return m_requiredPricingPlanHasBeenSet; }
  template <typename RequiredPricingPlanT = Aws::String>
  void SetRequiredPricingPlan(RequiredPricingPlanT&& value) {
    m_requiredPricingPlanHasBeenSet = true;
    m_requiredPricingPlan = std::forward<RequiredPricingPlanT>(value);
  }
  template <typename RequiredPricingPlanT = Aws::String>
  DisallowedFeature& WithRequiredPricingPlan(RequiredPricingPlanT&& value) {
    SetRequiredPricingPlan(std::forward<RequiredPricingPlanT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_feature;
  bool m_featureHasBeenSet = false;

  Aws::String m_requiredPricingPlan;
  bool m_requiredPricingPlanHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
