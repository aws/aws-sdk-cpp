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
 * <p>Specifies the monetize action settings for a rule. When WAF applies this
 * action, it returns an HTTP 402 Payment Required response containing pricing
 * information that the requesting client uses to complete payment and gain access
 * to the resource. This is a terminating action-if the client does not complete
 * the 402 payment flow, the request is blocked. This action is available only for
 * web ACLs associated with Amazon CloudFront distributions. You must configure a
 * <code>MonetizationConfig</code> on the web ACL or rule group before adding rules
 * that use this action. You cannot use the Monetize action for rate-based
 * rules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/MonetizeAction">AWS
 * API Reference</a></p>
 */
class MonetizeAction {
 public:
  AWS_WAFV2_API MonetizeAction() = default;
  AWS_WAFV2_API MonetizeAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API MonetizeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An integer multiplier applied to the base price defined in the web ACL's
   * <code>MonetizationConfig</code>. The effective price for the request is the base
   * price multiplied by this value. Specify as a string. Valid values: 1 to 100.</p>
   */
  inline const Aws::String& GetPriceMultiplier() const { return m_priceMultiplier; }
  inline bool PriceMultiplierHasBeenSet() const { return m_priceMultiplierHasBeenSet; }
  template <typename PriceMultiplierT = Aws::String>
  void SetPriceMultiplier(PriceMultiplierT&& value) {
    m_priceMultiplierHasBeenSet = true;
    m_priceMultiplier = std::forward<PriceMultiplierT>(value);
  }
  template <typename PriceMultiplierT = Aws::String>
  MonetizeAction& WithPriceMultiplier(PriceMultiplierT&& value) {
    SetPriceMultiplier(std::forward<PriceMultiplierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_priceMultiplier;
  bool m_priceMultiplierHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
