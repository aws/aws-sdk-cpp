/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/DisallowedFeature.h>

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
 * <p>The operation failed because the specified WAF feature isn't supported by the
 * CloudFront pricing plan associated with the web ACL.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/WAFFeatureNotIncludedInPricingPlanException">AWS
 * API Reference</a></p>
 */
class WAFFeatureNotIncludedInPricingPlanException {
 public:
  AWS_WAFV2_API WAFFeatureNotIncludedInPricingPlanException() = default;
  AWS_WAFV2_API WAFFeatureNotIncludedInPricingPlanException(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API WAFFeatureNotIncludedInPricingPlanException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  WAFFeatureNotIncludedInPricingPlanException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the disallowed WAF features.</p>
   */
  inline const Aws::Vector<DisallowedFeature>& GetDisallowedFeatures() const { return m_disallowedFeatures; }
  inline bool DisallowedFeaturesHasBeenSet() const { return m_disallowedFeaturesHasBeenSet; }
  template <typename DisallowedFeaturesT = Aws::Vector<DisallowedFeature>>
  void SetDisallowedFeatures(DisallowedFeaturesT&& value) {
    m_disallowedFeaturesHasBeenSet = true;
    m_disallowedFeatures = std::forward<DisallowedFeaturesT>(value);
  }
  template <typename DisallowedFeaturesT = Aws::Vector<DisallowedFeature>>
  WAFFeatureNotIncludedInPricingPlanException& WithDisallowedFeatures(DisallowedFeaturesT&& value) {
    SetDisallowedFeatures(std::forward<DisallowedFeaturesT>(value));
    return *this;
  }
  template <typename DisallowedFeaturesT = DisallowedFeature>
  WAFFeatureNotIncludedInPricingPlanException& AddDisallowedFeatures(DisallowedFeaturesT&& value) {
    m_disallowedFeaturesHasBeenSet = true;
    m_disallowedFeatures.emplace_back(std::forward<DisallowedFeaturesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::Vector<DisallowedFeature> m_disallowedFeatures;
  bool m_messageHasBeenSet = false;
  bool m_disallowedFeaturesHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
