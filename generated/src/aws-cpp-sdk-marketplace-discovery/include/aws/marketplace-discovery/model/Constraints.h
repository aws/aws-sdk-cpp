/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/RateCardConstraintType.h>

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
 * <p>Constraints that control how a buyer can configure a rate card.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/Constraints">AWS
 * API Reference</a></p>
 */
class Constraints {
 public:
  AWS_MARKETPLACEDISCOVERY_API Constraints() = default;
  AWS_MARKETPLACEDISCOVERY_API Constraints(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Constraints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the buyer can select multiple dimensions. Values are
   * <code>Allowed</code> or <code>Disallowed</code>.</p>
   */
  inline RateCardConstraintType GetMultipleDimensionSelection() const { return m_multipleDimensionSelection; }
  inline bool MultipleDimensionSelectionHasBeenSet() const { return m_multipleDimensionSelectionHasBeenSet; }
  inline void SetMultipleDimensionSelection(RateCardConstraintType value) {
    m_multipleDimensionSelectionHasBeenSet = true;
    m_multipleDimensionSelection = value;
  }
  inline Constraints& WithMultipleDimensionSelection(RateCardConstraintType value) {
    SetMultipleDimensionSelection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the buyer can configure quantities. Values are <code>Allowed</code>
   * or <code>Disallowed</code>.</p>
   */
  inline RateCardConstraintType GetQuantityConfiguration() const { return m_quantityConfiguration; }
  inline bool QuantityConfigurationHasBeenSet() const { return m_quantityConfigurationHasBeenSet; }
  inline void SetQuantityConfiguration(RateCardConstraintType value) {
    m_quantityConfigurationHasBeenSet = true;
    m_quantityConfiguration = value;
  }
  inline Constraints& WithQuantityConfiguration(RateCardConstraintType value) {
    SetQuantityConfiguration(value);
    return *this;
  }
  ///@}
 private:
  RateCardConstraintType m_multipleDimensionSelection{RateCardConstraintType::NOT_SET};

  RateCardConstraintType m_quantityConfiguration{RateCardConstraintType::NOT_SET};
  bool m_multipleDimensionSelectionHasBeenSet = false;
  bool m_quantityConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
