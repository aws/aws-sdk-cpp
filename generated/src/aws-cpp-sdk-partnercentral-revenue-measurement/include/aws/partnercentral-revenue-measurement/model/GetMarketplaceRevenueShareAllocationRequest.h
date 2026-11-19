/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class GetMarketplaceRevenueShareAllocationRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetMarketplaceRevenueShareAllocationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMarketplaceRevenueShareAllocation"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog that the allocation belongs to.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline GetMarketplaceRevenueShareAllocationRequest& WithCatalog(CatalogName value) {
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
  GetMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareIdentifier(MarketplaceRevenueShareIdentifierT&& value) {
    SetMarketplaceRevenueShareIdentifier(std::forward<MarketplaceRevenueShareIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the allocation to retrieve.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareAllocationId() const { return m_marketplaceRevenueShareAllocationId; }
  inline bool MarketplaceRevenueShareAllocationIdHasBeenSet() const { return m_marketplaceRevenueShareAllocationIdHasBeenSet; }
  template <typename MarketplaceRevenueShareAllocationIdT = Aws::String>
  void SetMarketplaceRevenueShareAllocationId(MarketplaceRevenueShareAllocationIdT&& value) {
    m_marketplaceRevenueShareAllocationIdHasBeenSet = true;
    m_marketplaceRevenueShareAllocationId = std::forward<MarketplaceRevenueShareAllocationIdT>(value);
  }
  template <typename MarketplaceRevenueShareAllocationIdT = Aws::String>
  GetMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareAllocationId(MarketplaceRevenueShareAllocationIdT&& value) {
    SetMarketplaceRevenueShareAllocationId(std::forward<MarketplaceRevenueShareAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the parent marketplace revenue share at which to retrieve the
   * allocation. Omit to return the latest.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareRevision() const { return m_marketplaceRevenueShareRevision; }
  inline bool MarketplaceRevenueShareRevisionHasBeenSet() const { return m_marketplaceRevenueShareRevisionHasBeenSet; }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  void SetMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    m_marketplaceRevenueShareRevisionHasBeenSet = true;
    m_marketplaceRevenueShareRevision = std::forward<MarketplaceRevenueShareRevisionT>(value);
  }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  GetMarketplaceRevenueShareAllocationRequest& WithMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    SetMarketplaceRevenueShareRevision(std::forward<MarketplaceRevenueShareRevisionT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_marketplaceRevenueShareIdentifier;

  Aws::String m_marketplaceRevenueShareAllocationId;

  Aws::String m_marketplaceRevenueShareRevision;
  bool m_catalogHasBeenSet = false;
  bool m_marketplaceRevenueShareIdentifierHasBeenSet = false;
  bool m_marketplaceRevenueShareAllocationIdHasBeenSet = false;
  bool m_marketplaceRevenueShareRevisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
