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
   * <p>The parent marketplace revenue share, by ID (mrs-...) or ARN.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareIdentifier() const { return m_marketplaceRevenueShareIdentifier; }
  inline bool MarketplaceRevenueShareIdentifierHasBeenSet() const { return m_marketplaceRevenueShareIdentifierHasBeenSet; }
  template <typename MarketplaceRevenueShareIdentifierT = Aws::String>
  void SetMarketplaceRevenueShareIdentifier(MarketplaceRevenueShareIdentifierT&& value) {
    m_marketplaceRevenueShareIdentifierHasBeenSet = true;
    m_marketplaceRevenueShareIdentifier = std::forward<MarketplaceRevenueShareIdentifierT>(value);
  }
  template <typename MarketplaceRevenueShareIdentifierT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareIdentifier(MarketplaceRevenueShareIdentifierT&& value) {
    SetMarketplaceRevenueShareIdentifier(std::forward<MarketplaceRevenueShareIdentifierT>(value));
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

  Aws::String m_marketplaceRevenueShareIdentifier;

  Aws::String m_marketplaceRevenueShareAllocationId;

  Aws::String m_marketplaceRevenueShareRevision;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_revenueSharePercent;

  AllocationStatus m_status{AllocationStatus::NOT_SET};
  bool m_catalogHasBeenSet = false;
  bool m_marketplaceRevenueShareIdentifierHasBeenSet = false;
  bool m_marketplaceRevenueShareAllocationIdHasBeenSet = false;
  bool m_marketplaceRevenueShareRevisionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_revenueSharePercentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
