/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class CreateMarketplaceRevenueShareAllocationRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateMarketplaceRevenueShareAllocationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMarketplaceRevenueShareAllocation"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog in which to create the allocation.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline CreateMarketplaceRevenueShareAllocationRequest& WithCatalog(CatalogName value) {
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
  CreateMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareIdentifier(MarketplaceRevenueShareIdentifierT&& value) {
    SetMarketplaceRevenueShareIdentifier(std::forward<MarketplaceRevenueShareIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique token to ensure idempotency of the create request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateMarketplaceRevenueShareAllocationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the parent marketplace revenue share that the caller last
   * read, for optimistic concurrency control. A stale value returns
   * ConflictException with Reason REVISION_MISMATCH.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareRevision() const { return m_marketplaceRevenueShareRevision; }
  inline bool MarketplaceRevenueShareRevisionHasBeenSet() const { return m_marketplaceRevenueShareRevisionHasBeenSet; }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  void SetMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    m_marketplaceRevenueShareRevisionHasBeenSet = true;
    m_marketplaceRevenueShareRevision = std::forward<MarketplaceRevenueShareRevisionT>(value);
  }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  CreateMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    SetMarketplaceRevenueShareRevision(std::forward<MarketplaceRevenueShareRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective start date for the allocation. Must be the first day of a
   * month.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  CreateMarketplaceRevenueShareAllocationRequest& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective end date for the allocation. Must be the last day of a month
   * (YYYY-MM-DD).</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  inline bool EffectiveUntilHasBeenSet() const { return m_effectiveUntilHasBeenSet; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  CreateMarketplaceRevenueShareAllocationRequest& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revenue share percentage for this allocation.</p>
   */
  inline const Aws::String& GetRevenueSharePercent() const { return m_revenueSharePercent; }
  inline bool RevenueSharePercentHasBeenSet() const { return m_revenueSharePercentHasBeenSet; }
  template <typename RevenueSharePercentT = Aws::String>
  void SetRevenueSharePercent(RevenueSharePercentT&& value) {
    m_revenueSharePercentHasBeenSet = true;
    m_revenueSharePercent = std::forward<RevenueSharePercentT>(value);
  }
  template <typename RevenueSharePercentT = Aws::String>
  CreateMarketplaceRevenueShareAllocationRequest& WithRevenueSharePercent(RevenueSharePercentT&& value) {
    SetRevenueSharePercent(std::forward<RevenueSharePercentT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_marketplaceRevenueShareIdentifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_marketplaceRevenueShareRevision;

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  Aws::String m_revenueSharePercent;
  bool m_catalogHasBeenSet = false;
  bool m_marketplaceRevenueShareIdentifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_marketplaceRevenueShareRevisionHasBeenSet = false;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_revenueSharePercentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
