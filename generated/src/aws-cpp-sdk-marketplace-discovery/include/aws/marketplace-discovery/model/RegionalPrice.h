/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

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
 * <p>A price override for a pricing dimension in one AWS Region.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/RegionalPrice">AWS
 * API Reference</a></p>
 */
class RegionalPrice {
 public:
  AWS_MARKETPLACEDISCOVERY_API RegionalPrice() = default;
  AWS_MARKETPLACEDISCOVERY_API RegionalPrice(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API RegionalPrice& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Region the override applies to.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  RegionalPrice& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable display name of the Region.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  RegionalPrice& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-unit price for the dimension in this Region.</p>
   */
  inline const Aws::String& GetPrice() const { return m_price; }
  inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
  template <typename PriceT = Aws::String>
  void SetPrice(PriceT&& value) {
    m_priceHasBeenSet = true;
    m_price = std::forward<PriceT>(value);
  }
  template <typename PriceT = Aws::String>
  RegionalPrice& WithPrice(PriceT&& value) {
    SetPrice(std::forward<PriceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::String m_displayName;

  Aws::String m_price;
  bool m_regionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_priceHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
