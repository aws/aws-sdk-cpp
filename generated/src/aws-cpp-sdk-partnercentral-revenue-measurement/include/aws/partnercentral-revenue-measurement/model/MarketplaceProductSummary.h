/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 * <p>Read-time AWS Marketplace product attributes returned in revenue attribution
 * responses, including service-resolved fields.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/MarketplaceProductSummary">AWS
 * API Reference</a></p>
 */
class MarketplaceProductSummary {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceProductSummary() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceProductSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceProductSummary& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The product identifier provided at attribution creation.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  MarketplaceProductSummary& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace product code resolved using the product identifier.</p>
   */
  inline const Aws::String& GetProductCode() const { return m_productCode; }
  inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
  template <typename ProductCodeT = Aws::String>
  void SetProductCode(ProductCodeT&& value) {
    m_productCodeHasBeenSet = true;
    m_productCode = std::forward<ProductCodeT>(value);
  }
  template <typename ProductCodeT = Aws::String>
  MarketplaceProductSummary& WithProductCode(ProductCodeT&& value) {
    SetProductCode(std::forward<ProductCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the AWS Marketplace product.</p>
   */
  inline const Aws::String& GetProductName() const { return m_productName; }
  inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
  template <typename ProductNameT = Aws::String>
  void SetProductName(ProductNameT&& value) {
    m_productNameHasBeenSet = true;
    m_productName = std::forward<ProductNameT>(value);
  }
  template <typename ProductNameT = Aws::String>
  MarketplaceProductSummary& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productCode;

  Aws::String m_productName;
  bool m_productIdHasBeenSet = false;
  bool m_productCodeHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
