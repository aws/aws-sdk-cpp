/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/QuotePricingType.h>
#include <aws/outposts/model/SubscriptionPricingDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>A pricing option for the specified Outpost.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/PricingOption">AWS
 * API Reference</a></p>
 */
class PricingOption {
 public:
  AWS_OUTPOSTS_API PricingOption() = default;
  AWS_OUTPOSTS_API PricingOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API PricingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of pricing model.</p>
   */
  inline QuotePricingType GetPricingType() const { return m_pricingType; }
  inline bool PricingTypeHasBeenSet() const { return m_pricingTypeHasBeenSet; }
  inline void SetPricingType(QuotePricingType value) {
    m_pricingTypeHasBeenSet = true;
    m_pricingType = value;
  }
  inline PricingOption& WithPricingType(QuotePricingType value) {
    SetPricingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscription pricing details for this pricing option.</p>
   */
  inline const SubscriptionPricingDetails& GetSubscriptionPricingDetails() const { return m_subscriptionPricingDetails; }
  inline bool SubscriptionPricingDetailsHasBeenSet() const { return m_subscriptionPricingDetailsHasBeenSet; }
  template <typename SubscriptionPricingDetailsT = SubscriptionPricingDetails>
  void SetSubscriptionPricingDetails(SubscriptionPricingDetailsT&& value) {
    m_subscriptionPricingDetailsHasBeenSet = true;
    m_subscriptionPricingDetails = std::forward<SubscriptionPricingDetailsT>(value);
  }
  template <typename SubscriptionPricingDetailsT = SubscriptionPricingDetails>
  PricingOption& WithSubscriptionPricingDetails(SubscriptionPricingDetailsT&& value) {
    SetSubscriptionPricingDetails(std::forward<SubscriptionPricingDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  QuotePricingType m_pricingType{QuotePricingType::NOT_SET};

  SubscriptionPricingDetails m_subscriptionPricingDetails;
  bool m_pricingTypeHasBeenSet = false;
  bool m_subscriptionPricingDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
