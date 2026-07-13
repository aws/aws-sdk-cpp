/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AllocationStatus.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class UpdateMarketplaceRevenueShareAllocationRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API UpdateMarketplaceRevenueShareAllocationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMarketplaceRevenueShareAllocation"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog containing the allocation.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline UpdateMarketplaceRevenueShareAllocationRequest& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace product identifier for the parent revenue share.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the allocation to update.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareAllocationId() const { return m_marketplaceRevenueShareAllocationId; }
  inline bool MarketplaceRevenueShareAllocationIdHasBeenSet() const { return m_marketplaceRevenueShareAllocationIdHasBeenSet; }
  template <typename MarketplaceRevenueShareAllocationIdT = Aws::String>
  void SetMarketplaceRevenueShareAllocationId(MarketplaceRevenueShareAllocationIdT&& value) {
    m_marketplaceRevenueShareAllocationIdHasBeenSet = true;
    m_marketplaceRevenueShareAllocationId = std::forward<MarketplaceRevenueShareAllocationIdT>(value);
  }
  template <typename MarketplaceRevenueShareAllocationIdT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareAllocationId(MarketplaceRevenueShareAllocationIdT&& value) {
    SetMarketplaceRevenueShareAllocationId(std::forward<MarketplaceRevenueShareAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current revision of the parent share. Must match for optimistic
   * concurrency control.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareRevision() const { return m_marketplaceRevenueShareRevision; }
  inline bool MarketplaceRevenueShareRevisionHasBeenSet() const { return m_marketplaceRevenueShareRevisionHasBeenSet; }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  void SetMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    m_marketplaceRevenueShareRevisionHasBeenSet = true;
    m_marketplaceRevenueShareRevision = std::forward<MarketplaceRevenueShareRevisionT>(value);
  }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    SetMarketplaceRevenueShareRevision(std::forward<MarketplaceRevenueShareRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique token to ensure idempotency of the update request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new effective start date. Must be the first day of a month. Only
   * modifiable on future-dated allocations.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new effective end date. Must be the last day of a month and on or after
   * today.</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  inline bool EffectiveUntilHasBeenSet() const { return m_effectiveUntilHasBeenSet; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new revenue share percentage. Only modifiable on future-dated
   * allocations.</p>
   */
  inline const Aws::String& GetRevenueSharePercent() const { return m_revenueSharePercent; }
  inline bool RevenueSharePercentHasBeenSet() const { return m_revenueSharePercentHasBeenSet; }
  template <typename RevenueSharePercentT = Aws::String>
  void SetRevenueSharePercent(RevenueSharePercentT&& value) {
    m_revenueSharePercentHasBeenSet = true;
    m_revenueSharePercent = std::forward<RevenueSharePercentT>(value);
  }
  template <typename RevenueSharePercentT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithRevenueSharePercent(RevenueSharePercentT&& value) {
    SetRevenueSharePercent(std::forward<RevenueSharePercentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new status. Set to INACTIVE for soft-delete. Only modifiable on
   * future-dated allocations.</p>
   */
  inline AllocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateMarketplaceRevenueShareAllocationRequest& WithStatus(AllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_productId;

  Aws::String m_marketplaceRevenueShareAllocationId;

  Aws::String m_marketplaceRevenueShareRevision;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  Aws::String m_revenueSharePercent;

  AllocationStatus m_status{AllocationStatus::NOT_SET};
  bool m_catalogHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
  bool m_marketplaceRevenueShareAllocationIdHasBeenSet = false;
  bool m_marketplaceRevenueShareRevisionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_revenueSharePercentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
