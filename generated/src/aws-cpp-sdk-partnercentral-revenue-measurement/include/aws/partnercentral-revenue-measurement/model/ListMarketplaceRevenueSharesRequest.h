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
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareSortBy.h>
#include <aws/partnercentral-revenue-measurement/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class ListMarketplaceRevenueSharesRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueSharesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMarketplaceRevenueShares"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog to list marketplace revenue shares from.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline ListMarketplaceRevenueSharesRequest& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include shares with these product identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetProductIds() const { return m_productIds; }
  inline bool ProductIdsHasBeenSet() const { return m_productIdsHasBeenSet; }
  template <typename ProductIdsT = Aws::Vector<Aws::String>>
  void SetProductIds(ProductIdsT&& value) {
    m_productIdsHasBeenSet = true;
    m_productIds = std::forward<ProductIdsT>(value);
  }
  template <typename ProductIdsT = Aws::Vector<Aws::String>>
  ListMarketplaceRevenueSharesRequest& WithProductIds(ProductIdsT&& value) {
    SetProductIds(std::forward<ProductIdsT>(value));
    return *this;
  }
  template <typename ProductIdsT = Aws::String>
  ListMarketplaceRevenueSharesRequest& AddProductIds(ProductIdsT&& value) {
    m_productIdsHasBeenSet = true;
    m_productIds.emplace_back(std::forward<ProductIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include shares with these product codes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetProductCodes() const { return m_productCodes; }
  inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
  template <typename ProductCodesT = Aws::Vector<Aws::String>>
  void SetProductCodes(ProductCodesT&& value) {
    m_productCodesHasBeenSet = true;
    m_productCodes = std::forward<ProductCodesT>(value);
  }
  template <typename ProductCodesT = Aws::Vector<Aws::String>>
  ListMarketplaceRevenueSharesRequest& WithProductCodes(ProductCodesT&& value) {
    SetProductCodes(std::forward<ProductCodesT>(value));
    return *this;
  }
  template <typename ProductCodesT = Aws::String>
  ListMarketplaceRevenueSharesRequest& AddProductCodes(ProductCodesT&& value) {
    m_productCodesHasBeenSet = true;
    m_productCodes.emplace_back(std::forward<ProductCodesT>(value));
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
  inline ListMarketplaceRevenueSharesRequest& WithMaxResults(int value) {
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
  ListMarketplaceRevenueSharesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort marketplace revenue shares by.</p>
   */
  inline MarketplaceRevenueShareSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(MarketplaceRevenueShareSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListMarketplaceRevenueSharesRequest& WithSortBy(MarketplaceRevenueShareSortBy value) {
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
  inline ListMarketplaceRevenueSharesRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include marketplace revenue shares created after this
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
  ListMarketplaceRevenueSharesRequest& WithCreatedAfter(CreatedAfterT&& value) {
    SetCreatedAfter(std::forward<CreatedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include marketplace revenue shares created before this
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
  ListMarketplaceRevenueSharesRequest& WithCreatedBefore(CreatedBeforeT&& value) {
    SetCreatedBefore(std::forward<CreatedBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::Vector<Aws::String> m_productIds;

  Aws::Vector<Aws::String> m_productCodes;

  int m_maxResults{0};

  Aws::String m_nextToken;

  MarketplaceRevenueShareSortBy m_sortBy{MarketplaceRevenueShareSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  Aws::Utils::DateTime m_createdAfter{};

  Aws::Utils::DateTime m_createdBefore{};
  bool m_catalogHasBeenSet = false;
  bool m_productIdsHasBeenSet = false;
  bool m_productCodesHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_createdAfterHasBeenSet = false;
  bool m_createdBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
