/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/OfferInformation.h>
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
 * <p>A product and offer associated with an offer set.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/OfferSetAssociatedEntity">AWS
 * API Reference</a></p>
 */
class OfferSetAssociatedEntity {
 public:
  AWS_MARKETPLACEDISCOVERY_API OfferSetAssociatedEntity() = default;
  AWS_MARKETPLACEDISCOVERY_API OfferSetAssociatedEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API OfferSetAssociatedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the product associated with the offer set.</p>
   */
  inline const ProductInformation& GetProduct() const { return m_product; }
  inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
  template <typename ProductT = ProductInformation>
  void SetProduct(ProductT&& value) {
    m_productHasBeenSet = true;
    m_product = std::forward<ProductT>(value);
  }
  template <typename ProductT = ProductInformation>
  OfferSetAssociatedEntity& WithProduct(ProductT&& value) {
    SetProduct(std::forward<ProductT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the offer associated with the offer set.</p>
   */
  inline const OfferInformation& GetOffer() const { return m_offer; }
  inline bool OfferHasBeenSet() const { return m_offerHasBeenSet; }
  template <typename OfferT = OfferInformation>
  void SetOffer(OfferT&& value) {
    m_offerHasBeenSet = true;
    m_offer = std::forward<OfferT>(value);
  }
  template <typename OfferT = OfferInformation>
  OfferSetAssociatedEntity& WithOffer(OfferT&& value) {
    SetOffer(std::forward<OfferT>(value));
    return *this;
  }
  ///@}
 private:
  ProductInformation m_product;

  OfferInformation m_offer;
  bool m_productHasBeenSet = false;
  bool m_offerHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
