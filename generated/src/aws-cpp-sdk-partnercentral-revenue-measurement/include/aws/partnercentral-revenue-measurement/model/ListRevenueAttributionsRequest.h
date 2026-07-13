/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AttributionSortBy.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class ListRevenueAttributionsRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListRevenueAttributionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRevenueAttributions"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog to list revenue attributions from.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline ListRevenueAttributionsRequest& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include revenue attributions with the specified
   * identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIdentifiers() const { return m_identifiers; }
  inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
  template <typename IdentifiersT = Aws::Vector<Aws::String>>
  void SetIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers = std::forward<IdentifiersT>(value);
  }
  template <typename IdentifiersT = Aws::Vector<Aws::String>>
  ListRevenueAttributionsRequest& WithIdentifiers(IdentifiersT&& value) {
    SetIdentifiers(std::forward<IdentifiersT>(value));
    return *this;
  }
  template <typename IdentifiersT = Aws::String>
  ListRevenueAttributionsRequest& AddIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers.emplace_back(std::forward<IdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include revenue attributions created after this
   * timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
  inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  void SetCreatedAfter(CreatedAfterT&& value) {
    m_createdAfterHasBeenSet = true;
    m_createdAfter = std::forward<CreatedAfterT>(value);
  }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  ListRevenueAttributionsRequest& WithCreatedAfter(CreatedAfterT&& value) {
    SetCreatedAfter(std::forward<CreatedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include revenue attributions created before this
   * timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
  inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  void SetCreatedBefore(CreatedBeforeT&& value) {
    m_createdBeforeHasBeenSet = true;
    m_createdBefore = std::forward<CreatedBeforeT>(value);
  }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  ListRevenueAttributionsRequest& WithCreatedBefore(CreatedBeforeT&& value) {
    SetCreatedBefore(std::forward<CreatedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort revenue attributions by.</p>
   */
  inline AttributionSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(AttributionSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListRevenueAttributionsRequest& WithSortBy(AttributionSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction to sort results.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListRevenueAttributionsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListRevenueAttributionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination. Use the value returned in the previous response to
   * retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRevenueAttributionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::Vector<Aws::String> m_identifiers;

  Aws::Utils::DateTime m_createdAfter{};

  Aws::Utils::DateTime m_createdBefore{};

  AttributionSortBy m_sortBy{AttributionSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_identifiersHasBeenSet = false;
  bool m_createdAfterHasBeenSet = false;
  bool m_createdBeforeHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
