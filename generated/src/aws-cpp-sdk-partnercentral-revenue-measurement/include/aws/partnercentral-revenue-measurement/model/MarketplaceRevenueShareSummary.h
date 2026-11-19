/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareProductSummary.h>

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
   * <p>The unique identifier of the marketplace revenue share, short ID form
   * (mrs-...).</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  MarketplaceRevenueShareSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
   * <p>The products in the marketplace revenue share, each with per-type account
   * counts. Empty when the share is closed.</p>
   */
  inline const Aws::Vector<MarketplaceRevenueShareProductSummary>& GetProducts() const { return m_products; }
  inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }
  template <typename ProductsT = Aws::Vector<MarketplaceRevenueShareProductSummary>>
  void SetProducts(ProductsT&& value) {
    m_productsHasBeenSet = true;
    m_products = std::forward<ProductsT>(value);
  }
  template <typename ProductsT = Aws::Vector<MarketplaceRevenueShareProductSummary>>
  MarketplaceRevenueShareSummary& WithProducts(ProductsT&& value) {
    SetProducts(std::forward<ProductsT>(value));
    return *this;
  }
  template <typename ProductsT = MarketplaceRevenueShareProductSummary>
  MarketplaceRevenueShareSummary& AddProducts(ProductsT&& value) {
    m_productsHasBeenSet = true;
    m_products.emplace_back(std::forward<ProductsT>(value));
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
   * <p>The latest revision of the marketplace revenue share.</p>
   */
  inline const Aws::String& GetLatestRevision() const { return m_latestRevision; }
  inline bool LatestRevisionHasBeenSet() const { return m_latestRevisionHasBeenSet; }
  template <typename LatestRevisionT = Aws::String>
  void SetLatestRevision(LatestRevisionT&& value) {
    m_latestRevisionHasBeenSet = true;
    m_latestRevision = std::forward<LatestRevisionT>(value);
  }
  template <typename LatestRevisionT = Aws::String>
  MarketplaceRevenueShareSummary& WithLatestRevision(LatestRevisionT&& value) {
    SetLatestRevision(std::forward<LatestRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date from which this share is effective, derived from the earliest ACTIVE
   * allocation start date (YYYY-MM-DD). Absent when no ACTIVE allocation
   * remains.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  MarketplaceRevenueShareSummary& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date until which this share is effective, derived from the latest ACTIVE
   * allocation end date (YYYY-MM-DD). Absent when no ACTIVE allocation remains.</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  inline bool EffectiveUntilHasBeenSet() const { return m_effectiveUntilHasBeenSet; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  MarketplaceRevenueShareSummary& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
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
  Aws::String m_id;

  Aws::String m_arn;

  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::Vector<MarketplaceRevenueShareProductSummary> m_products;

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  Aws::String m_latestRevision;

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  int64_t m_totalActiveMarketplaceRevenueShareAllocationCount{0};

  int64_t m_totalMarketplaceRevenueShareAllocationCount{0};
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_productsHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_latestRevisionHasBeenSet = false;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_totalActiveMarketplaceRevenueShareAllocationCountHasBeenSet = false;
  bool m_totalMarketplaceRevenueShareAllocationCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
