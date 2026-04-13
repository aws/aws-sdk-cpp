/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ProductInformation.h>

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
 * <p>A product associated with a listing summary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListingSummaryAssociatedEntity">AWS
 * API Reference</a></p>
 */
class ListingSummaryAssociatedEntity {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListingSummaryAssociatedEntity() = default;
  AWS_MARKETPLACEDISCOVERY_API ListingSummaryAssociatedEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ListingSummaryAssociatedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the associated product.</p>
   */
  inline const ProductInformation& GetProduct() const { return m_product; }
  inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
  template <typename ProductT = ProductInformation>
  void SetProduct(ProductT&& value) {
    m_productHasBeenSet = true;
    m_product = std::forward<ProductT>(value);
  }
  template <typename ProductT = ProductInformation>
  ListingSummaryAssociatedEntity& WithProduct(ProductT&& value) {
    SetProduct(std::forward<ProductT>(value));
    return *this;
  }
  ///@}
 private:
  ProductInformation m_product;
  bool m_productHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
