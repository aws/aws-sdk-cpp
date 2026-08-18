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
 * <p>Filters that apply to assessments performed against the Container Security
 * framework.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContainerSecurityFilters">AWS
 * API Reference</a></p>
 */
class ContainerSecurityFilters {
 public:
  AWS_MARKETPLACECATALOG_API ContainerSecurityFilters() = default;
  AWS_MARKETPLACECATALOG_API ContainerSecurityFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ContainerSecurityFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the delivery option whose Container Security assessments you
   * want to list.</p>
   */
  inline const Aws::String& GetDeliveryOptionId() const { return m_deliveryOptionId; }
  inline bool DeliveryOptionIdHasBeenSet() const { return m_deliveryOptionIdHasBeenSet; }
  template <typename DeliveryOptionIdT = Aws::String>
  void SetDeliveryOptionId(DeliveryOptionIdT&& value) {
    m_deliveryOptionIdHasBeenSet = true;
    m_deliveryOptionId = std::forward<DeliveryOptionIdT>(value);
  }
  template <typename DeliveryOptionIdT = Aws::String>
  ContainerSecurityFilters& WithDeliveryOptionId(DeliveryOptionIdT&& value) {
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
