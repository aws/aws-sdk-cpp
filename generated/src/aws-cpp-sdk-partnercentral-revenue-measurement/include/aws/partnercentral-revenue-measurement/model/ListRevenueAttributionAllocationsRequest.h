/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AllocationStatus.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/EntityType.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationSortField.h>
#include <aws/partnercentral-revenue-measurement/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class ListRevenueAttributionAllocationsRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListRevenueAttributionAllocationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRevenueAttributionAllocations"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog that contains the resource.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline ListRevenueAttributionAllocationsRequest& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revenue attribution identifier to query.</p>
   */
  inline const Aws::String& GetRevenueAttributionIdentifier() const { return m_revenueAttributionIdentifier; }
  inline bool RevenueAttributionIdentifierHasBeenSet() const { return m_revenueAttributionIdentifierHasBeenSet; }
  template <typename RevenueAttributionIdentifierT = Aws::String>
  void SetRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    m_revenueAttributionIdentifierHasBeenSet = true;
    m_revenueAttributionIdentifier = std::forward<RevenueAttributionIdentifierT>(value);
  }
  template <typename RevenueAttributionIdentifierT = Aws::String>
  ListRevenueAttributionAllocationsRequest& WithRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    SetRevenueAttributionIdentifier(std::forward<RevenueAttributionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by deal entity types.</p>
   */
  inline const Aws::Vector<EntityType>& GetEntityTypeFilters() const { return m_entityTypeFilters; }
  inline bool EntityTypeFiltersHasBeenSet() const { return m_entityTypeFiltersHasBeenSet; }
  template <typename EntityTypeFiltersT = Aws::Vector<EntityType>>
  void SetEntityTypeFilters(EntityTypeFiltersT&& value) {
    m_entityTypeFiltersHasBeenSet = true;
    m_entityTypeFilters = std::forward<EntityTypeFiltersT>(value);
  }
  template <typename EntityTypeFiltersT = Aws::Vector<EntityType>>
  ListRevenueAttributionAllocationsRequest& WithEntityTypeFilters(EntityTypeFiltersT&& value) {
    SetEntityTypeFilters(std::forward<EntityTypeFiltersT>(value));
    return *this;
  }
  inline ListRevenueAttributionAllocationsRequest& AddEntityTypeFilters(EntityType value) {
    m_entityTypeFiltersHasBeenSet = true;
    m_entityTypeFilters.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by deal entity identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEntityIdentifierFilters() const { return m_entityIdentifierFilters; }
  inline bool EntityIdentifierFiltersHasBeenSet() const { return m_entityIdentifierFiltersHasBeenSet; }
  template <typename EntityIdentifierFiltersT = Aws::Vector<Aws::String>>
  void SetEntityIdentifierFilters(EntityIdentifierFiltersT&& value) {
    m_entityIdentifierFiltersHasBeenSet = true;
    m_entityIdentifierFilters = std::forward<EntityIdentifierFiltersT>(value);
  }
  template <typename EntityIdentifierFiltersT = Aws::Vector<Aws::String>>
  ListRevenueAttributionAllocationsRequest& WithEntityIdentifierFilters(EntityIdentifierFiltersT&& value) {
    SetEntityIdentifierFilters(std::forward<EntityIdentifierFiltersT>(value));
    return *this;
  }
  template <typename EntityIdentifierFiltersT = Aws::String>
  ListRevenueAttributionAllocationsRequest& AddEntityIdentifierFilters(EntityIdentifierFiltersT&& value) {
    m_entityIdentifierFiltersHasBeenSet = true;
    m_entityIdentifierFilters.emplace_back(std::forward<EntityIdentifierFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by customer AWS account IDs for associated deal entities.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCustomerAwsAccountIdFilters() const { return m_customerAwsAccountIdFilters; }
  inline bool CustomerAwsAccountIdFiltersHasBeenSet() const { return m_customerAwsAccountIdFiltersHasBeenSet; }
  template <typename CustomerAwsAccountIdFiltersT = Aws::Vector<Aws::String>>
  void SetCustomerAwsAccountIdFilters(CustomerAwsAccountIdFiltersT&& value) {
    m_customerAwsAccountIdFiltersHasBeenSet = true;
    m_customerAwsAccountIdFilters = std::forward<CustomerAwsAccountIdFiltersT>(value);
  }
  template <typename CustomerAwsAccountIdFiltersT = Aws::Vector<Aws::String>>
  ListRevenueAttributionAllocationsRequest& WithCustomerAwsAccountIdFilters(CustomerAwsAccountIdFiltersT&& value) {
    SetCustomerAwsAccountIdFilters(std::forward<CustomerAwsAccountIdFiltersT>(value));
    return *this;
  }
  template <typename CustomerAwsAccountIdFiltersT = Aws::String>
  ListRevenueAttributionAllocationsRequest& AddCustomerAwsAccountIdFilters(CustomerAwsAccountIdFiltersT&& value) {
    m_customerAwsAccountIdFiltersHasBeenSet = true;
    m_customerAwsAccountIdFilters.emplace_back(std::forward<CustomerAwsAccountIdFiltersT>(value));
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
  inline ListRevenueAttributionAllocationsRequest& WithStatusFilter(AllocationStatus value) {
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
  ListRevenueAttributionAllocationsRequest& WithAfterEffectiveFrom(AfterEffectiveFromT&& value) {
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
  ListRevenueAttributionAllocationsRequest& WithBeforeEffectiveFrom(BeforeEffectiveFromT&& value) {
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
  ListRevenueAttributionAllocationsRequest& WithAfterEffectiveUntil(AfterEffectiveUntilT&& value) {
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
  ListRevenueAttributionAllocationsRequest& WithBeforeEffectiveUntil(BeforeEffectiveUntilT&& value) {
    SetBeforeEffectiveUntil(std::forward<BeforeEffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Field to sort by.</p>
   */
  inline RevenueAttributionAllocationSortField GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(RevenueAttributionAllocationSortField value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListRevenueAttributionAllocationsRequest& WithSortBy(RevenueAttributionAllocationSortField value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sort direction. Defaults to ASCENDING.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListRevenueAttributionAllocationsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Point-in-time revision number to query.</p>
   */
  inline const Aws::String& GetRevenueAttributionRevision() const { return m_revenueAttributionRevision; }
  inline bool RevenueAttributionRevisionHasBeenSet() const { return m_revenueAttributionRevisionHasBeenSet; }
  template <typename RevenueAttributionRevisionT = Aws::String>
  void SetRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    m_revenueAttributionRevisionHasBeenSet = true;
    m_revenueAttributionRevision = std::forward<RevenueAttributionRevisionT>(value);
  }
  template <typename RevenueAttributionRevisionT = Aws::String>
  ListRevenueAttributionAllocationsRequest& WithRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    SetRevenueAttributionRevision(std::forward<RevenueAttributionRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum results per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListRevenueAttributionAllocationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from previous response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRevenueAttributionAllocationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_revenueAttributionIdentifier;

  Aws::Vector<EntityType> m_entityTypeFilters;

  Aws::Vector<Aws::String> m_entityIdentifierFilters;

  Aws::Vector<Aws::String> m_customerAwsAccountIdFilters;

  AllocationStatus m_statusFilter{AllocationStatus::NOT_SET};

  Aws::String m_afterEffectiveFrom;

  Aws::String m_beforeEffectiveFrom;

  Aws::String m_afterEffectiveUntil;

  Aws::String m_beforeEffectiveUntil;

  RevenueAttributionAllocationSortField m_sortBy{RevenueAttributionAllocationSortField::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  Aws::String m_revenueAttributionRevision;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_revenueAttributionIdentifierHasBeenSet = false;
  bool m_entityTypeFiltersHasBeenSet = false;
  bool m_entityIdentifierFiltersHasBeenSet = false;
  bool m_customerAwsAccountIdFiltersHasBeenSet = false;
  bool m_statusFilterHasBeenSet = false;
  bool m_afterEffectiveFromHasBeenSet = false;
  bool m_beforeEffectiveFromHasBeenSet = false;
  bool m_afterEffectiveUntilHasBeenSet = false;
  bool m_beforeEffectiveUntilHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_revenueAttributionRevisionHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
