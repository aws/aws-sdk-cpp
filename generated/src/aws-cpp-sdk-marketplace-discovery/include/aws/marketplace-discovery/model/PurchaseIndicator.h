/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PurchaseIndicatorType.h>

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
 * <p>An indicator describing a purchase characteristic, such as availability for
 * use without a subscription.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PurchaseIndicator">AWS
 * API Reference</a></p>
 */
class PurchaseIndicator {
 public:
  AWS_MARKETPLACEDISCOVERY_API PurchaseIndicator() = default;
  AWS_MARKETPLACEDISCOVERY_API PurchaseIndicator(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PurchaseIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of purchase indicator.</p>
   */
  inline PurchaseIndicatorType GetIndicatorType() const { return m_indicatorType; }
  inline bool IndicatorTypeHasBeenSet() const { return m_indicatorTypeHasBeenSet; }
  inline void SetIndicatorType(PurchaseIndicatorType value) {
    m_indicatorTypeHasBeenSet = true;
    m_indicatorType = value;
  }
  inline PurchaseIndicator& WithIndicatorType(PurchaseIndicatorType value) {
    SetIndicatorType(value);
    return *this;
  }
  ///@}
 private:
  PurchaseIndicatorType m_indicatorType{PurchaseIndicatorType::NOT_SET};
  bool m_indicatorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
