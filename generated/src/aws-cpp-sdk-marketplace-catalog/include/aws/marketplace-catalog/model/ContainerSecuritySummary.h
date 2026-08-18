/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The details of the resource assessed under the Container Security
 * framework.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContainerSecuritySummary">AWS
 * API Reference</a></p>
 */
class ContainerSecuritySummary {
 public:
  AWS_MARKETPLACECATALOG_API ContainerSecuritySummary() = default;
  AWS_MARKETPLACECATALOG_API ContainerSecuritySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ContainerSecuritySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the delivery option that was evaluated.</p>
   */
  inline const Aws::String& GetDeliveryOptionId() const { return m_deliveryOptionId; }
  inline bool DeliveryOptionIdHasBeenSet() const { return m_deliveryOptionIdHasBeenSet; }
  template <typename DeliveryOptionIdT = Aws::String>
  void SetDeliveryOptionId(DeliveryOptionIdT&& value) {
    m_deliveryOptionIdHasBeenSet = true;
    m_deliveryOptionId = std::forward<DeliveryOptionIdT>(value);
  }
  template <typename DeliveryOptionIdT = Aws::String>
  ContainerSecuritySummary& WithDeliveryOptionId(DeliveryOptionIdT&& value) {
    SetDeliveryOptionId(std::forward<DeliveryOptionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deliveryOptionId;
  bool m_deliveryOptionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
