/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AllocationStatus.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareAllocationSortField.h>
#include <aws/partnercentral-revenue-measurement/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class ListMarketplaceRevenueShareAllocationsRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueShareAllocationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMarketplaceRevenueShareAllocations"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog containing the allocations.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline ListMarketplaceRevenueShareAllocationsRequest& WithCatalog(CatalogName value) {
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
  ListMarketplaceRevenueShareAllocationsRequest& WithMarketplaceRevenueShareIdentifier(MarketplaceRevenueShareIdentifierT&& value) {
    SetMarketplaceRevenueShareIdentifier(std::forward<MarketplaceRevenueShareIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by allocation status.</p>
   */
  inline AllocationStatus GetStatusFilter() const { return m_statusFilter; }
  inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
  inline void SetStatusFilter(AllocationStatus value) {
    m_statusFilterHasBeenSet = true;
    m_statusFilter = value;
  }
  inline ListMarketplaceRevenueShareAllocationsRequest& WithStatusFilter(AllocationStatus value) {
    SetStatusFilter(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive lower bound for EffectiveFrom date filter.</p>
   */
  inline const Aws::String& GetAfterEffectiveFrom() const { return m_afterEffectiveFrom; }
  inline bool AfterEffectiveFromHasBeenSet() const { return m_afterEffectiveFromHasBeenSet; }
  template <typename AfterEffectiveFromT = Aws::String>
  void SetAfterEffectiveFrom(AfterEffectiveFromT&& value) {
    m_afterEffectiveFromHasBeenSet = true;
    m_afterEffectiveFrom = std::forward<AfterEffectiveFromT>(value);
  }
  template <typename AfterEffectiveFromT = Aws::String>
  ListMarketplaceRevenueShareAllocationsRequest& WithAfterEffectiveFrom(AfterEffectiveFromT&& value) {
    SetAfterEffectiveFrom(std::forward<AfterEffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exclusive upper bound for EffectiveFrom date filter (half-open range).</p>
   */
  inline const Aws::String& GetBeforeEffectiveFrom() const { return m_beforeEffectiveFrom; }
  inline bool BeforeEffectiveFromHasBeenSet() const { return m_beforeEffectiveFromHasBeenSet; }
  template <typename BeforeEffectiveFromT = Aws::String>
  void SetBeforeEffectiveFrom(BeforeEffectiveFromT&& value) {
    m_beforeEffectiveFromHasBeenSet = true;
    m_beforeEffectiveFrom = std::forward<BeforeEffectiveFromT>(value);
  }
  template <typename BeforeEffectiveFromT = Aws::String>
  ListMarketplaceRevenueShareAllocationsRequest& WithBeforeEffectiveFrom(BeforeEffectiveFromT&& value) {
    SetBeforeEffectiveFrom(std::forward<BeforeEffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive lower bound for EffectiveUntil date filter.</p>
   */
  inline const Aws::String& GetAfterEffectiveUntil() const { return m_afterEffectiveUntil; }
  inline bool AfterEffectiveUntilHasBeenSet() const { return m_afterEffectiveUntilHasBeenSet; }
  template <typename AfterEffectiveUntilT = Aws::String>
  void SetAfterEffectiveUntil(AfterEffectiveUntilT&& value) {
    m_afterEffectiveUntilHasBeenSet = true;
    m_afterEffectiveUntil = std::forward<AfterEffectiveUntilT>(value);
  }
  template <typename AfterEffectiveUntilT = Aws::String>
  ListMarketplaceRevenueShareAllocationsRequest& WithAfterEffectiveUntil(AfterEffectiveUntilT&& value) {
    SetAfterEffectiveUntil(std::forward<AfterEffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exclusive upper bound for EffectiveUntil date filter (half-open range).</p>
   */
  inline const Aws::String& GetBeforeEffectiveUntil() const { return m_beforeEffectiveUntil; }
  inline bool BeforeEffectiveUntilHasBeenSet() const { return m_beforeEffectiveUntilHasBeenSet; }
  template <typename BeforeEffectiveUntilT = Aws::String>
  void SetBeforeEffectiveUntil(BeforeEffectiveUntilT&& value) {
    m_beforeEffectiveUntilHasBeenSet = true;
    m_beforeEffectiveUntil = std::forward<BeforeEffectiveUntilT>(value);
  }
  template <typename BeforeEffectiveUntilT = Aws::String>
  ListMarketplaceRevenueShareAllocationsRequest& WithBeforeEffectiveUntil(BeforeEffectiveUntilT&& value) {
    SetBeforeEffectiveUntil(std::forward<BeforeEffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort marketplace revenue share allocations by.</p>
   */
  inline MarketplaceRevenueShareAllocationSortField GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(MarketplaceRevenueShareAllocationSortField value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListMarketplaceRevenueShareAllocationsRequest& WithSortBy(MarketplaceRevenueShareAllocationSortField value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction to sort results. Defaults to ASCENDING.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListMarketplaceRevenueShareAllocationsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of results per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMarketplaceRevenueShareAllocationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMarketplaceRevenueShareAllocationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional share revision for historical list. Returns allocations as they
   * existed at this revision.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareRevision() const { return m_marketplaceRevenueShareRevision; }
  inline bool MarketplaceRevenueShareRevisionHasBeenSet() const { return m_marketplaceRevenueShareRevisionHasBeenSet; }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  void SetMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    m_marketplaceRevenueShareRevisionHasBeenSet = true;
    m_marketplaceRevenueShareRevision = std::forward<MarketplaceRevenueShareRevisionT>(value);
  }
  template <typename MarketplaceRevenueShareRevisionT = Aws::String>
  ListMarketplaceRevenueShareAllocationsRequest& WithMarketplaceRevenueShareRevision(MarketplaceRevenueShareRevisionT&& value) {
    SetMarketplaceRevenueShareRevision(std::forward<MarketplaceRevenueShareRevisionT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_marketplaceRevenueShareIdentifier;

  AllocationStatus m_statusFilter{AllocationStatus::NOT_SET};

  Aws::String m_afterEffectiveFrom;

  Aws::String m_beforeEffectiveFrom;

  Aws::String m_afterEffectiveUntil;

  Aws::String m_beforeEffectiveUntil;

  MarketplaceRevenueShareAllocationSortField m_sortBy{MarketplaceRevenueShareAllocationSortField::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_marketplaceRevenueShareRevision;
  bool m_catalogHasBeenSet = false;
  bool m_marketplaceRevenueShareIdentifierHasBeenSet = false;
  bool m_statusFilterHasBeenSet = false;
  bool m_afterEffectiveFromHasBeenSet = false;
  bool m_beforeEffectiveFromHasBeenSet = false;
  bool m_afterEffectiveUntilHasBeenSet = false;
  bool m_beforeEffectiveUntilHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_marketplaceRevenueShareRevisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
