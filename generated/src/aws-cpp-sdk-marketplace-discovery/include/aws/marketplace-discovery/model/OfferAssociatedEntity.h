/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
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
 * <p>A product and optional offer set associated with an offer.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/OfferAssociatedEntity">AWS
 * API Reference</a></p>
 */
class OfferAssociatedEntity {
 public:
  AWS_MARKETPLACEDISCOVERY_API OfferAssociatedEntity() = default;
  AWS_MARKETPLACEDISCOVERY_API OfferAssociatedEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API OfferAssociatedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the product associated with the offer.</p>
   */
  inline const ProductInformation& GetProduct() const { return m_product; }
  inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
  template <typename ProductT = ProductInformation>
  void SetProduct(ProductT&& value) {
    m_productHasBeenSet = true;
    m_product = std::forward<ProductT>(value);
  }
  template <typename ProductT = ProductInformation>
  OfferAssociatedEntity& WithProduct(ProductT&& value) {
    SetProduct(std::forward<ProductT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the offer set, if the offer is part of a bundled offer
   * set.</p>
   */
  inline const OfferSetInformation& GetOfferSet() const { return m_offerSet; }
  inline bool OfferSetHasBeenSet() const { return m_offerSetHasBeenSet; }
  template <typename OfferSetT = OfferSetInformation>
  void SetOfferSet(OfferSetT&& value) {
    m_offerSetHasBeenSet = true;
    m_offerSet = std::forward<OfferSetT>(value);
  }
  template <typename OfferSetT = OfferSetInformation>
  OfferAssociatedEntity& WithOfferSet(OfferSetT&& value) {
    SetOfferSet(std::forward<OfferSetT>(value));
    return *this;
  }
  ///@}
 private:
  ProductInformation m_product;

  OfferSetInformation m_offerSet;
  bool m_productHasBeenSet = false;
  bool m_offerSetHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
