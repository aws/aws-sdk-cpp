/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/OfferInformation.h>
#include <aws/marketplace-discovery/model/OfferSetInformation.h>
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
 * <p>A product, offer, and optional offer set associated with a purchase
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PurchaseOptionAssociatedEntity">AWS
 * API Reference</a></p>
 */
class PurchaseOptionAssociatedEntity {
 public:
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionAssociatedEntity() = default;
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionAssociatedEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionAssociatedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the product associated with the purchase option.</p>
   */
  inline const ProductInformation& GetProduct() const { return m_product; }
  inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
  template <typename ProductT = ProductInformation>
  void SetProduct(ProductT&& value) {
    m_productHasBeenSet = true;
    m_product = std::forward<ProductT>(value);
  }
  template <typename ProductT = ProductInformation>
  PurchaseOptionAssociatedEntity& WithProduct(ProductT&& value) {
    SetProduct(std::forward<ProductT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the offer associated with the purchase option.</p>
   */
  inline const OfferInformation& GetOffer() const { return m_offer; }
  inline bool OfferHasBeenSet() const { return m_offerHasBeenSet; }
  template <typename OfferT = OfferInformation>
  void SetOffer(OfferT&& value) {
    m_offerHasBeenSet = true;
    m_offer = std::forward<OfferT>(value);
  }
  template <typename OfferT = OfferInformation>
  PurchaseOptionAssociatedEntity& WithOffer(OfferT&& value) {
    SetOffer(std::forward<OfferT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the offer set, if the purchase option is part of a bundled
   * offer set.</p>
   */
  inline const OfferSetInformation& GetOfferSet() const { return m_offerSet; }
  inline bool OfferSetHasBeenSet() const { return m_offerSetHasBeenSet; }
  template <typename OfferSetT = OfferSetInformation>
  void SetOfferSet(OfferSetT&& value) {
    m_offerSetHasBeenSet = true;
    m_offerSet = std::forward<OfferSetT>(value);
  }
  template <typename OfferSetT = OfferSetInformation>
  PurchaseOptionAssociatedEntity& WithOfferSet(OfferSetT&& value) {
    SetOfferSet(std::forward<OfferSetT>(value));
    return *this;
  }
  ///@}
 private:
  ProductInformation m_product;

  OfferInformation m_offer;

  OfferSetInformation m_offerSet;
  bool m_productHasBeenSet = false;
  bool m_offerHasBeenSet = false;
  bool m_offerSetHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
