/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PricingUnitType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A pricing unit that defines the billing dimension for a listing, such as
 * users, hosts, bandwidth, or data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PricingUnit">AWS
 * API Reference</a></p>
 */
class PricingUnit {
 public:
  AWS_MARKETPLACEDISCOVERY_API PricingUnit() = default;
  AWS_MARKETPLACEDISCOVERY_API PricingUnit(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PricingUnit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine-readable type of the pricing unit.</p>
   */
  inline PricingUnitType GetPricingUnitType() const { return m_pricingUnitType; }
  inline bool PricingUnitTypeHasBeenSet() const { return m_pricingUnitTypeHasBeenSet; }
  inline void SetPricingUnitType(PricingUnitType value) {
    m_pricingUnitTypeHasBeenSet = true;
    m_pricingUnitType = value;
  }
  inline PricingUnit& WithPricingUnitType(PricingUnitType value) {
    SetPricingUnitType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the pricing unit.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  PricingUnit& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  PricingUnitType m_pricingUnitType{PricingUnitType::NOT_SET};

  Aws::String m_displayName;
  bool m_pricingUnitTypeHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
