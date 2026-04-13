/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PricingModelType.h>

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
 * <p>A pricing model that determines how buyers are charged for a listing, such as
 * usage-based, contract, BYOL, or free.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PricingModel">AWS
 * API Reference</a></p>
 */
class PricingModel {
 public:
  AWS_MARKETPLACEDISCOVERY_API PricingModel() = default;
  AWS_MARKETPLACEDISCOVERY_API PricingModel(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PricingModel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine-readable type of the pricing model.</p>
   */
  inline PricingModelType GetPricingModelType() const { return m_pricingModelType; }
  inline bool PricingModelTypeHasBeenSet() const { return m_pricingModelTypeHasBeenSet; }
  inline void SetPricingModelType(PricingModelType value) {
    m_pricingModelTypeHasBeenSet = true;
    m_pricingModelType = value;
  }
  inline PricingModel& WithPricingModelType(PricingModelType value) {
    SetPricingModelType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the pricing model.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  PricingModel& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  PricingModelType m_pricingModelType{PricingModelType::NOT_SET};

  Aws::String m_displayName;
  bool m_pricingModelTypeHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
