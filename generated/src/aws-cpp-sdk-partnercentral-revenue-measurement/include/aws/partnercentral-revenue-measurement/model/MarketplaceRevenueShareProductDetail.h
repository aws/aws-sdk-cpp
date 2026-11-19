/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueShareProductAccountDetail.h>

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
 * <p>A product in a marketplace revenue share, as returned by
 * GetMarketplaceRevenueShare, with the full typed account lists.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/MarketplaceRevenueShareProductDetail">AWS
 * API Reference</a></p>
 */
class MarketplaceRevenueShareProductDetail {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareProductDetail() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareProductDetail(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareProductDetail& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The AWS Marketplace product identifier.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  MarketplaceRevenueShareProductDetail& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace product code, resolved by the service.</p>
   */
  inline const Aws::String& GetProductCode() const { return m_productCode; }
  inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
  template <typename ProductCodeT = Aws::String>
  void SetProductCode(ProductCodeT&& value) {
    m_productCodeHasBeenSet = true;
    m_productCode = std::forward<ProductCodeT>(value);
  }
  template <typename ProductCodeT = Aws::String>
  MarketplaceRevenueShareProductDetail& WithProductCode(ProductCodeT&& value) {
    SetProductCode(std::forward<ProductCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the AWS Marketplace product, resolved by the service.</p>
   */
  inline const Aws::String& GetProductName() const { return m_productName; }
  inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
  template <typename ProductNameT = Aws::String>
  void SetProductName(ProductNameT&& value) {
    m_productNameHasBeenSet = true;
    m_productName = std::forward<ProductNameT>(value);
  }
  template <typename ProductNameT = Aws::String>
  MarketplaceRevenueShareProductDetail& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The typed account lists for this product, each with its count and full list
   * of IDs.</p>
   */
  inline const Aws::Vector<RevenueShareProductAccountDetail>& GetAccounts() const { return m_accounts; }
  inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
  template <typename AccountsT = Aws::Vector<RevenueShareProductAccountDetail>>
  void SetAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts = std::forward<AccountsT>(value);
  }
  template <typename AccountsT = Aws::Vector<RevenueShareProductAccountDetail>>
  MarketplaceRevenueShareProductDetail& WithAccounts(AccountsT&& value) {
    SetAccounts(std::forward<AccountsT>(value));
    return *this;
  }
  template <typename AccountsT = RevenueShareProductAccountDetail>
  MarketplaceRevenueShareProductDetail& AddAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts.emplace_back(std::forward<AccountsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productCode;

  Aws::String m_productName;

  Aws::Vector<RevenueShareProductAccountDetail> m_accounts;
  bool m_productIdHasBeenSet = false;
  bool m_productCodeHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
  bool m_accountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
