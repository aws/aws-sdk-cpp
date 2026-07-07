/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>

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
 * <p>Summary information about a marketplace revenue share.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/MarketplaceRevenueShareSummary">AWS
 * API Reference</a></p>
 */
class MarketplaceRevenueShareSummary {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareSummary() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareSummary& operator=(
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
  MarketplaceRevenueShareSummary& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the marketplace revenue share.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  MarketplaceRevenueShareSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog that the marketplace revenue share belongs to.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline MarketplaceRevenueShareSummary& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace product code.</p>
   */
  inline const Aws::String& GetProductCode() const { return m_productCode; }
  inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
  template <typename ProductCodeT = Aws::String>
  void SetProductCode(ProductCodeT&& value) {
    m_productCodeHasBeenSet = true;
    m_productCode = std::forward<ProductCodeT>(value);
  }
  template <typename ProductCodeT = Aws::String>
  MarketplaceRevenueShareSummary& WithProductCode(ProductCodeT&& value) {
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
  MarketplaceRevenueShareSummary& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the marketplace revenue share was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  MarketplaceRevenueShareSummary& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the marketplace revenue share was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  MarketplaceRevenueShareSummary& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest revision number of the marketplace revenue share.</p>
   */
  inline int64_t GetLatestRevision() const { return m_latestRevision; }
  inline bool LatestRevisionHasBeenSet() const { return m_latestRevisionHasBeenSet; }
  inline void SetLatestRevision(int64_t value) {
    m_latestRevisionHasBeenSet = true;
    m_latestRevision = value;
  }
  inline MarketplaceRevenueShareSummary& WithLatestRevision(int64_t value) {
    SetLatestRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active allocations under this share.</p>
   */
  inline int64_t GetTotalActiveMarketplaceRevenueShareAllocationCount() const {
    return m_totalActiveMarketplaceRevenueShareAllocationCount;
  }
  inline bool TotalActiveMarketplaceRevenueShareAllocationCountHasBeenSet() const {
    return m_totalActiveMarketplaceRevenueShareAllocationCountHasBeenSet;
  }
  inline void SetTotalActiveMarketplaceRevenueShareAllocationCount(int64_t value) {
    m_totalActiveMarketplaceRevenueShareAllocationCountHasBeenSet = true;
    m_totalActiveMarketplaceRevenueShareAllocationCount = value;
  }
  inline MarketplaceRevenueShareSummary& WithTotalActiveMarketplaceRevenueShareAllocationCount(int64_t value) {
    SetTotalActiveMarketplaceRevenueShareAllocationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of allocations under this share.</p>
   */
  inline int64_t GetTotalMarketplaceRevenueShareAllocationCount() const { return m_totalMarketplaceRevenueShareAllocationCount; }
  inline bool TotalMarketplaceRevenueShareAllocationCountHasBeenSet() const {
    return m_totalMarketplaceRevenueShareAllocationCountHasBeenSet;
  }
  inline void SetTotalMarketplaceRevenueShareAllocationCount(int64_t value) {
    m_totalMarketplaceRevenueShareAllocationCountHasBeenSet = true;
    m_totalMarketplaceRevenueShareAllocationCount = value;
  }
  inline MarketplaceRevenueShareSummary& WithTotalMarketplaceRevenueShareAllocationCount(int64_t value) {
    SetTotalMarketplaceRevenueShareAllocationCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_arn;

  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_productCode;

  Aws::String m_productName;

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  int64_t m_latestRevision{0};

  int64_t m_totalActiveMarketplaceRevenueShareAllocationCount{0};

  int64_t m_totalMarketplaceRevenueShareAllocationCount{0};
  bool m_productIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_productCodeHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_latestRevisionHasBeenSet = false;
  bool m_totalActiveMarketplaceRevenueShareAllocationCountHasBeenSet = false;
  bool m_totalMarketplaceRevenueShareAllocationCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
