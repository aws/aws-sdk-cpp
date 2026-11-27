/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/RegionalPrice.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Defines the per unit rates for each individual product
 * dimension.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RateCardItem">AWS
 * API Reference</a></p>
 */
class RateCardItem {
 public:
  AWS_AGREEMENTSERVICE_API RateCardItem() = default;
  AWS_AGREEMENTSERVICE_API RateCardItem(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API RateCardItem& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Dimension for which the given entitlement applies. Dimensions represent
   * categories of capacity in a product and are specified when the product is listed
   * in AWS Marketplace.</p>
   */
  inline const Aws::String& GetDimensionKey() const { return m_dimensionKey; }
  inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }
  template <typename DimensionKeyT = Aws::String>
  void SetDimensionKey(DimensionKeyT&& value) {
    m_dimensionKeyHasBeenSet = true;
    m_dimensionKey = std::forward<DimensionKeyT>(value);
  }
  template <typename DimensionKeyT = Aws::String>
  RateCardItem& WithDimensionKey(DimensionKeyT&& value) {
    SetDimensionKey(std::forward<DimensionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per unit price for the product dimension that's used for calculating the
   * amount to be charged.</p>
   */
  inline const Aws::String& GetPrice() const { return m_price; }
  inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
  template <typename PriceT = Aws::String>
  void SetPrice(PriceT&& value) {
    m_priceHasBeenSet = true;
    m_price = std::forward<PriceT>(value);
  }
  template <typename PriceT = Aws::String>
  RateCardItem& WithPrice(PriceT&& value) {
    SetPrice(std::forward<PriceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-Region price overrides for the product dimension. When a Regional
   * price is present for an AWS Region, it replaces the default <code>price</code>.
   * This field is absent when the offer doesn't define regional price overrides.</p>
   */
  inline const Aws::Vector<RegionalPrice>& GetRegionalPrices() const { return m_regionalPrices; }
  inline bool RegionalPricesHasBeenSet() const { return m_regionalPricesHasBeenSet; }
  template <typename RegionalPricesT = Aws::Vector<RegionalPrice>>
  void SetRegionalPrices(RegionalPricesT&& value) {
    m_regionalPricesHasBeenSet = true;
    m_regionalPrices = std::forward<RegionalPricesT>(value);
  }
  template <typename RegionalPricesT = Aws::Vector<RegionalPrice>>
  RateCardItem& WithRegionalPrices(RegionalPricesT&& value) {
    SetRegionalPrices(std::forward<RegionalPricesT>(value));
    return *this;
  }
  template <typename RegionalPricesT = RegionalPrice>
  RateCardItem& AddRegionalPrices(RegionalPricesT&& value) {
    m_regionalPricesHasBeenSet = true;
    m_regionalPrices.emplace_back(std::forward<RegionalPricesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dimensionKey;

  Aws::String m_price;

  Aws::Vector<RegionalPrice> m_regionalPrices;
  bool m_dimensionKeyHasBeenSet = false;
  bool m_priceHasBeenSet = false;
  bool m_regionalPricesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
